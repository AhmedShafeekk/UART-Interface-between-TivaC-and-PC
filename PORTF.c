#include "PORTF.h"

void PORTF_Init(void)
{
		SYSCTL_RCGCGPIO_R |=0x20;
		while ((SYSCTL_PRGPIO_R&0x20)==0){}
		GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY;
		GPIO_PORTF_CR_R = red|green|blue;	
		GPIO_PORTF_DEN_R |= red|blue|green;
		GPIO_PORTF_DIR_R |= red|blue|green;
		GPIO_PORTF_AMSEL_R = 0;
		GPIO_PORTF_AFSEL_R = 0;
		GPIO_PORTF_PCTL_R = 0;
}
void PORTF_DigitalWrite(LED led,STATE state)
{
		if (state ==HIGH)
			GPIO_PORTF_DATA_R |= led;
		else if (state==LOW)
			GPIO_PORTF_DATA_R &=~led;
}

void All_LEDS_OFF(void)
{
		GPIO_PORTF_DATA_R &=~(red|green|blue);
}
