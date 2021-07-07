/***************************************************************************************
 *************************** - DMA_interface.h				 ***************************
***************************   -Created: 6/25/2021			 	 ***************************
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



#ifndef DMA_INTERFACE_H
#define DMA_INTERFACE_H

#include "STD_TYPE.h"

/* Function To Init DMA : */
u8 MDMA_2_u8StreamInit(void);

/* Function :	To Set Addrese Of Source & Distination*/
void MDMA_voidSetAdresses(u32* Ptr_SrcAdd ,u32* Ptr_DisAdd ,u32 Copy_u32Size  );

/* Function :	To EN_DMA */
void MDMA_voidEnable(void) ;



#endif /* DMA_INTERFACE_H*/







