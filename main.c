#include "stm32f4xx.h"



int main(void)
{
	
	//��ʱ��
		*( unsigned int *)(0x40023800+0x30) |= (1<<5);
	
	//GPIOF����Ϊ���
	
		*( unsigned int *)(0x40021400+0x00) &=~(  (0x03)<<(2*6));
		*( unsigned int *)(0x40021400+0x00) |= (1<<(2*6));
	
	//����ߵ�ƽ
	
		*( unsigned int *)(0x40021400+0x14) |= (1<<6);
	
	
	
	//����͵�ƽ
		*( unsigned int *)(0x40021400+0x14) &=~(1<<6);
		
	
}




void SystemInit (void)
{

//startup��

}

