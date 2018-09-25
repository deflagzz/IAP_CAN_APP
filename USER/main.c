
#include "include.h"   

int main(void)
{	 	
	IAP_APP_Init();					//该函数请放在main函数最开头
	
	delay_init();	    			//延时函数初始化
	KEY_Init();						//拨码开关初始化
	LED_Init();			    		//LED端口初始化
	
	//Power_ON_delay();				//开机延时
	//KEY_GET_CAN_ID(&g_UT_CAN_ID);	//从拨码开关获取CAN_ID
	//g_UT_CAN_ID = 11;
	
	//mem_init(); 			//初始化内部内存池	
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	
	//usart_init(115200);	 	//串口初始化为115200
	CAN_Mode_Init(CAN_SJW_1tq,CAN_BS2_8tq,CAN_BS1_9tq,4,CAN_Mode_Normal);//CAN初始化环回模式,波特率500Kbps    

	while(1)
	{		
		delay_ms(500);
				
		LED3 = !LED3;
	}		
}


