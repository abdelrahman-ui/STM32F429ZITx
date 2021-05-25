/****************************************************************************************
 ***************************  - NVIC_program.c				 ****************************
***************************   - Created: 5/24/2021			 ****************************
***************************   - Author: Abdelrahman_Magdy     ***************************
***************************   - Version : _1_				 ****************************
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
		#include "NVIC_private.h"
		#include "NVIC_interface.h"
		#include "NVIC_config.h"
/*****************************************/

/************** INCLUDE HALL**************/
			

/*****************************************/

/************** INCLUDEAPP***************/


/*****************************************/





/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					Take The Number Of Interrput Number To Enable it At STm ----> 90
						*/
void MNVIC_voidSetEnable(u8 Copy_u8IntNum ) 
{
	if (Copy_u8IntNum <=31 )
	{ /* 0-----> no effect*/
	   NVIC_ISER0= (1U <<Copy_u8IntNum);  
	}
	else if((Copy_u8IntNum <= 32) && (Copy_u8IntNum <= 63))
	{
		/* 32 = 0  And So On */
		Copy_u8IntNum-=32 ; 
		NVIC_ISER1= (1U <<Copy_u8IntNum); 
	}
	else if((Copy_u8IntNum <= 64) && (Copy_u8IntNum <= 90))
	{
		/* 64 = 0  And So On */
		Copy_u8IntNum-=64 ;
		NVIC_ISER2= (1U <<Copy_u8IntNum);
	}
	
	
}
						
/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					Take The Number Of Interrput Number To Disable it At Stm ----> 90
						*/
void MNVIC_voidDisable(u8 Copy_u8IntNum)
{
	if (Copy_u8IntNum <=31 )
	{ /* 0-----> no effect*/
	   NVIC_ICER0= (1U <<Copy_u8IntNum);  
	}
	else if((Copy_u8IntNum <= 32) && (Copy_u8IntNum <= 63))
	{
		/* 32 = 0  And So On */
		Copy_u8IntNum-=32 ; 
		NVIC_ICER1= (1U <<Copy_u8IntNum); 
	}
	else if((Copy_u8IntNum <= 64) && (Copy_u8IntNum <= 90))
	{
		/* 64 = 0  And So On */
		Copy_u8IntNum-=64 ;
		NVIC_ICER2= (1U <<Copy_u8IntNum);
	}
	
	
}
						
/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					SetPending
						*/
void MNVIC_voidSetPending(u8 Copy_u8IntNum)
{
	if (Copy_u8IntNum <=31 )
	{ /* 0-----> no effect*/
	   NVIC_ISPR0= (1U <<Copy_u8IntNum);  
	}
	else if((Copy_u8IntNum <= 32) && (Copy_u8IntNum <= 63))
	{
		/* 32 = 0  And So On */
		Copy_u8IntNum-=32 ; 
		NVIC_ISPR1= (1U <<Copy_u8IntNum); 
	}
	else if((Copy_u8IntNum <= 64) && (Copy_u8IntNum <= 90))
	{
		/* 64 = 0  And So On */
		Copy_u8IntNum-=64 ;
		NVIC_ISPR2= (1U <<Copy_u8IntNum);
	}
	
	
}
						
/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					SetPending
						*/
void MNVIC_voidClearPending(u8 Copy_u8IntNum)
{
	if (Copy_u8IntNum <=31 )
	{ /* 0-----> no effect*/
	   NVIC_ICPR0= (1U <<Copy_u8IntNum);  
	}
	else if((Copy_u8IntNum <= 32) && (Copy_u8IntNum <= 63))
	{
		/* 32 = 0  And So On */
		Copy_u8IntNum-=32 ; 
		NVIC_ICPR1= (1U <<Copy_u8IntNum); 
	}
	else if((Copy_u8IntNum <= 64) && (Copy_u8IntNum <= 90))
	{
		/* 64 = 0  And So On */
		Copy_u8IntNum-=64 ;
		NVIC_ICPR2= (1U <<Copy_u8IntNum);
	}
	
	
}
						
/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					Read Active State 
						*/
u8	 MNVIC_voidGetActiveFlag(u8 Copy_u8IntNum)	
{
	u8 Local_u8ActiveState = 0 ;   
	if (Copy_u8IntNum <=31 )
	{ /* 0-----> no effect*/
	  Local_u8ActiveState= NVIC_IABR0 &(1<<Copy_u8IntNum);  
	}
	else if((Copy_u8IntNum <= 32) && (Copy_u8IntNum <= 63))
	{
		/* 32 = 0  And So On */
		Copy_u8IntNum-=32;
		Local_u8ActiveState= NVIC_IABR0 &(1<<Copy_u8IntNum); 
	}
	else if((Copy_u8IntNum <= 64) && (Copy_u8IntNum <= 90))
	{
		/* 64 = 0  And So On */
		Copy_u8IntNum-=64;
		Local_u8ActiveState= NVIC_IABR0 &(1<<Copy_u8IntNum); 
	}
	return Local_u8ActiveState ;
	
}
						
/*********************************************************** END_ FUNCTION   ***********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	 * Handel Only External Int Priority	
					 * Divide And Put Your Priority
					 
		*/
void MNVIC_voidSetPriority(u8 Copy_u8IntNum, u8 Copy_u8GroupPriority , u8 Copy_u8SubGroupPriority , u8 Copy_u8GroupPriorityCFG  )	
{	
	switch
	{
			/* All For Group */
	   case   GROUP_PRIORITY_CNG0 :		
				/*		PassWord + Case (  (4) For Group  &  (0) For SubGroub		*/	
				SCB_AIRCR  =	0X05FA0300 ;					 
	   			/*	At IPR[Indx] Put The Four Bit For Group  */		
				NVIC_IPR[Copy_u8IntNum]= (Copy_u8GroupPriority<<4U);	
							 
	   break ;													 
	   case   GROUP_PRIORITY_CNG1 :								 
				/*		PassWord + Case (  (3) For Group  &  (1) For SubGroub		*/
				SCB_AIRCR  =	0X05FA0400 ;					 
				NVIC_IPR[Copy_u8IntNum]=(Copy_u8GroupPriority<<5U)|(Copy_u8SubGroupPriority << 4U)	;									 
	   	break ;													 
	   case   GROUP_PRIORITY_CNG2 :								 
				/*		PassWord + Case (  (2) For Group  &  (2) For SubGroub		*/
				SCB_AIRCR  =	0X05FA0500 ;					 
	   			NVIC_IPR[Copy_u8IntNum]=(Copy_u8GroupPriority<<6U)|(Copy_u8SubGroupPriority << 4U)	;													 
	   															 
	   	break ;													 
	   case   GROUP_PRIORITY_CNG3 :								 
				/*		PassWord + Case (  (1) For Group  &  (3) For SubGroub		*/
				SCB_AIRCR  =	0X05FA0600 ;					 
				NVIC_IPR[Copy_u8IntNum]=(Copy_u8GroupPriority<<7U)|(Copy_u8SubGroupPriority << 4U)	;
												 
	   															 
	   	break ;													 
	   case   GROUP_PRIORITY_CNG4 :								 
				/*		PassWord + Case (  (0) For Group  &  (4) For SubGroub		*/
				SCB_AIRCR  =	0X05FA0700 ;
				NVIC_IPR[Copy_u8IntNum]=(Copy_u8SubGroupPriority << 4U)	;

	   
	   	break ;
	   default : 
	}
	   break ;
	  
}









/*********************************************************** END_ FUNCTION   ***********************************************************/
