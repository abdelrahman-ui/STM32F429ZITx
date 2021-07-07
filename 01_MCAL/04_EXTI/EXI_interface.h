/***************************************************************************************
 *************************** - EXI _interface.h				 		 	 ***************************
***************************   -Created: 5/27/2021			 			 ***************************
***************************   -Author: Abdelrahman_Magdy					***************************
***************************   -Version : _1_				 				 ***************************
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



#ifndef EXI_INTERFACE_H
#define EXI_INTERFACE_H
#include "STD_TYPE.h"
/*	Function Take The Number Of Line To Set Or Not Mask It As EXTI */
void MEXTI_voidEnable(u8 Copy_u8LineNum ) ;

/*	Function Take The Number Of Line To Disable Or Mask It As EXTI */
void MEXTI_voidDisable(u8 Copy_u8LineNum  ) ;

/* Function  To Make Trigger As Raise Or Fall */
void MEXTI_voidEventType( u8 Copy_u8LineNum  , u8 Copy_u8Event   ) ;

/* Function To Make Fake Trigger  */
void MEXTI_voidSWTrigger( u8 Copy_u8LineNum  ) ;

/* Function To Select Pin From Line Or Select Port From Line*/
void MEXTI_voidSelectPort(  u8 Copy_u8LineNum  , u8 Copy_u8PortID  ) ;




#endif //EXI_INTERFACE_H