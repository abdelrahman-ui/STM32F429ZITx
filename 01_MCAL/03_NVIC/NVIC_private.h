/***************************************************************************************
 *************************** - NVIC_private.h				 ***************************
***************************   -Created: 5/24/2021			 ***************************
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


#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

/***********************************************************************************
	-----> Macros
			*  Base_Address GPI0X				
************************************************************************************/
#define  NVIC_Base_Address			0xE000E100	
/***********************************************************************************
	-----> Macros
			  *  Register Map	 NVIC-------------> To Set INT From (0 : 93	) 
			  but i can set until 240 but i have at stm32f429zitx only use (90) 
			  so i need from ISER0 to NVIC_ISER2
************************************************************************************/
#define NVIC_ISER0							(*((volatile u32 *) ( NVIC_Base_Address +0X100)))	
#define NVIC_ISER1							(*((volatile u32 *) ( NVIC_Base_Address +0X104)))
#define NVIC_ISER2							(*((volatile u32 *) ( NVIC_Base_Address +0X108)))
/***********************************************************************************
	-----> Macros
			  *  Register Map	 NVIC-------------> To DISABLE INT From (0 : 93	) 
			  but i can set until 240 but i have at stm32f429zitx only use (90) 
			  so i need from ISER0 to NVIC_ISER2
************************************************************************************/
#define NVIC_ICER0							(*((volatile u32 *) ( NVIC_Base_Address +0X180)))
#define NVIC_ICER1							(*((volatile u32 *) ( NVIC_Base_Address +0X184)))
#define NVIC_ICER2							(*((volatile u32 *) ( NVIC_Base_Address +0X188)))
/***********************************************************************************
	-----> Macros
			  *  Register Map	 NVIC-------------> Set Pending
			  
***************************************************/
#define NVIC_ISPR0							(*((volatile u32 *) ( NVIC_Base_Address +0X200)))
#define NVIC_ISPR1							(*((volatile u32 *) ( NVIC_Base_Address +0X204)))
#define NVIC_ISPR2							(*((volatile u32 *) ( NVIC_Base_Address +0X208)))
/***********************************************************************************
	-----> Macros
			  *  Register Map	 NVIC-------------> Clear Pending
			  
***************************************************/
#define NVIC_ICPR0							(*((volatile u32 *) ( NVIC_Base_Address +0X280)))
#define NVIC_ICPR1							(*((volatile u32 *) ( NVIC_Base_Address +0X284)))
#define NVIC_ICPR2							(*((volatile u32 *) ( NVIC_Base_Address +0X288)))

/***********************************************************************************
	-----> Macros
			  *  Register Map	 NVIC-------------> INT Active Read Only
			  * Wrong With Volatile
***************************************************/
#define NVIC_IABR0							 (*((volatile u32 *) ( NVIC_Base_Address +0X300)))
#define NVIC_IABR1							 (*((volatile u32 *) ( NVIC_Base_Address +0X304)))
#define NVIC_IABR2							 (*((volatile u32 *) ( NVIC_Base_Address +0X308)))

/***********************************************************************************
	-----> Macros
			  *  Register Map	 NVIC------------->(IPR) To Be Use As Array Must You It As 
		      *  A Pointer Without Derefearnce 
			  *  u8 To  Move By Byte Not Register 
***************************************************/

#define NVIC_IPR					       ((volatile u8 *)(NVIC_Base_Address +0X400))
/***********************************************************************************
	-----> Macros
			  *  Register Map	 SCB_BASE_ADDRESS
			  * PassWord 0x05FA
***************************************************/
#define  SCB_Base_Address			0xE000ED00	
/*			
 	-----> Macros
	*  Register Map --------->AIRCR To Submet The Group & SubGroup
	* Statuse Of Group And Sub Application interrupt and reset control register (AIRCR)
*/
#define  SCB_AIRCR 								(*((volatile u32 *) ( SCB_Base_Address + 0xc)))


/* Constant */

#define  GROUP_PRIORITY_CFG0						0U
#define  GROUP_PRIORITY_CFG1						1U
#define  GROUP_PRIORITY_CFG2						2U
#define  GROUP_PRIORITY_CFG3						3U
#define  GROUP_PRIORITY_CFG4						4U

#endif //NVIC_PRIVATE_H


