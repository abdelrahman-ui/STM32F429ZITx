/*
 ***************************  - GPIO_APP							 ****************************
***************************   - Created: 5/17/2021			 ****************************
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
		#include "GPIO_private.h"
		#include "GPIO_interface.h"
		#include "GPIO_config.h"
		#include "RCC_private.h"
		#include "RCC_interface.h"
		#include "RCC_config.h"
/*****************************************/


/* TWO LED AT (STM32F429)
				- GREEN ----->		PG13
				- RED   ----->    PG14
*/
		/* Define Led Pin */
		#define GREEN_LED 					13
		#define RED_LED						  14
		
int main (void)
{
	
	  /*	EN CLK AT PORT G  BIT (6) FOR PORT G*/
 MRCC_voidInitSysClock( ClkSrcName_t ClkSrc , HSESrcName_t HSESrc , PllSrcName_t PLLSrc  , AHBPreName_t AHB_Prescaler , APB1PreName_t APB1_Prescaler  , APB2PreName_t APB2_Prescaler ) ;
	
	  /* SET MODE OF PINS OF LED ON BOARD = OUTPUT_PIN */
 MGOIP_voidSetPinMode(GPIOG,GREEN_LED, MODE_OUTPUT	 )  ; 
 MGOIP_voidSetPinMode(GPIOG, RED_LED , MODE_OUTPUT	 )  ; 
	
    /*		Select TYPE OF OUT Push PULL ----> 1 OPEN LED & 0	CLOSE LED	*/
 MGPIO_voidSetPull(GPIOG,GREEN_LED,OUTPUT_TYPE_PUSH_PULL)  ;
 MGPIO_voidSetPull(GPIOG, RED_LED ,OUTPUT_TYPE_PUSH_PULL)  ;
	
		/*  Set The Speed ---------> LOW_SPEED	*/
 MGPIO_voidSetOutSpeed(GPIOG,GREEN_LED,OUTPUT_LOW_SPEED)  ; 
 MGPIO_voidSetOutSpeed(GPIOG, RED_LED ,OUTPUT_LOW_SPEED)  ; 


	while(1)
	{ 
		/* OPEN LED */
		 MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED, HIGH )  ;
		 MGPIO_voidWriteDataOdr(GPIOG, RED_LED , HIGH )  ;
		/* DELAY*/
		for (u8 Local_Counter = 0 ;Local_Counter< 500000 ; Local_Counter++);
		/* CLOSE LED */
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED, LOW )  ;
		MGPIO_voidWriteDataOdr(GPIOG, RED_LED , LOW )  ;
		/* DELAY*/
		for (u8 Local_Counter = 0 ;Local_Counter< 500000 ; Local_Counter++);
		
	}
	
	
	
	return 0 ;
}

