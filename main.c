#include "stm32f4xx.h"



int main(void)
{
	
	//打开时钟
		*( unsigned int *)(0x40023800+0x30) |= (1<<5);
	
	//GPIOF配置为输出
	
		*( unsigned int *)(0x40021400+0x00) &=~(  (0x03)<<(2*6));
		*( unsigned int *)(0x40021400+0x00) |= (1<<(2*6));
	
	//输出高电平
	
		*( unsigned int *)(0x40021400+0x14) |= (1<<6);
	
	
	
	//输出低电平
		*( unsigned int *)(0x40021400+0x14) &=~(1<<6);
		
	
}




void SystemInit (void)
{

//startup中

}

