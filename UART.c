#include "UART.h"

void UART_Init(void)
{
		SYSCTL_RCGCUART_R |=0x1; //activate UART0
		while ((SYSCTL_PRUART_R&0x1)==0){}
		SYSCTL_RCGCGPIO_R |= 0x1; //activate port A
		while ((SYSCTL_PRGPIO_R&0x1)==0){}
		GPIO_PORTA_LOCK_R = GPIO_LOCK_KEY;
		GPIO_PORTA_CR_R |= 1U<<1 | 1U<<0;

		UART0_CTL_R =0; //disable UART
		UART0_CC_R = 0;
		UART0_IBRD_R = 520; //(int)clk /(16*clkDivisor); //9600 baud rate  Integer = 104 may be 520
		UART0_FBRD_R =  53; //(int)(((double)(clkDivisor)-(int)(clkDivisor))*((double)(64))+0.5); //9600 baud rate  fraction = 11 may be 53
		UART0_LCRH_R = EightBits; //8bit no parity one stop 
		UART0_CTL_R |= UARTEN|TXE|RXE;//enable UART
			
		GPIO_PORTA_AFSEL_R |=0x3; //PA0 , PA1
		GPIO_PORTA_DEN_R |=0x3; //PA0 , PA1
		GPIO_PORTA_PCTL_R = 0x11; //PA0 , PA1
		GPIO_PORTA_AMSEL_R =0; 
}

char UART_InChar(void)
{
		while((UART0_FR_R&RXFE)!=0){} //while(RX Fifo empty) {wait}
		return((char)(UART0_DR_R &0xFF)); // when Full read
}

void UART_OutChar(char data)
{
		while((UART0_FR_R &TXFF)!=0){} //while (TX Fifo full) {wait}
			UART0_DR_R = data; // when empty write data 
}

void UART_OutString(char* str)
{
		volatile int i=0;
		while(*(str+i)!=0)
		{	
				UART_OutChar(*(str+i));
				i++;
		}
}
