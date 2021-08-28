/****************************** *********************************************************
 ***************************  - GPIO_program.c				 ****************************
***************************   - Created: 5/16/2021			 ****************************
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
/*****************************************/

/************** INCLUDE HALL**************/
			

/*****************************************/

/************** INCLUDEAPP***************/


/*****************************************/





/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function Set The Mode Of Pin Mode Take 2Bits	

									MODE_INPUT
									MODE_OUTPUT
									MODE_ALTF
									MODE_ANALOG	

						*/
 void MGOIP_voidSetPinMode(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8MODE) 
 {
	 
		 
	      switch (copy_u8PORT)
	      {
	  	    case  GPIOA_PORT :
	  	   			  GPIOA_MODER |=(u32) (copy_u8MODE << (2*copy_u8PIN));
	      
	  	     break ;
	  	     /*******************/
	  	    case  GPIOB_PORT : 
	  	   			 GPIOB_MODER |= (u32)(copy_u8MODE << (2*copy_u8PIN));
	  	     break ;
	  	     /*******************/
	  	    case  GPIOC_PORT :
	  	    			 GPIOC_MODER |= (u32)(copy_u8MODE << (2*copy_u8PIN));
	  	      break ;
	  	      /*******************/
	  	    case  GPIOD_PORT :
	  	    			 GPIOD_MODER|= (u32)(copy_u8MODE << (2*copy_u8PIN));
	  	      break ;
	  	      /*******************/
	  	    case  GPIOE_PORT :
	  	    			 GPIOE_MODER|= (u32)(copy_u8MODE << (2*copy_u8PIN));
	  	      break ;
	  	      /*******************/
	  	    case  GPIOF_PORT : 
	  	    			 GPIOF_MODER|= (u32)(copy_u8MODE << (2*copy_u8PIN));
	  	     break ;
	  	     /*******************/
	  	    case  GPIOG_PORT : 
	  	    			 GPIOG_MODER|= (u32)(copy_u8MODE << (2*copy_u8PIN));
	  	     break ;
	  	     /*******************/
	  	    case  GPIOH_PORT : 
	  	    			 GPIOH_MODER|= (u32)(copy_u8MODE << (2*copy_u8PIN));
	  	     break ;
	  	     /*******************/
			default : break ;
		 }
	 
 }
				

/*********************************************************** END_ FUNCTION   ***********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
/*				Function Set The Type Of OutPut (OpenDrain = 0 , PushPull = 1)

								OUTPUT_TYPE_PUSH_PULL
								OUTPUT_TYPE_OPEN_DRAIN	

						*/
void MGPIO_voidSetOutType(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8Type) 
{
		      switch (copy_u8PORT)
		      {
			      case  GPIOA_PORT :
					    GPIOA_OTYPER|= (u32)(copy_u8Type << (copy_u8PIN));
			      
			      break ;
			      /*******************/
			      case  GPIOB_PORT :
						 GPIOB_OTYPER|=(u32) (copy_u8Type << (copy_u8PIN));
			      break ;				 
			      /*******************/	 
			      case  GPIOC_PORT :			 
						GPIOC_OTYPER|= (u32)(copy_u8Type << (copy_u8PIN));
			      break		;			 
			      /*******************/	 
			      case  GPIOD_PORT :			 
						GPIOD_OTYPER|= (u32)(copy_u8Type << (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOE_PORT :
						GPIOE_OTYPER|= (u32)(copy_u8Type<< (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOF_PORT :
						 GPIOF_OTYPER|= (u32)(copy_u8Type << (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOG_PORT :
					    GPIOG_OTYPER|= (u32)(copy_u8Type << (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOH_PORT :
						GPIOH_OTYPER|= (u32)(copy_u8Type<< (copy_u8PIN));
			      break ;
			      /*******************/
			      default : break ;
		      }
}


/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*						Function Set The Speed (LOW , Meduim , High ,VeryHaigh		
							
							OUTPUT_LOW_SPEED
							OUTPUT_MEDUIM_SPEED
							OUTPUT_HIGH_SPEED
							OUTPUT_VERY_HIGH_SPEED
							
							

						*/
	void MGPIO_voidSetOutSpeed(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8Speed)  
{
		      switch (copy_u8PORT)
		      {
			      case  GPIOA_PORT :
					    GPIOA_OSPEEDR|= (u32)(copy_u8Speed << (2*copy_u8PIN));
			      
			      break ;
			      /*******************/
			      case  GPIOB_PORT :
						 GPIOB_OSPEEDR|= (u32)(copy_u8Speed << (2*copy_u8PIN));
			      break ;				 
			      /*******************/	 
			      case  GPIOC_PORT :			 
						GPIOC_OSPEEDR|= (u32)(copy_u8Speed << (2*copy_u8PIN));
			      break		;			 
			      /*******************/	 
			      case  GPIOD_PORT :			 
						GPIOD_OSPEEDR|= (u32)(copy_u8Speed << (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOE_PORT :
						GPIOE_OSPEEDR|= (u32)(copy_u8Speed<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOF_PORT :
						 GPIOF_OSPEEDR|= (u32)(copy_u8Speed << (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOG_PORT :
					    GPIOG_OSPEEDR|= (u32)(copy_u8Speed<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOH_PORT :
						GPIOH_OSPEEDR|= (u32)(copy_u8Speed<< (2*copy_u8PIN));
			      break ;
			      /*******************/
				  default : break ;
			      
		      }
}


/*********************************************************** END_ FUNCTION   ***********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
	/*		Function Set The PULL :
								
					PULL_OFF
					PULL_UP
					PULL_DOWN
	
	
		*/
	void MGPIO_voidSetPull(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8PULL_TYPE)  
{
		      switch (copy_u8PORT)
		      {
			      case  GPIOA_PORT :
					    GPIOA_PUPDR|=(u32) (copy_u8PULL_TYPE << (2*copy_u8PIN));
			      
			      break ;
			      /*******************/
			      case  GPIOB_PORT :
						 GPIOB_PUPDR|= (u32)(copy_u8PULL_TYPE<< (2*copy_u8PIN));
			      break ;				 
			      /*******************/	 
			      case  GPIOC_PORT :			 
						GPIOC_PUPDR|= (u32)(copy_u8PULL_TYPE << (2*copy_u8PIN));
			      break	;					 
			      /*******************/	 
			      case  GPIOD_PORT :			 
						GPIOD_PUPDR|= (u32)(copy_u8PULL_TYPE<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOE_PORT :
						GPIOE_PUPDR|= (u32)(copy_u8PULL_TYPE<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOF_PORT :
						 GPIOF_PUPDR|=(u32) (copy_u8PULL_TYPE << (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOG_PORT :
					    GPIOG_PUPDR|= (u32)(copy_u8PULL_TYPE <<(2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOH_PORT :
						GPIOH_PUPDR|= (u32)(copy_u8PULL_TYPE<< (2*copy_u8PIN));
			      break ;
			      /*******************/
				  default : break ;
			      
		      }
}


/*********************************************************** END_ FUNCTION   ***********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
		/*		Function To Read Data From IDR		*/
		u8 MGPIO_u8ReadData(u8 copy_u8PORT ,u8 copy_u8PIN)
{
			u8 u8Local_Data = 0 ;
			
		      switch (copy_u8PORT)
		      {
			      case  GPIOA_PORT :	u8Local_Data =  GET_BIT(GPIOA_IDR , (copy_u8PIN)) ;
			      break ;
		/*******************/
			      case  GPIOB_PORT :	u8Local_Data = 	GET_BIT(GPIOB_IDR , (copy_u8PIN)) ;	
			      break ;			
		/*******************/		
			      case  GPIOC_PORT :	u8Local_Data = 	GET_BIT(GPIOC_IDR , (copy_u8PIN)) ;
			      break ;				
		/*******************/		
			      case  GPIOD_PORT :	u8Local_Data = 	GET_BIT(GPIOD_IDR , (copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOE_PORT :	u8Local_Data = 	GET_BIT(GPIOE_IDR ,( copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOF_PORT :	u8Local_Data = GET_BIT(GPIOF_IDR ,( copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOG_PORT :	u8Local_Data = 	GET_BIT(GPIOG_IDR , (copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOH_PORT :	u8Local_Data = 	GET_BIT(GPIOH_IDR , (copy_u8PIN)) ;	
			      break ;
			      /*******************/
				  default : break ;
			      
		      }
			  return u8Local_Data ; 
}


/*********************************************************** END_ FUNCTION   ***********************************************************/


/********************************************************** Start_FUNCTION  **********************************************************/
	/*		
			* Function To Write Data At ODR	Value :
									 high 
									 low	
	*/
	void MGPIO_voidWriteDataOdr(u8 copy_u8PORT ,u8 copy_u8PIN , u8 copy_u8Value )
 {
	
	 if(copy_u8Value == HIGH )
	 {
			switch (copy_u8PORT)
			{
				case  GPIOA_PORT :			SET_BIT(GPIOA_ODR ,(copy_u8PIN)) ;
				break ;
				/*******************/
				case  GPIOB_PORT :		  	SET_BIT(GPIOB_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOC_PORT :		  	SET_BIT(GPIOC_ODR ,(copy_u8PIN)) ;
				break		;			
				/*******************/	
				case  GPIOD_PORT :		  	SET_BIT(GPIOD_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOE_PORT :		  	SET_BIT(GPIOE_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOF_PORT :		   SET_BIT(GPIOF_ODR  ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOG_PORT :		  	SET_BIT(GPIOG_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOH_PORT :		  	SET_BIT(GPIOH_ODR ,(copy_u8PIN)) ;
				break ;
				/*******************/
				default : break ;
				
			}
		}
	 else
	 {
		 switch (copy_u8PORT)
			{
				case  GPIOA_PORT :			CLR_BIT(GPIOA_ODR ,(copy_u8PIN)) ;
				break ;
				/*******************/
				case  GPIOB_PORT :		  	CLR_BIT(GPIOB_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOC_PORT :		  	CLR_BIT(GPIOC_ODR ,(copy_u8PIN)) ;
				break		;			
				/*******************/	
				case  GPIOD_PORT :		  	CLR_BIT(GPIOD_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOE_PORT :		  	CLR_BIT(GPIOE_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOF_PORT :		   CLR_BIT(GPIOF_ODR  ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOG_PORT :		  	CLR_BIT(GPIOG_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOH_PORT :		  	CLR_BIT(GPIOH_ODR ,(copy_u8PIN)) ;
				break ;
				/*******************/
				default : break ;
				
			}
		 
	 }
	
}


/*********************************************************** END_ FUNCTION   ***********************************************************/
	
/********************************************************** Start_FUNCTION  **********************************************************/
	/*		Function To Lock Pin	*/
	void MGPIO_voidPinLock(u8 copy_u8PORT ,u8 copy_u8PIN)  
 {
	
	
	switch (copy_u8PORT)
	{
		case  GPIOA_PORT :			SET_BIT(GPIOA_LCKR ,copy_u8PIN) ;
								SET_BIT(GPIOA_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOA_LCKR ,LOCK_PIN )));         // Wait until pin 16 Toggle
		break ;
		/*******************/
		case  GPIOB_PORT :		  	SET_BIT(GPIOB_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOB_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOB_LCKR ,(LOCK_PIN ))));         // Wait until pin 16 Toggle
		
		break ;					
		/*******************/	
		case  GPIOC_PORT :		  	SET_BIT(GPIOC_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOC_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOC_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break		;				
		/*******************/	
		case  GPIOD_PORT :		  	SET_BIT(GPIOD_LCKR ,(copy_u8PIN)) ;
							    SET_BIT(GPIOD_LCKR ,LOCK_PIN) ;
							    while(!(GET_BIT(GPIOD_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOE_PORT :		  	SET_BIT(GPIOE_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOE_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOE_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOF_PORT :		   SET_BIT(GPIOF_LCKR  ,(copy_u8PIN)) ;
							   SET_BIT(GPIOF_LCKR ,LOCK_PIN) ;
							   while(!(GET_BIT(GPIOF_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOG_PORT :		  	SET_BIT(GPIOG_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOG_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOG_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOH_PORT :		  	SET_BIT(GPIOH_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOH_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOH_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;
		/*******************/
		default : break ;
		
	}
	
}


/*********************************************************** END_ FUNCTION   ***********************************************************/

/*		Function Set The AltFn		: Every Pin Need 4 Bits SO We Have High AND Low			*/
void MGOIP_voidPinSetAltFn(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8AlT)

{
	/* From 0 To  7 */
	if (copy_u8PIN <= 7)
	{
		     switch (copy_u8PORT)
		     {
			     case  GPIOA_PORT :
			     GPIOA_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOB_PORT :
			     GPIOB_AFRL|= (u32)(copy_u8AlT<< (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOC_PORT :
			     GPIOC_AFRL|= (u32)(copy_u8AlT << (4U*copy_u8PIN));
			     break ;	
			     /*******************/
			     case  GPIOD_PORT :
			     GPIOD_AFRL|= (u32)(copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOE_PORT :
			     GPIOE_AFRL|= (u32)(copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOF_PORT :
			     GPIOF_AFRL|= (u32)(copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOG_PORT :
			     GPIOG_AFRL|= (u32)(copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOH_PORT :
			     GPIOH_AFRL|= (u32)(copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     default : break ;
		     }
		
	}
	/* From 8 To  15 */
	else
	{
		  switch (copy_u8PORT)
		  {
			  case  GPIOA_PORT :
			  GPIOA_AFRH|= (u32)(copy_u8AlT << (4U*(copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOB_PORT :
			  GPIOB_AFRH|= (u32)(copy_u8AlT<< ((copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOC_PORT :
			  GPIOC_AFRH|= (u32)(copy_u8AlT << ((copy_u8PIN % 8U)));
			  break  ;	
			  /*******************/
			  case  GPIOD_PORT :
			  GPIOD_AFRH|= (u32)(copy_u8AlT << ((copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOE_PORT :
			  GPIOE_AFRH|= (u32)(copy_u8AlT << ((copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOF_PORT :
			  GPIOF_AFRH|= (u32)(copy_u8AlT << ((copy_u8PIN % 8)));
			  break ;
			  /*******************/
			  case  GPIOG_PORT :
			  GPIOG_AFRH|= (u32)(copy_u8AlT << ((copy_u8PIN % 8)));
			  break ;
			  /*******************/
			  case  GPIOH_PORT :
			  GPIOH_AFRH|= (u32)(copy_u8AlT << ((copy_u8PIN % 8)));
			  break ;
			  /*******************/
			  default : break ;
		  }
		
	}
}