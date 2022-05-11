#ifndef PORTF_H
#define PORTF_H

#include "tm4c123gh6pm.h"
#include "stdint.h"

typedef enum {red = 1U<<1 , blue = 1U<<2 , green = 1U<<3} LED;
typedef enum {LOW,HIGH} STATE;

void PORTF_Init(void);
void PORTF_DigitalWrite(LED,STATE);
void All_LEDS_OFF(void);
int isAll_LedsOFF(void);
#endif
