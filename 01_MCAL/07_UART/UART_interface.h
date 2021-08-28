/***************************************************************************************
 *************************** - UART_interface.h				 ***************************
***************************   -Created: 7/5/2021			 ***************************
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



#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H

#include "STD_TYPE.h"


/*  Function To Init The UART */
void UART1_voidInit(void);
void UART1_voidEN(void);
void UART_voidWrite(u8 ch);
void UART_voidRead(void);
void Delay_voidMs(int delay);
void SysTick_voidInit(void);

#endif //UART_INTERFACE_H

