/***********************************************************************************************
 ***************************  - EXI_program.c				 		 ***************************
***************************   - Created: 5/27/2021					 ****************************
***************************   - Author: Abdelrahman_Magdy			 ****************************
***************************   - Version : _1_				 		 ****************************
***************************   - Note :
									*-
									*-
 **************************************************************************************/ 


/****************************************************************************************
***************************   The Foundation Of Function   ***************************** 
****************************************************************************************/


/************** INCLUDE LIB **************/
		 #include "STD_TYPE.h"
		 #include "BIT_MATH.h"
/*****************************************/	 

/************** INCLUDE MCAL**************/
		#include "EXI_private.h"
		#include "EXI_interface.h"
		#include "EXI_config.h"
/*****************************************/

/************** INCLUDE HALL**************/
			

/*****************************************/

/************** INCLUDEAPP***************/


/*****************************************/






/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
							Function Take The Number Of Line To Set Or Not Mask It As EXTI 
					*/
void MEXTI_voidEnable(u8 Copy_u8LineNum  ) 
{
	
	EXTI_IMR |=(1U<<Copy_u8LineNum  );
	
	
}
/*********************************************************** END_ FUNCTION   *********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					*	Function Take The Number Of Line To Disable Or Mask It As EXTI 
					*/
void MEXTI_voidDisable(u8 Copy_u8LineNum  )
{
	
	EXTI_IMR &=(1U<<Copy_u8LineNum );
	
	
}
/*********************************************************** END_ FUNCTION   *********************************************************/



/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					*	
					*/
void MEXTI_voidEventType( u8 Copy_u8LineNum  , u8 Copy_u8Event   ) 
{
	switch(Copy_u8Event )
	{
			case  RAISING_Event	:	
					
					EXTI_RTSR |=(1U<<Copy_u8LineNum ) ;
			
			break ;
	/***************/		
			case  FALLING_Event	:
				
					EXTI_FTSR |=(1U<<Copy_u8LineNum ) ;
			
			break ;
	/***************/		
			default:        
			 break;
		
		
	}

	
	
}
/*********************************************************** END_ FUNCTION   *********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					*	
					*/
void MEXTI_voidSelectPort(  u8 Copy_u8LineNum  , u8 Copy_u8PortID  )
{
	
	/* For Port From 0 To 3 We Have SYSCFG_EXTICR1	*/
	if(Copy_u8LineNum <= 3 )
	{
		/* Make The Place =0000 -----> Safty*/
		SYSCFG_EXTICR1 &=~(0b1111<<(4*Copy_u8LineNum )) ;
		/* Sheft By 4 Bit */
		SYSCFG_EXTICR1 |= (Copy_u8PortID <<(4*Copy_u8LineNum )) ;
	}
	/* For Port From 3 To 7 We Have SYSCFG_EXTICR2	*/
	else if(Copy_u8LineNum <= 7)
	{
		/* Make The Place =0000 -----> Safty*/
		SYSCFG_EXTICR2 &=~ (0b1111<<(4*Copy_u8LineNum )) ;
		/* Map (4,5,6,7) To (0,1,2,3)*/
		Copy_u8LineNum -=4 ; 
		SYSCFG_EXTICR2 |= (Copy_u8PortID <<(4*Copy_u8LineNum )) ;
		
	}
	/* For Port From 7 To 11 We Have SYSCFG_EXTICR3	*/
	else if(Copy_u8LineNum <= 11)
	{
		/* Make The Place =0000 -----> Safty*/
		SYSCFG_EXTICR3 &=~ (0b1111<<(4*Copy_u8LineNum )) ;
		/* Map (8,9,10,11) To (0,1,2,3)*/
		Copy_u8LineNum -= 8 ;
		SYSCFG_EXTICR3 |= (Copy_u8PortID <<(4*Copy_u8LineNum )) ;
	}
	/* For Port From 11 To 15 We Have SYSCFG_EXTICR4	*/
	else if(Copy_u8LineNum <= 15)
	{
		/* Make The Place =0000 -----> Safty*/
		SYSCFG_EXTICR4 &=~ (0b1111<<(4*Copy_u8LineNum )) ;
		/* Map (12,13,14,15) To (0,1,2,3)*/
		Copy_u8LineNum -= 12 ;
		SYSCFG_EXTICR4 |= (Copy_u8PortID <<(4*Copy_u8LineNum )) ;
	}
}




/*********************************************************** END_ FUNCTION   *********************************************************/



/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					*	To Make SoftWare INT Must Choice Line And Pin After Type From Here SW 
					*   After We Must 
					*/
void MEXTI_voidSWTrigger( u8 Copy_u8LineNum  ) 
{
	
	EXTI_SWIER|=(1U<<Copy_u8LineNum);
	
	
}
/*********************************************************** END_ FUNCTION   *********************************************************/