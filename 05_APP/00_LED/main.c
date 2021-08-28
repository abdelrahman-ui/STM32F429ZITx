
/************** INCLUDE LIB **************/
		 #include "STD_TYPE.h"
		 #include "BIT_MATH.h"
/*****************************************/	 

/************** INCLUDE MCAL**************/
		#include "RCC_private.h"
		#include "RCC_interface.h"
		#include "GPIO_interface.h"
		
/*****************************************/

#define GREEN_LED       13U 
#define RED_LED 				14U

int main (void)
{
						/* 			Enable CLK For GPIOG							*/
	MRCC_voidEnableClock(AHB1,PERIPHERAL_EN_GPIOG);
	//RCC_AHB1ENR |= (1U<<6);
						/*	The Mode Of Two LED (MODE_OUTPUT)			*/
	MGOIP_voidSetPinMode(GPIOG,GREEN_LED,MODE_OUTPUT );
	MGOIP_voidSetPinMode(GPIOG,RED_LED,MODE_OUTPUT )  ;
						/*	The Output Be OUTPUT_TYPE_PUSH_PULL		*/
	MGPIO_voidSetOutType(GPIOG,GREEN_LED,OUTPUT_TYPE_PUSH_PULL );
	MGPIO_voidSetOutType(GPIOG,RED_LED,OUTPUT_TYPE_PUSH_PULL)   ;
						/* The Speed OUTPUT_LOW_SPEED */
	MGPIO_voidSetOutSpeed(GPIOG,GREEN_LED,OUTPUT_LOW_SPEED)  ;
	MGPIO_voidSetOutSpeed(GPIOG,RED_LED,OUTPUT_LOW_SPEED)  ;
	
	while(1)
	{        /*  Trun On The Two Led      */
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,HIGH);
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,LOW);
					/*   Delay */
	  volatile u32 Local_u32Count=0;
		for( Local_u32Count; Local_u32Count<500000U ; Local_u32Count++);
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,LOW);
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,HIGH);	
		for( Local_u32Count=0U ; Local_u32Count<500000U; Local_u32Count++);
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,HIGH);
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,HIGH);
		for( Local_u32Count=0U ; Local_u32Count<500000U; Local_u32Count++);
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,LOW);
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,LOW);
		for( Local_u32Count=0U ; Local_u32Count<500000U; Local_u32Count++);
		for( Local_u32Count=0U ; Local_u32Count<500000U; Local_u32Count++);
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,HIGH);
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,HIGH);
		for( Local_u32Count=0U ; Local_u32Count<500000U; Local_u32Count++);
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,LOW);
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,LOW);
		for( Local_u32Count=0U ; Local_u32Count<500000U; Local_u32Count++);

	}
	
	
	
	
	
}

