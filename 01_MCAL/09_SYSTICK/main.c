/****************************************************************************************
****************************  - SysTick _main					 			  ***************************
***************************   - Created: 8/20/2021			 			***************************
***************************   - Author: Abdelrahman_Magdy     ***************************
***************************   - Version : _1_				 					***************************
***************************   - Note :
									*-
									*-
 ****************************************************************************************/ 

#include "STD_TYPE.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"

#define GREEN_LED       13U 
#define RED_LED 				14U


int main(void)
{
	/*  As A Core Peripheral Not Need En CLK By RCC  Or NVIC If I Use Interput */
	
	
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
	{        /*  Trun On The GREEN_LED     */
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,HIGH);
					/*   Delay --> 2 sec  */
	  MSTK_voidSetBusyWait(2000);
		      /*  Trun On The RED_LED     */
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,HIGH);
					/*   Delay --> 2 sec  */
	  MSTK_voidSetBusyWait(2000);
					/*  Trun Off The GREEN_LED     */
		MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,LOW);
					/*   Delay --> 2 sec  */
	  MSTK_voidSetBusyWait(2000);
					/*  Trun Off The Red_LED     */
		MGPIO_voidWriteDataOdr(GPIOG,RED_LED,LOW);
					/*   Delay --> 2 sec  */
	  MSTK_voidSetBusyWait(2000);
	

	}
	
	
	

}



