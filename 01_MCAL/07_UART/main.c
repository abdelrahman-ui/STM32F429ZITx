/****************************** *********************************************************
 ***************************  - UART_main			 								****************************
***************************   - Created: 5/12/2021			 			****************************
***************************   - Author: Abdelrahman_Magdy     ***************************
***************************   - Version : _1_				 ****************************
***************************   - Note :
									*-
									*-
**************************************************************************************/




/************** INCLUDE LIB **************/
		#include "stm32f429xx.h"
		 #include "STD_TYPE.h"
		 #include "BIT_MATH.h"
/*****************************************/	 

/************** INCLUDE MCAL**************/
		#include "RCC_private.h"
		#include "RCC_interface.h"
		#include "RCC_config.h"
		#include "GPIO_private.h"
		#include "GPIO_interface.h"
		#include "UART_interface.h"
		
#define TX_1  		9U 
#define RX_1  		10U 

int main (void)
{		/* Config Uart1*/
	UART1_voidInit();
		/* Enable UART , TX , RX*/
	UART1_voidEN();
	while(1)
	{
		 UART_voidWrite('A');
		 UART_voidWrite('B');
		 UART_voidWrite('D');
		 UART_voidWrite('O');
		 UART_voidWrite('\r');	// Return Cursor Bake To Start Of Line
		 UART_voidWrite('\n');  // Go Dowen One Line 
		 Delay_voidMs(1000);
}


}
void UART1_voidInit(void)
{
		/* 		Enable CLK For PortA At AHB1		*/
  MRCC_voidEnableClock ( AHB1 ,PERIPHERAL_EN_GPIOA  );
			
		 /*  The Two(TX,RX) Pin Will Be ALT    */
	MGOIP_voidSetPinMode(GPIOA_PORT ,TX_1,MODE_ALTF)  ;
	MGOIP_voidSetPinMode(GPIOA_PORT ,RX_1,MODE_ALTF)  ;
	
	
			
		 /*	Config The TX As OutPut Push_Pull	*/
	MGPIO_voidSetOutType(GPIOA_PORT ,TX_1,OUTPUT_TYPE_PUSH_PULL)  ; 
	
		/* Select The Speed Of TX As Meduim 	*/
	MGPIO_voidSetOutSpeed(GPIOA_PORT ,TX_1,OUTPUT_MEDUIM_SPEED)  ;
	
		/*  Confi RX As Input Pin With Pull_Up 	*/
	MGPIO_voidSetPull(GPIOA_PORT ,RX_1,PULL_UP)  ;
	
	 /*	Select The ALT_FUN For Pin 9 , 10 From AFRL,H	UART(1:3) 0X0111 (A7) At Pin 9 & 10 */
	#define GPIO_AFRH_AFRH9						((u32) 0X000000F0)
	#define GPIO_AFRH_AFRH9_AF7				((u32) 0X00000070)
	#define GPIO_AFRH_AFRH10					((u32) 0X00000F00)
	#define GPIO_AFRH_AFRH10_AF7			((u32) 0X00000700)
	
				/*  	The ALT_FUN As UART			*/
	GPIOA->AFR[1] &=~(GPIO_AFRH_AFRH9 | GPIO_AFRH_AFRH10 );
	GPIOA->AFR[1] |=(GPIO_AFRH_AFRH9_AF7 | GPIO_AFRH_AFRH9_AF7 );
	
			    /*		 Config Of Uart	 		*/
		/*	Enable CLK Of UART1 PERIPHERAL */ 
	MRCC_voidEnableClock ( APB2 ,PERIPHERAL_EN_USART1 );
		
		/*	 Select Over Sampling  To Sample By Double Sample 16	*/
	USART1->CR1 &=~USART_CR1_OVER8; 
		
		/*		Enable The One Bit The Noise Sense Of One Bit One Bus 	*/
	USART1->CR3 |=USART_CR3_ONEBIT;
		/*	Select The Size Of Data  : 1 Start Bit & Data */
	USART1->CR1 |=USART_CR1_M;
		/*	Select One Stop Bit	*/
	USART1->CR2 &=~USART_CR2_STOP ; 
		/* EN Parity Control */
	USART1->CR1 |=USART_CR1_PCE ;	
		/*	Select Odd Parity	*/
	USART1->CR1 |=USART_CR1_PS ;
		/* Buad Rate 9600*/
	USART1->BRR = 0X0683 ;
	
	
	
	
	
	
	
}

void UART1_voidEN(void)
{
	USART1->CR1 |=USART_CR1_UE;
	
	USART1->CR1 |=USART_CR1_TE;
	
	USART1->CR1 |=USART_CR1_RE;
	
}
	
 void UART_voidWrite(u8 ch)
 {
	 
	while(!(USART1->SR &(1U<<7)))
	 
	USART1->DR =(ch & 0xff);
	 
 }



void Delay_voidMs(int delay)
{
	volatile int i ;
	for(;delay>0;delay--)
	{
		for(i=0;i<3195;i++);//One Micro Sec
	}
}






