/****************************************************************
 ************   -STK_program.c                ******************
 ***********					   		       ******************
 ***********   -Created: 2/9/2021			   ******************
 ***********   -Author: Abdelrahman_Magdy      ******************
 ***********   -Version : _1_				   ******************
 ***********  -								   ******************
 ****************************************************************/ 
#include "STD_TYPE.h"
#include "BIT_MATH.h"


#include "STK_interface.h"
#include "STK_private.h"
#include "STK_config.h"

/* Define Callback Global Variable */
static void(*MSTK_CallBack)(void);

/* Define Variable for interval mode */
static u8 MSTK_u8ModeOfInterval;

/************************************ Start_FUNCTION  ************************************/
/*
	Function Only Apply The Clock From Configer (AHB or( AHB/8---> 1MHZ) So 1 = 1Msec & Disable SysTick Interrupt & Disa-ble SysTick
*/
void MSTK_voidInit(void)
{
		#if MSTK_CLK_SRC == MSTK_CLK_AHB
				/* Disable STK - Disable STK Interrupt - Set clock source AHB */
				MSTK->CTRL = 0x00000004; 
		#else 
	    /* Disable STK - Disable STK Interrupt - Set clock source AHB/8 */
				MSTK-> CTRL  = 0   ; 
	  #endif
		

}
/*********************************************************** END_ FUNCTION   ***********************************************************/

/************************************ Start_FUNCTION  ************************************/
/*
	Function Take Count or Ticks So Timer Count Them And you Config ( Tick = Time ) MSec  ---> Make Delay (Synchronous_Fun)
*/
void MSTK_voidSetBusyWait( u32 Copy_u32Ticks)
{
				/* Load ticks to load register */
	MSTK->LOAD = Copy_u32Ticks ;
	
				/* Start Timer */
	MSTK->CTRL |=(1U<<0);
	
				/* Wait till flag is raised */
	
	while( (GET_BIT(MSTK->CTRL,16)) == 0){};

				/* Stop Timer */
	MSTK->CTRL &=~(1U<<0);
	MSTK -> LOAD = 0;
	MSTK -> VAL  = 0;
	
}

/*********************************************************** END_ FUNCTION   ***********************************************************/

/*********************************************************** Start_FUNCTION  ***********************************************************/

/* 3- Function Asynchronous Take Tick And Start To Count Them , Give Flag And Work One Time ,
		And Give Me Function And i Will Resive In Pointer To Function To Call it After Counting Ticks .
		I Will Tick The Adress Of Function And Give It To Global Var ( Call back )  And ISR D o this Func */				
			/* Only One Time */	

void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks , void ( *Copy_ptr ) ( void ))
{
	
					/* Load ticks to load register */
	MSTK->LOAD = Copy_u32Ticks ;
	
					/* Start Timer */
	SET_BIT(MSTK->CTRL, 0);
	
					/* Save CallBack */
	MSTK_CallBack = Copy_ptr;
	
					/* Set Mode to Single */
	MSTK_u8ModeOfInterval = MSTK_SINGLE_INTERVAL;
	
					/* Enable STK Interrupt */
	SET_BIT(MSTK->CTRL, 1);
	
}

/*********************************************************** END_ FUNCTION   ***********************************************************/

/*********************************************************** Start_FUNCTION  ***********************************************************/
/* 4- The Same Of Function (3) But Only Differant At ISR Will Not Mack Load And Value = 0 */
			 /*  Send Time To Clock it And What Will Call After Time Finsh   */						
		      /* Global Var Take Adress Of Function And
										After Time Out ISR Call The Global_Var Which Point To Function  */
void MSTK_voidSetIntervalPeriodic(u32 Copy_u32Ticks , void ( *Copy_ptr ) ( void ))
{
	
				/* Load ticks to load register */
	MSTK->LOAD = Copy_u32Ticks ;
	
					/* Start Timer */
	SET_BIT(MSTK->CTRL, 0);
	
					/* Save CallBack */
	MSTK_CallBack = Copy_ptr;
	
					/* Set Mode to Single */
	MSTK_u8ModeOfInterval =MSTK_PERIOD_INTERVAL ;
	
					/* Enable STK Interrupt */
	SET_BIT(MSTK->CTRL, 1);
}



/*********************************************************** END_ FUNCTION   ***********************************************************/

/*********************************************************** Start_FUNCTION  ***********************************************************/


/*
		Function Will Stop The Interval If It Was Periodic Or Single
*/
void MSTK_voidStopInterval(void) 
{
	/* Disable STK Interrupt */
	CLR_BIT(MSTK->CTRL, 1U);
	
	/* Stop Timer */
	SET_BIT(MSTK->CTRL, 0);
	MSTK -> LOAD = 0;
	MSTK -> VAL  = 0;
	
}

/*********************************************************** END_ FUNCTION   ***********************************************************/

/*********************************************************** Start_FUNCTION  ***********************************************************/

/* 
		Function  Return The Elapsed Time From Start To Count Load Value - Value REG 
*/
u32 MSTK_u32GetElapsedTime(void)
{
	u32 Local_u32ElapsedTime;
	
	Local_u32ElapsedTime = (MSTK -> LOAD) - (MSTK -> VAL) ;
	
	return Local_u32ElapsedTime;
	
}
/*********************************************************** END_ FUNCTION   ***********************************************************/

/*********************************************************** Start_FUNCTION  ***********************************************************/

/* 
	Function  Return The Remaining Time To Make ISR Only Rad Value REG 
*/
				
u32 MSTK_u32GetRemainingTime(void)

{
	u32 Local_u32RemainTime;
	
	Local_u32RemainTime = MSTK -> VAL ;
	
	return Local_u32RemainTime;
}


/*********************************************************** END_ FUNCTION   ***********************************************************/

/*********************************************************** Start_FUNCTION  ***********************************************************/



void SysTick_Handler(void)
{
	u8 Local_u8Temporary;
	
	if (MSTK_u8ModeOfInterval == MSTK_SINGLE_INTERVAL)
	{
		/* Disable STK Interrupt */
		CLR_BIT(MSTK->CTRL, 1U);
	
		/* Stop Timer */
		SET_BIT(MSTK->CTRL, 0U);
		MSTK -> LOAD = 0U;
		MSTK -> VAL  = 0U;
	}
	
	/* Callback notification */
	MSTK_CallBack();
	
	/* Clear interrupt flag */
	Local_u8Temporary = GET_BIT(MSTK->CTRL,16U);
}
/*********************************************************** END_ FUNCTION   ***********************************************************/






