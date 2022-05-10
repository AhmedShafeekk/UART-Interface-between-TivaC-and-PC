#ifndef SYSTICK_H_
#define SYSTICK_H_
#include "tm4c123gh6pm.h"
#include <stdint.h>
#define SYSDIV2 4
#define delay_ms(n) SysTick_Wait1us(n)
#define delay_us(n) SysTick_Wait1ms(n)

// Functions definitions of SysTick
void SysTick_Init(void);
void SysTick_Wait(uint32_t delay);
void SysTick_Wait1ms(uint32_t delayms);
void SysTick_Wait1us(uint32_t delayus);
void PLL_Init(void);
void delay(void);
#endif // !SYSTICK_H_
