/***************************************************************************************
 *************************** - DMA_private.h				 ***************************
***************************   -Created: 6/25/2021			 ***************************
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
					- Struct	:	YUP

**************************************************************************************/

/*************************************************************************************
******************* guard of file will call on time in .c		   *******************
*************************************************************************************/ 


#ifndef DMA_PRIVATE_H
#define DMA_PRIVATE_H

#include "STD_TYPE.h"
/***********************************************************************************
	-----> Macros
			*  			
************************************************************************************/

/* Struct For DMA Stream We Have 8 Stream  Every one have This Register*/
typedef struct
{
	volatile u32 CR;
	volatile u32 NDTR;
	volatile u32 PAR;
	volatile u32 M0AR;
	volatile u32 M1AR;
	volatile u32 FCR;
	
}DMA_Stream_t ;

/* DMA_Register */
typedef struct
{
	volatile u32 LISR 			  ;
	volatile u32 HISR				  ;
	volatile u32 LIFCR 				;
	volatile u32 HIFCR 				;
	DMA_Stream_t StreamID[8]  ; /* We Have 8 Copy of  Stream*/
}DMA_CFG_t;


#define DMA2_BASS_ADDRESS 		((volatile DMA_CFG_t *)0X40026400)  /* Pointer To Struct Of DMA Type*/ 




#endif //DMA_PRIVATE_H

