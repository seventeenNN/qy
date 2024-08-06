#include "bsp_led.h"




void LED_GPIO_Config(void)
{
//1.开时钟
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
	
//2.定义结构体
	GPIO_InitTypeDef GPIO_InitStruct;
	
	
	
//3.配置初始化结构体的成员
	
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Mode  = GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed  = GPIO_Low_Speed;
	//GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;


	
//4.调用初始化函数，将配置好的结构体成员的参数写入寄存器
	
	GPIO_Init(GPIOF, &GPIO_InitStruct);
	
	GPIO_ResetBits(GPIOF, GPIO_Pin_6);
	
	



}

