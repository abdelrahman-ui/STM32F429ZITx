/***************************************************************************************
 *************************** - UART_private.h				 ***************************
***************************   -Created: 7/5/2021			 ***************************
***************************   -Author: Abdelrahman_Magdy     ***************************
***************************   -Version : _1_				 ***************************
***************************   -Note :
									*-
									*-
 **************************************************************************************/ 

/**************************************************************************************

*	 - Developer can't Edit in it    
*	  - Register _ Defination		
*	  - Design : 
					- #define	:	NO
					- Union		:	NO
					- Struct	:	NO

**************************************************************************************/

/*************************************************************************************
******************* guard of file will call on time in .c		   *******************
*************************************************************************************/ 


#ifndef UART_PRIVATE_H
#define UART_PRIVATE_H

/***********************************************************************************
	-----> Macros
			*  From Memory Map At Referance Manual Get 
										- Base_Address OF (6)SPI
										- Bus OF SPI 
************************************************************************************/
												/*Base_Address */
#define UART1_Base_Address				0x40011000       				   /*   APB2    */
#define UART2_Base_Address				0x40004400      					 /*   APB1    */
#define UART3_Base_Address				0x40004800        				 /*   APB1    */
#define UART4_Base_Address				0x40004C00      					 /*   APB1    */
#define UART5_Base_Address				0x40005000      					 /*   APB1    */
#define UART6_Base_Address				0x40011400								 /* 	APB2	  */
#define UART7_Base_Address				0x40007800								 /*   APB1		*/                                                             
#define UART8_Base_Address				0x40007C00			 					 /*   APB1		*/

/***********************************************************************************
-----> Macros
*  Register Map : USART1_Register

************************************************************************************/

#define USART1_SR					   		 (*((volatile u32*) (UART1_Base_Address+0x00)))	
#define USART1_DR					   		 (*((volatile u32*) (UART1_Base_Address+0x04)))	
#define USART1_BRR				   		 (*((volatile u32*) (UART1_Base_Address+0x08)))	
#define USART1_CR1				   		 (*((volatile u32*) (UART1_Base_Address+0x0C)))	
#define USART1_CR2					 		 (*((volatile u32*) (UART1_Base_Address+0x10)))	
#define USART1_CR3					 		 (*((volatile u32*) (UART1_Base_Address+0x14)))	
#define USART1_GTPR				   		 (*((volatile u32*) (UART1_Base_Address+0x18)))	
/***********************************************************************************
-----> Macros
*  Register Map : USART2_Register

************************************************************************************/

#define USART2_SR					   		 (*((volatile u32*) (UART2_Base_Address+0x00)))	
#define USART2_DR					   		 (*((volatile u32*) (UART2_Base_Address+0x04)))	
#define USART2_BRR				   		 (*((volatile u32*) (UART2_Base_Address+0x08)))	
#define USART2_CR1				   		 (*((volatile u32*) (UART2_Base_Address+0x0C)))	
#define USART2_CR2					 		 (*((volatile u32*) (UART2_Base_Address+0x10)))	
#define USART2_CR3					 		 (*((volatile u32*) (UART2_Base_Address+0x14)))	
#define USART2_GTPR				   		 (*((volatile u32*) (UART2_Base_Address+0x18)))	
/***********************************************************************************
-----> Macros
*  Register Map : USART3_Register

************************************************************************************/

#define USART3_SR					   		 (*((volatile u32*) (UART3_Base_Address+0x00)))	
#define USART3_DR					   		 (*((volatile u32*) (UART3_Base_Address+0x04)))	
#define USART3_BRR				   		 (*((volatile u32*) (UART3_Base_Address+0x08)))	
#define USART3_CR1				   		 (*((volatile u32*) (UART3_Base_Address+0x0C)))	
#define USART3_CR2					 		 (*((volatile u32*) (UART3_Base_Address+0x10)))	
#define USART3_CR3					 		 (*((volatile u32*) (UART3_Base_Address+0x14)))	
#define USART3_GTPR				   		 (*((volatile u32*) (UART3_Base_Address+0x18)))	
/***********************************************************************************
-----> Macros
*  Register Map : USART4_Register

************************************************************************************/

#define USART4_SR					   		 (*((volatile u32*) (UART4_Base_Address+0x00)))	
#define USART4_DR					   		 (*((volatile u32*) (UART4_Base_Address+0x04)))	
#define USART4_BRR				   		 (*((volatile u32*) (UART4_Base_Address+0x08)))	
#define USART4_CR1				   		 (*((volatile u32*) (UART4_Base_Address+0x0C)))	
#define USART4_CR2					 		 (*((volatile u32*) (UART4_Base_Address+0x10)))	
#define USART4_CR3					 		 (*((volatile u32*) (UART4_Base_Address+0x14)))	
#define USART4_GTPR				   		 (*((volatile u32*) (UART4_Base_Address+0x18)))	
/***********************************************************************************
-----> Macros
*  Register Map : USART5_Register

************************************************************************************/

#define USART5_SR					   		 (*((volatile u32*) (UART5_Base_Address+0x00)))	
#define USART5_DR					   		 (*((volatile u32*) (UART5_Base_Address+0x04)))	
#define USART5_BRR				   		 (*((volatile u32*) (UART5_Base_Address+0x08)))	
#define USART5_CR1				   		 (*((volatile u32*) (UART5_Base_Address+0x0C)))	
#define USART5_CR2					 		 (*((volatile u32*) (UART5_Base_Address+0x10)))	
#define USART5_CR3					 		 (*((volatile u32*) (UART5_Base_Address+0x14)))	
#define USART5_GTPR				   		 (*((volatile u32*) (UART5_Base_Address+0x18)))	
/***********************************************************************************
-----> Macros
*  Register Map : USART6_Register

************************************************************************************/

#define USART6_SR					   		 (*((volatile u32*) (UART6_Base_Address+0x00)))	
#define USART6_DR					   		 (*((volatile u32*) (UART6_Base_Address+0x04)))	
#define USART6_BRR				   		 (*((volatile u32*) (UART6_Base_Address+0x08)))	
#define USART6_CR1				   		 (*((volatile u32*) (UART6_Base_Address+0x0C)))	
#define USART6_CR2					 		 (*((volatile u32*) (UART6_Base_Address+0x10)))	
#define USART6_CR3					 		 (*((volatile u32*) (UART6_Base_Address+0x14)))	
#define USART6_GTPR				   		 (*((volatile u32*) (UART6_Base_Address+0x18)))	
/***********************************************************************************
-----> Macros
*  Register Map : USART7_Register

************************************************************************************/

#define USART7_SR					   		 (*((volatile u32*) (UART7_Base_Address+0x00)))	
#define USART7_DR					   		 (*((volatile u32*) (UART7_Base_Address+0x04)))	
#define USART7_BRR				   		 (*((volatile u32*) (UART7_Base_Address+0x08)))	
#define USART7_CR1				   		 (*((volatile u32*) (UART7_Base_Address+0x0C)))	
#define USART7_CR2					 		 (*((volatile u32*) (UART7_Base_Address+0x10)))	
#define USART7_CR3					 		 (*((volatile u32*) (UART7_Base_Address+0x14)))	
#define USART7_GTPR				   		 (*((volatile u32*) (UART7_Base_Address+0x18)))	
/***********************************************************************************
-----> Macros
*  Register Map : USART8_Register

************************************************************************************/

#define USART8_SR					   		 (*((volatile u32*) (UART8_Base_Address+0x00)))	
#define USART8_DR					   		 (*((volatile u32*) (UART8_Base_Address+0x04)))	
#define USART8_BRR				   		 (*((volatile u32*) (UART8_Base_Address+0x08)))	
#define USART8_CR1				   		 (*((volatile u32*) (UART8_Base_Address+0x0C)))	
#define USART8_CR2					 		 (*((volatile u32*) (UART8_Base_Address+0x10)))	
#define USART8_CR3					 		 (*((volatile u32*) (UART8_Base_Address+0x14)))	
#define USART8_GTPR				   		 (*((volatile u32*) (UART8_Base_Address+0x18)))	







#endif //UART_PRIVATE_H

