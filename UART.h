#ifndef UART_H
#define UART_H

#include "tm4c123gh6pm.h"
#include "SysTick.h"
#include <stdint.h>


#define RXFE 1U<<4 //Fifo Empty
#define TXFF 1U<<5 //Fifo Full
#define UARTEN 1U<<0 //Enable UART
#define RXE 1U<<9 //Enable RX  
#define TXE 1U<<8 //Enable TX
#define EightBits 3U<<5 //8-bits, No parrity, 1 stop, FF disable
#define clk 16e6 
#define clkDivisor 9600 

void UART_Init(void);
char UART_InChar(void);
void UART_OutChar(char);
void UART_OutString(char*);

#endif
