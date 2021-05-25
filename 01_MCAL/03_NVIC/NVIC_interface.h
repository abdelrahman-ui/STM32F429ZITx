/***************************************************************************************
 *************************** - NVIC_interface.h				 ***************************
***************************   -Created: 5/24/2021			 ***************************
***************************   -Author: Abdelrahman_Magdy     ***************************
***************************   -Version : _1_				 ***************************
***************************   -Note :
									*-
									*-
 **************************************************************************************/ 



/*************************************************************************************
		* What i sell To Customer
		*  The Archictect Give The API	
						- The Name Of Function 
						- What is The Input 
						- What Is The Output
						- Macro 
						 
*************************************************************************************/ 

/*************************************************************************************
******************* guard of file will call on time in .c		   *******************
*************************************************************************************/



#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H

/*		 Enables an interrupt or exception.	   -------> ISERx		need Interrput Number				*/
void MNVIC_voidSetEnable(u8 Copy_u8IntNum ) ;

/*		Disables an interrupt or exception.				*/
void MNVIC_voidDisable(u8 Copy_u8IntNum) ;

/*		Sets the pending status of interrupt or exception to 1.				*/
void MNVIC_voidSetPending(u8 Copy_u8IntNum) ;

/*Clears the pending status of interrupt or exception to 0.									*/
void MNVIC_voidClearPending(u8 Copy_u8IntNum);

/*		* Reads the pending status of interrupt or exception. This function returns nonzero value if the pending status is set to 1.							
    	* Handel Only External Int Priority										*/
void MNVIC_voidSetPriority(u8 Copy_u8IntNum, u8 Copy_u8GroupPriority , u8 Copy_u8SubGroupPriority , u8 Copy_u8GroupPriorityCFG  )	;

/*	Sets the priority of an interrupt or exception with configurable priority level to 1.								*/
u8	 MNVIC_voidGetActiveFlag(u8 Copy_u8IntNum)	;

/* Reads the priority of an interrupt or exception with configurable priority level. This function return the current priority level.						
u8	 MNVIC_GetPendingIRQ();
*/

#endif /* NVIC_INTERFACE_H*/
