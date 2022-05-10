# UART-Interface-between-TivaC-and-PC


#### This code is compiled and uploaded to the board using [Keil version 5](https://www.keil.com/demo/eval/arm.htm), Where I used it instead of IAR or keril version 4, because I needed to modify the startup.c file. Simply to make it work change line no. 36 in the startup.c to **#define CLOCK_SETUP 0**. This will make the connection work on the board frequency.
#### If you couldn't find the Stellaris ICDI in the project options. You can download it from this link [UVISION: Stellaris ICDI Debug Adapter Support](https://developer.arm.com/documentation/ka002280/latest)
#### Also you need to download [PuTTY](https://www.putty.org/) to use it as a serial monitor.   
![image](https://user-images.githubusercontent.com/74486351/167730569-672772a8-c6ed-44be-b7b4-5dff63a0f263.png)
##### Make the configurations like this
![image](https://user-images.githubusercontent.com/74486351/167730750-f2039663-a5aa-463b-ada8-3d9d732242ba.png)
##### Check the device manager to know which port you are using.
#### You can also download the TivaC drivers from [here](https://www.ti.com/tool/SW-TM4C#downloads) if you don't have them.
