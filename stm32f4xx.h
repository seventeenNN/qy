/*用来存放寄存器映射相关的代码*/


	//先找到原理图中所用到的哪个gpio，找到对应的基地址
#define GPIO_BASE (( unsigned int )  0x40021400)

//根据偏移地址，得出相应的地址
#define GPIO_MODER  *(unsigned int *)( GPIO_BASE+0X00)
#define GPIO_OTYPER *(unsigned int *)( GPIO_BASE+0X04)
#define GPIO_ODR    *(unsigned int *)( GPIO_BASE+0X14)

//(unsigned int *)强制类型转换为对地址的操作，计算机不会自动的认为是地址

//还要找出时钟，根据外设挂载的总线，找出对应的时钟使能寄存器
//同样上述过程


#define RCC_BASE ((unsigned int ) 0x40023800)
	

#define RCC_AHB1ENR *(unsigned int *)(RCC_BASE+0X30)
	
