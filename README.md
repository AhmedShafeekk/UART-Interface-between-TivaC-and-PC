# **UART-Interface-between-TivaC-and-PC**
#### This code is compiled and uploaded to the board using [Keil version 5](https://www.keil.com/demo/eval/arm.htm) Simply to make it work change line no. 36 in the startup.c to **#define CLOCK_SETUP 0**. This will make the connection work on the board frequency. or use PLL() function in the main.c
#### If you couldn't find the Stellaris ICDI in the project options. You can download it from this link [UVISION: Stellaris ICDI Debug Adapter Support](https://developer.arm.com/documentation/ka002280/latest)

### interact with pc through PuTTY or serial monitor of arduino IDE.
