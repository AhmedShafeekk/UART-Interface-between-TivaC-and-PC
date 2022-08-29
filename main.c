#include "UART.h"
#include "SysTick.h"
#include "PORTF.h"

int main()
{			volatile char ch, pch=' '; //character , previous character	
			PLL_Init();
			SysTick_Init();
			UART_Init(); //Use UART1 (A0=RX,A1=TX)ADC0_ACTSS_R
			SysTick_Wait1us(500);
			UART_OutString("Embedded Systems bonus assignment is done!!\n");
			UART_OutString("Student name: Ahmed Shafeek Shafeek\n");
			UART_OutString("ID: 	\n");
			UART_OutString("Please enter ('r' or 'b' or 'g') without quotes\nInput:   ");
	
			PORTF_Init();
			All_LEDS_OFF();
	
	while(1)
	{
		ch = UART_InChar();
		if (pch !='\r')
		{
				UART_OutString("Please enter ('r' or 'b' or 'g') without quotes\nInput:   ");
				UART_OutChar(ch);
		}
		
		switch (ch)
			{
			case 'r':
				pch =ch;
				All_LEDS_OFF();
				PORTF_DigitalWrite(red,HIGH);
				UART_OutString("\nred led is on\n");
				break;
			case 'b':
				pch =ch;
				All_LEDS_OFF();
				PORTF_DigitalWrite(blue,HIGH);
				UART_OutString("\nblue led is on\n");
				break;
			case 'g':
				pch =ch;
				All_LEDS_OFF();
				PORTF_DigitalWrite(green,HIGH);
			  UART_OutString("\ngreen led is on\n");
				break;
			case '\r':
				break;
		}
	}
}
