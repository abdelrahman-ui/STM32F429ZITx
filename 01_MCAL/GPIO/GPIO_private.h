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


#define  GPIOA_MODER									(*((u32 *) (GPIOA_BASE_ADDRESS +0X00)))			//
#define  GPIOA_OTYPER									(*((u32 *) (GPIOA_BASE_ADDRESS +0X04)))			//
#define  GPIOA_OSPEEDR								(*((u32 *) (GPIOA_BASE_ADDRESS +0X08)))			//
#define  GPIOA_PUPDR									(*((u32 *) (GPIOA_BASE_ADDRESS +0X0C)))			//
#define  GPIOA_IDR										(*((u32 *) (GPIOA_BASE_ADDRESS +0X10)))			//
#define  GPIOA_ODR										(*((u32 *) (GPIOA_BASE_ADDRESS +0X14)))			//
#define  GPIOA_BSRR										(*((u32 *) (GPIOA_BASE_ADDRESS +0X18)))			//
#define  GPIOA_LCKR										(*((u32 *) (GPIOA_BASE_ADDRESS +0X1C)))			//
#define  GPIOA_AFRL										(*((u32 *) (GPIOA_BASE_ADDRESS +0X20)))			//
#define  GPIOA_AFRH										(*((u32 *) (GPIOA_BASE_ADDRESS +0X24)))			//
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_B		
************************************************************************************/


#define  GPIOB_MODER									(*((u32 *) (GPIOB_BASE_ADDRESS +0X00)))
#define  GPIOB_OTYPER									(*((u32 *) (GPIOB_BASE_ADDRESS +0X04)))
#define  GPIOB_OSPEEDR								    (*((u32 *) (GPIOB_BASE_ADDRESS +0X08)))
#define  GPIOB_PUPDR									(*((u32 *) (GPIOB_BASE_ADDRESS +0X0C)))
#define  GPIOB_IDR										(*((u32 *) (GPIOB_BASE_ADDRESS +0X10)))
#define  GPIOB_ODR										(*((u32 *) (GPIOB_BASE_ADDRESS +0X14)))
#define  GPIOB_BSRR										(*((u32 *) (GPIOB_BASE_ADDRESS +0X18)))
#define  GPIOB_LCKR										(*((u32 *) (GPIOB_BASE_ADDRESS +0X1C)))
#define  GPIOB_AFRL										(*((u32 *) (GPIOB_BASE_ADDRESS +0X20)))
#define  GPIOB_AFRH										(*((u32 *) (GPIOB_BASE_ADDRESS +0X24)))	
																										
																										/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_C		
************************************************************************************/


#define  GPIOC_MODER									(*((u32 *) (GPIOC_BASE_ADDRESS +0X00)))
#define  GPIOC_OTYPER									(*((u32 *) (GPIOC_BASE_ADDRESS +0X04)))
#define  GPIOC_OSPEEDR								    (*((u32 *) (GPIOC_BASE_ADDRESS +0X08)))
#define  GPIOC_PUPDR									(*((u32 *) (GPIOC_BASE_ADDRESS +0X0C)))
#define  GPIOC_IDR										(*((u32 *) (GPIOC_BASE_ADDRESS +0X10)))
#define  GPIOC_ODR										(*((u32 *) (GPIOC_BASE_ADDRESS +0X14)))
#define  GPIOC_BSRR										(*((u32 *) (GPIOC_BASE_ADDRESS +0X18)))
#define  GPIOC_LCKR										(*((u32 *) (GPIOC_BASE_ADDRESS +0X1C)))
#define  GPIOC_AFRL										(*((u32 *) (GPIOC_BASE_ADDRESS +0X20)))
#define  GPIOC_AFRH										(*((u32 *) (GPIOC_BASE_ADDRESS +0X24)))	
	
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_D		
************************************************************************************/


#define  GPIOD_MODER									(*((u32 *) (GPIOD_BASE_ADDRESS +0X00)))
#define  GPIOD_OTYPER									(*((u32 *) (GPIOD_BASE_ADDRESS +0X04)))
#define  GPIOD_OSPEEDR								    (*((u32 *) (GPIOD_BASE_ADDRESS +0X08)))
#define  GPIOD_PUPDR									(*((u32 *) (GPIOD_BASE_ADDRESS +0X0C)))
#define  GPIOD_IDR										(*((u32 *) (GPIOD_BASE_ADDRESS +0X10)))
#define  GPIOD_ODR										(*((u32 *) (GPIOD_BASE_ADDRESS +0X14)))
#define  GPIOD_BSRR										(*((u32 *) (GPIOD_BASE_ADDRESS +0X18)))
#define  GPIOD_LCKR										(*((u32 *) (GPIOD_BASE_ADDRESS +0X1C)))
#define  GPIOD_AFRL										(*((u32 *) (GPIOD_BASE_ADDRESS +0X20)))
#define  GPIOD_AFRH										(*((u32 *) (GPIOD_BASE_ADDRESS +0X24)))	

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_E		
************************************************************************************/


#define  GPIOE_MODER									(*((u32 *) (GPIOE_BASE_ADDRESS +0X00)))
#define  GPIOE_OTYPER									(*((u32 *) (GPIOE_BASE_ADDRESS +0X04)))
#define  GPIOE_OSPEEDR								    (*((u32 *) (GPIOE_BASE_ADDRESS +0X08)))
#define  GPIOE_PUPDR									(*((u32 *) (GPIOE_BASE_ADDRESS +0X0C)))
#define  GPIOE_IDR										(*((u32 *) (GPIOE_BASE_ADDRESS +0X10)))
#define  GPIOE_ODR										(*((u32 *) (GPIOE_BASE_ADDRESS +0X14)))
#define  GPIOE_BSRR										(*((u32 *) (GPIOE_BASE_ADDRESS +0X18)))
#define  GPIOE_LCKR										(*((u32 *) (GPIOE_BASE_ADDRESS +0X1C)))
#define  GPIOE_AFRL										(*((u32 *) (GPIOE_BASE_ADDRESS +0X20)))
#define  GPIOE_AFRH										(*((u32 *) (GPIOE_BASE_ADDRESS +0X24)))	
/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_F		
************************************************************************************/


#define  GPIOF_MODER									(*((u32 *) (GPIOF_BASE_ADDRESS +0X00)))
#define  GPIOF_OTYPER									(*((u32 *) (GPIOF_BASE_ADDRESS +0X04)))
#define  GPIOF_OSPEEDR									(*((u32 *) (GPIOF_BASE_ADDRESS +0X08)))
#define  GPIOF_PUPDR									(*((u32 *) (GPIOF_BASE_ADDRESS +0X0C)))
#define  GPIOF_IDR										(*((u32 *) (GPIOF_BASE_ADDRESS +0X10)))
#define  GPIOF_ODR										(*((u32 *) (GPIOF_BASE_ADDRESS +0X14)))
#define  GPIOF_BSRR										(*((u32 *) (GPIOF_BASE_ADDRESS +0X18)))
#define  GPIOF_LCKR										(*((u32 *) (GPIOF_BASE_ADDRESS +0X1C)))
#define  GPIOF_AFRL										(*((u32 *) (GPIOF_BASE_ADDRESS +0X20)))
#define  GPIOF_AFRH										(*((u32 *) (GPIOF_BASE_ADDRESS +0X24)))	

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_G		
************************************************************************************/


#define  GPIOG_MODER									(*((u32 *) (GPIOG_BASE_ADDRESS +0X00)))
#define  GPIOG_OTYPER									(*((u32 *) (GPIOG_BASE_ADDRESS +0X04)))
#define  GPIOG_OSPEEDR								    (*((u32 *) (GPIOG_BASE_ADDRESS +0X08)))
#define  GPIOG_PUPDR									(*((u32 *) (GPIOG_BASE_ADDRESS +0X0C)))
#define  GPIOG_IDR										(*((u32 *) (GPIOG_BASE_ADDRESS +0X10)))
#define  GPIOG_ODR										(*((u32 *) (GPIOG_BASE_ADDRESS +0X14)))
#define  GPIOG_BSRR										(*((u32 *) (GPIOG_BASE_ADDRESS +0X18)))
#define  GPIOG_LCKR										(*((u32 *) (GPIOG_BASE_ADDRESS +0X1C)))
#define  GPIOG_AFRL										(*((u32 *) (GPIOG_BASE_ADDRESS +0X20)))
#define  GPIOG_AFRH										(*((u32 *) (GPIOG_BASE_ADDRESS +0X24)))

/***********************************************************************************
	-----> Macros
			  *  Register Map	 GPIO_H		
************************************************************************************/


#define  GPIOH_MODER									(*((u32 *) (GPIOH_BASE_ADDRESS +0X00)))
#define  GPIOH_OTYPER									(*((u32 *) (GPIOH_BASE_ADDRESS +0X04)))
#define  GPIOH_OSPEEDR								    (*((u32 *) (GPIOH_BASE_ADDRESS +0X08)))
#define  GPIOH_PUPDR									(*((u32 *) (GPIOH_BASE_ADDRESS +0X0C)))
#define  GPIOH_IDR										(*((u32 *) (GPIOH_BASE_ADDRESS +0X10)))
#define  GPIOH_ODR										(*((u32 *) (GPIOH_BASE_ADDRESS +0X14)))
#define  GPIOH_BSRR										(*((u32 *) (GPIOH_BASE_ADDRESS +0X18)))
#define  GPIOH_LCKR										(*((u32 *) (GPIOH_BASE_ADDRESS +0X1C)))
#define  GPIOH_AFRL										(*((u32 *) (GPIOH_BASE_ADDRESS +0X20)))
#define  GPIOH_AFRH										(*((u32 *) (GPIOH_BASE_ADDRESS +0X24)))	
																																																																																																																																												
#endif //GPIO_PRIVATE_H

