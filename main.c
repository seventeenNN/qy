#include "stm32f4xx.h"
//记得打开options for target里面的use ，microLTB才能执行.c文件



void delay( unsigned int count)
{
	for(;count !=0;count--);


}
int main()
{
	
	
	//1.开gpio端口时钟
   RCC_AHB1ENR  |=(1<<5);
	//|是为了保证其他位不受影响，但是使第5位为1
	
	
	
	
	//2.配置MODER
	
	
	/*这里的moder有两位控制，首先要进行清零，再进行设置*/
	GPIO_MODER &=~(3<<(2*6));
	//&之前的操作，使目标的两个位为1，其他位为0，然后取反，目标位为0，其他位为1，
	//与原来的与操作后，目标位为0,其他位1
	GPIO_MODER |=(1<<(2*6));


	//3.让gpio输出0或1，ODR寄存器或者BSRR寄存器
	
	GPIO_ODR |=(1<<6);
	
	
	//闪烁
	while (1)
	{
		GPIO_ODR &=~(1<<6);
		
		delay(0x0fffff);
		
		GPIO_ODR |=(1<<6);
 
		delay(0x0fffff);

	}
	
	
	
}


void SystemInit (void )
{

}

