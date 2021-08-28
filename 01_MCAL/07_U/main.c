
#include "stm32f429xx.h"
/************** INCLUDE LIB **************/
		 #include "STD_TYPES.h"
		 #include "BIT_MATH.h"
/*****************************************/	 

/************** INCLUDE MCAL**************/
		#include "RCC_private.h"
		#include "RCC_interface.h"
		#include "RCC_config.h"
		#include "GPIO_private.h"
		#include "GPIO_interface.h"
		
#define TX_1  		9U 
#define RX_1  		10U 

int main (void)
{
			/* 		Enable CLK For PortA At AHB1		*/
  MRCC_voidEnableClock ( AHB1 ,PERIPHERAL_EN_GPIOA  );
			
		 /*  The Two(TX,RX) Pin Will Be ALT    */
	MGOIP_voidSetPinMode(GPIOA ,TX_1,MODE_ALTF)  ;
	MGOIP_voidSetPinMode(GPIOA ,RX_1,MODE_ALTF)  ;
			
		 /*	Config The TX As OutPut Push_Pull	*/
	MGPIO_voidSetOutType(GPIOA ,TX_1,OUTPUT_TYPE_PUSH_PULL)  ; 
	
		/* Select The Speed Of TX As Meduim 	*/
	MGPIO_voidSetOutSpeed(GPIOA ,TX_1,OUTPUT_MEDUIM_SPEED)  ;
	
		/*  Confi RX As Input Pin With Pull_Up 	*/
	MGPIO_voidSetPull(GPIOA ,RX_1,PULL_UP)  ;
	
	/*	Select The ALT_FUN For Pin 9 , 10 From AFRL,H	UART(1:3) 0X0111*/
	#define GPIO_AFRH_AFRH9						((u32) 0X000000F0)
	#define GPIO_AFRH_AFRH9_AF7				((u32) 0X00000070)
	#define GPIO_AFRH_AFRH10					((u32) 0X00000F00)
	#define GPIO_AFRH_AFRH10_AF7			((u32) 0X00000700)
	
	GPIOA->AFR[1] &=~(GPIO_AFRH_AFRH9 | GPIO_AFRH_AFRH10 );
	GPIOA->AFR[1] |=(GPIO_AFRH_AFRH9_AF7 | GPIO_AFRH_AFRH9_AF7 );
	
			/*	 Config Of Uart	 */
		/*	Enable CLK Of UART1 PERIPHERAL */ 
		MRCC_voidEnableClock ( APB2 ,PERIPHERAL_EN_USART1 );
		
		/*	 Select Over Sampling 	*/
		USART1->CR1 &=~USART_CR1_OVER8; 
		
		/*	*/
		
}

