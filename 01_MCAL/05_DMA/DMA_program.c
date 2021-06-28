/***********************************************************************************************
 ***************************  - DMA_program.c				 		 ***************************
***************************   - Created: 6/25/2021					 ****************************
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
		#include "DMA_private.h"
		#include "DMA_interface.h"
		#include "DMA_config.h"

		
/*****************************************/

/************** INCLUDE HALL**************/
			

/*****************************************/

/************** INCLUDEAPP***************/


/*****************************************/






/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	
					*/
u8 MDMA2_u8StreamInit(void)
{

	/* 2- Before Any Config The Bit Of EN Must = 0 ,It must Be Disable*/
	/* Use Stream NUM = 0 */
	/* If Enable Bit == 1 */
	if((DMA2_BASS_ADDRESS-> StreamID[0].CR) == 1 ) 
	{
		/* Disable It*/
		(DMA2_BASS_ADDRESS-> StreamID[0].CR) &=~(1U<<0);
		/*It Take Time To Be Disable So Wait Time */
		while((DMA2_BASS_ADDRESS-> StreamID[0].CR) == 1){} 
			
	}
	else {/*Misra*/}
	
  /* 3- Select The Channel(Used For Conect Peripheral To Memory) In stream  But From Mermoery To Memory Not Use*/
	
	/* 4-SoftWare Priority Stream :{ LOW , Medium , High , VeryHigh} BIT(16 , 17)---> VeryHigh  */
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)|=((1U<<16)| (1U<<17)) ;
	
	/* 5- Set DIR Mode :{ MTM ,PTM ,MTP} BIT (6,7) */
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)|=(1U<<7);
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)&=~(1U<<6);
	
	/* 6- Set M & M SIZE BIT(13,14) ,(11,12) :{Byte , HaveWord , Word}*/
	/* 	As Word 32 For Source	*/ 
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)|=(1U<<12);
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)&=~(1U<<11);
		/* 	As Word 32 For Distination	*/ 
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)|=(1U<<14);
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)&=~(1U<<13);
	
	/* 7- Disable Direct Mode */
	(DMA2_BASS_ADDRESS-> StreamID[0].FCR)|=(1U<<2);
	
	/* 8-Set FIFO Threshold {(1/4),(1/2),(3/4),full} */
	/* Use (1/2)*/
	(DMA2_BASS_ADDRESS-> StreamID[0].FCR)|= (1U<<0);		
	(DMA2_BASS_ADDRESS-> StreamID[0].FCR)&=~(1U<<1);
	
	/* 9-SRC & DIS Increament For Both */
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)|=(1U<<9);
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)|=(1U<<10);
	
	/* 10- EN Interrput Of Transfer Complete */
	(DMA2_BASS_ADDRESS-> StreamID[0].CR)|=(1U<<4);
	
	/*  En The The Other Flag  */
	 
}







/*********************************************************** END_ FUNCTION   *********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	To Set Addrese Of Source & Distination 
					*/
void MDMA_voidSetAdresses(u32* Ptr_SrcAdd ,u32* Ptr_DisAdd ,u32 Copy_u32Size  )
{
	/* Source Add */
	DMA2_BASS_ADDRESS->StreamID[0].PAR =  (u32)Ptr_SrcAdd 		;
	/* Distination Add */
	DMA2_BASS_ADDRESS->StreamID[0].M0AR = (u32) Ptr_DisAdd  ;
	/* Size */
	DMA2_BASS_ADDRESS->StreamID[0].NDTR = Copy_u32Size  ;
}

/*********************************************************** END_ FUNCTION   *********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function :	Enable DMA  
					*/
void MDMA_voidEnable(void)
{
	/* All Flag == 0 or make them =0 */
	(DMA2_BASS_ADDRESS->LIFCR)|=((1U<<0)|(1U<<2)|(1U<<3)|(1U<<4)|(1U<<5));
	 /* EN Bit One Way To Stearm */
	DMA2_BASS_ADDRESS->StreamID[0].CR =  (1<<0)		;

}
	

/*********************************************************** END_ FUNCTION   *********************************************************/

	


