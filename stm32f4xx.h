/*������żĴ���ӳ����صĴ���*/


	//���ҵ�ԭ��ͼ�����õ����ĸ�gpio���ҵ���Ӧ�Ļ���ַ
#define GPIO_BASE (( unsigned int )  0x40021400)

//����ƫ�Ƶ�ַ���ó���Ӧ�ĵ�ַ
#define GPIO_MODER  *(unsigned int *)( GPIO_BASE+0X00)
#define GPIO_OTYPER *(unsigned int *)( GPIO_BASE+0X04)
#define GPIO_ODR    *(unsigned int *)( GPIO_BASE+0X14)

//(unsigned int *)ǿ������ת��Ϊ�Ե�ַ�Ĳ���������������Զ�����Ϊ�ǵ�ַ

//��Ҫ�ҳ�ʱ�ӣ�����������ص����ߣ��ҳ���Ӧ��ʱ��ʹ�ܼĴ���
//ͬ����������


#define RCC_BASE ((unsigned int ) 0x40023800)
	

#define RCC_AHB1ENR *(unsigned int *)(RCC_BASE+0X30)
	
