#include "bsp_led.h"




void LED_GPIO_Config(void)
{
//1.��ʱ��
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF, ENABLE);
	
//2.����ṹ��
	GPIO_InitTypeDef GPIO_InitStruct;
	
	
	
//3.���ó�ʼ���ṹ��ĳ�Ա
	
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_6;
	GPIO_InitStruct.GPIO_Mode  = GPIO_Mode_OUT;
	GPIO_InitStruct.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStruct.GPIO_Speed  = GPIO_Low_Speed;
	//GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;


	
//4.���ó�ʼ�������������úõĽṹ���Ա�Ĳ���д��Ĵ���
	
	GPIO_Init(GPIOF, &GPIO_InitStruct);
	
	GPIO_ResetBits(GPIOF, GPIO_Pin_6);
	
	



}

