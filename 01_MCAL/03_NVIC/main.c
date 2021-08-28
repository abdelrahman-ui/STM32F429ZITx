#include "STD_TYPE.h"
#include "BIT_MATH.h"


#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "NVIC_interface.h"
#include "RCC_private.h"
#include "NVIC_private.h"

#define GREEN_LED       13U 
#define RED_LED 				14U
#define	EXTI0           6U
#define	EXTI1           7U
#define GROUP_1         1U
#define	SUB_0           0U
#define GROUP_2         1U 

int main (void)
{
									/* Enable CLK  */ 
	 MRCC_voidEnableClock (AHB1 ,PERIPHERAL_EN_GPIOG ) ;
	
							/*	The Mode Of Two LED (MODE_OUTPUT)			*/
	MGOIP_voidSetPinMode(GPIOG,GREEN_LED,MODE_OUTPUT );
	MGOIP_voidSetPinMode(GPIOG,RED_LED,MODE_OUTPUT )  ;
	
						/*	The Output Be OUTPUT_TYPE_PUSH_PULL		*/
	MGPIO_voidSetOutType(GPIOG,GREEN_LED,OUTPUT_TYPE_PUSH_PULL );
	MGPIO_voidSetOutType(GPIOG,RED_LED,OUTPUT_TYPE_PUSH_PULL)   ;
						/* The Speed OUTPUT_LOW_SPEED */
	MGPIO_voidSetOutSpeed(GPIOG,GREEN_LED,OUTPUT_LOW_SPEED)  ;
	MGPIO_voidSetOutSpeed(GPIOG,RED_LED,OUTPUT_LOW_SPEED)  ;
			
	/* NVIC Int*/
	
	/* Enable EXTI0 Intterrput   */ 
	MNVIC_voidSetEnable(EXTI0 ) ;
	MNVIC_voidSetEnable(EXTI1 ) ;
			/*  SET Priority EXTI1 Higher in Group To Cut EXTI0 */
	MNVIC_voidSetPriority(EXTI0, GROUP_1 , SUB_0 , GROUP_PRIORITY_CFG2  );
	MNVIC_voidSetPriority(EXTI1, GROUP_2 , SUB_0 , GROUP_PRIORITY_CFG2  );

					/* Set Pnding Flag */
	MNVIC_voidSetPending(EXTI0 ) ;
	
	while(1)
	{
		
		
		
		
	}
	 
	

}

void EXTI0_IRQHandler()
{
	
	/* Set Pnding Flag To Make Inntterut 7 Cut Must Change Priority */
	MNVIC_voidSetPending(EXTI1 ) ;
	/* Open GREEN_LED */
	MGPIO_voidWriteDataOdr(GPIOG,GREEN_LED,HIGH);
	
	
}

void EXTI1_IRQHandler()
{
	/* Open RED_LED ---> Must Open Frist */
	MGPIO_voidWriteDataOdr(GPIOG,RED_LED,HIGH);	
}

