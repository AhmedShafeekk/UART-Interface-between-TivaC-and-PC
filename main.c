#include "UART.h"
#include "SysTick.h"
#include "PORTF.h"

int main()
{			volatile char ch;	
			SysTick_Init();
			UART_Init(); //Use UART0 (A0=RX, A1=TX)ADC0_ACTSS_R
			SysTick_Wait1us(500);
			UART_OutString("Embedded Systems bonus assignment is done!!\n");
			UART_OutString("Student name: Ahmed Shafeek Shafeek\n");
			UART_OutString("ID: 1900112\n");
	
			PORTF_Init();
			All_LEDS_OFF();

	while(1)
	{
		UART_OutString("Please enter ('r' or 'b' or 'g') without quotes\nInput:   ");
		ch = UART_InChar();
		UART_OutChar(ch);
		UART_OutChar('\n');
		switch (ch)
			{
			case 'r':
				All_LEDS_OFF();
				PORTF_DigitalWrite(red,HIGH);
				break;
			case 'b':
				All_LEDS_OFF();
				PORTF_DigitalWrite(blue,HIGH);
				break;
			case 'g':
				All_LEDS_OFF();
				PORTF_DigitalWrite(green,HIGH);
				break;

		}
	}
				
}
