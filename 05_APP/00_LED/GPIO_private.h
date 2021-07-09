/***************************************************************************************
 *************************** - GPIO_private.h				 ***************************
***************************   -Created: 5/16/2021			 ***************************
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


#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H

/***********************************************************************************
	-----> Macros
			*  Base_Address GPI0X				
************************************************************************************/

#define  GPIOA_BASE_ADDRESS									0x40020000
#define  GPIOB_BASE_ADDRESS									0x40020400
#define  GPIOC_BASE_ADDRESS									0x40020800
#define  GPIOD_BASE_ADDRESS									0x40020C00
#define  GPIOE_BASE_ADDRESS									0x40021000
#define  GPIOF_BASE_ADDRESS									0x40021400
#define  GPIOG_BASE_ADDRESS									0x40021800
#define  GPIOH_BASE_ADDRESS									0x40021C00

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_A		
************************************************************************************/


#define  GPIOA_MODER									(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X00)))			
#define  GPIOA_OTYPER									(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X04)))			
#define  GPIOA_OSPEEDR								(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X08)))			
#define  GPIOA_PUPDR									(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X0C)))			
#define  GPIOA_IDR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X10)))			
#define  GPIOA_ODR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X14)))			
#define  GPIOA_BSRR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X18)))			
#define  GPIOA_LCKR										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X1C)))			
#define  GPIOA_AFRL										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X20)))			
#define  GPIOA_AFRH										(*((volatile u32*) (GPIOA_BASE_ADDRESS +0X24)))			
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_B		
************************************************************************************/


#define  GPIOB_MODER									(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X00)))
#define  GPIOB_OTYPER									(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X04)))
#define  GPIOB_OSPEEDR								(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X08)))
#define  GPIOB_PUPDR									(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X0C)))
#define  GPIOB_IDR										(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X10)))
#define  GPIOB_ODR										(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X14)))
#define  GPIOB_BSRR										(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X18)))
#define  GPIOB_LCKR										(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X1C)))
#define  GPIOB_AFRL										(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X20)))
#define  GPIOB_AFRH										(*((volatile u32*) (GPIOB_BASE_ADDRESS +0X24)))	
																										
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_C		
************************************************************************************/


#define  GPIOC_MODER									(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X00)))
#define  GPIOC_OTYPER									(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X04)))
#define  GPIOC_OSPEEDR								(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X08)))
#define  GPIOC_PUPDR									(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X0C)))
#define  GPIOC_IDR										(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X10)))
#define  GPIOC_ODR										(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X14)))
#define  GPIOC_BSRR										(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X18)))
#define  GPIOC_LCKR										(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X1C)))
#define  GPIOC_AFRL										(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X20)))
#define  GPIOC_AFRH										(*((volatile u32*) (GPIOC_BASE_ADDRESS +0X24)))	
	
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_D		
************************************************************************************/


#define  GPIOD_MODER									(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X00)))
#define  GPIOD_OTYPER									(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X04)))
#define  GPIOD_OSPEEDR								(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X08)))
#define  GPIOD_PUPDR									(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X0C)))
#define  GPIOD_IDR										(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X10)))
#define  GPIOD_ODR										(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X14)))
#define  GPIOD_BSRR										(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X18)))
#define  GPIOD_LCKR										(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X1C)))
#define  GPIOD_AFRL										(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X20)))
#define  GPIOD_AFRH										(*((volatile u32*) (GPIOD_BASE_ADDRESS +0X24)))	

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_E		
************************************************************************************/


#define  GPIOE_MODER									(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X00)))
#define  GPIOE_OTYPER									(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X04)))
#define  GPIOE_OSPEEDR								(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X08)))
#define  GPIOE_PUPDR									(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X0C)))
#define  GPIOE_IDR										(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X10)))
#define  GPIOE_ODR										(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X14)))
#define  GPIOE_BSRR										(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X18)))
#define  GPIOE_LCKR										(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X1C)))
#define  GPIOE_AFRL										(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X20)))
#define  GPIOE_AFRH										(*((volatile u32*) (GPIOE_BASE_ADDRESS +0X24)))	
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_F		
************************************************************************************/


#define  GPIOF_MODER									(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X00)))
#define  GPIOF_OTYPER									(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X04)))
#define  GPIOF_OSPEEDR							  (*((volatile u32*) (GPIOF_BASE_ADDRESS +0X08)))
#define  GPIOF_PUPDR									(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X0C)))
#define  GPIOF_IDR										(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X10)))
#define  GPIOF_ODR										(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X14)))
#define  GPIOF_BSRR										(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X18)))
#define  GPIOF_LCKR										(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X1C)))
#define  GPIOF_AFRL										(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X20)))
#define  GPIOF_AFRH										(*((volatile u32*) (GPIOF_BASE_ADDRESS +0X24)))	

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_G		
************************************************************************************/


#define  GPIOG_MODER									(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X00)))
#define  GPIOG_OTYPER									(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X04)))
#define  GPIOG_OSPEEDR								(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X08)))
#define  GPIOG_PUPDR									(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X0C)))
#define  GPIOG_IDR										(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X10)))
#define  GPIOG_ODR										(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X14)))
#define  GPIOG_BSRR										(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X18)))
#define  GPIOG_LCKR										(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X1C)))
#define  GPIOG_AFRL										(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X20)))
#define  GPIOG_AFRH										(*((volatile u32*) (GPIOG_BASE_ADDRESS +0X24)))

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_H		
************************************************************************************/


#define  GPIOH_MODER									(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X00)))
#define  GPIOH_OTYPER									(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X04)))
#define  GPIOH_OSPEEDR								(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X08)))
#define  GPIOH_PUPDR									(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X0C)))
#define  GPIOH_IDR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X10)))
#define  GPIOH_ODR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X14)))
#define  GPIOH_BSRR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X18)))
#define  GPIOH_LCKR										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X1C)))
#define  GPIOH_AFRL										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X20)))
#define  GPIOH_AFRH										(*((volatile u32*) (GPIOH_BASE_ADDRESS +0X24)))	
																																																																																																																																												
#endif //GPIO_PRIVATE_H

