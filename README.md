# UART-Interface-between-TivaC-and-PC


#### This code is compiled and uploaded to the board using [Keil version 5](https://www.keil.com/demo/eval/arm.htm), Where I used it instead of IAR or keril version 4, because I needed to modify the startup.c file. Simply to make it work change line no. 36 in the startup.c to **#define CLOCK_SETUP 0**. This will make the connection work on the board frequency.
#### If you couldn't find the Stellaris ICDL in the project options. You can download it from this link [UVISION: Stellaris ICDI Debug Adapter Support](https://developer.arm.com/documentation/ka002280/latest)
