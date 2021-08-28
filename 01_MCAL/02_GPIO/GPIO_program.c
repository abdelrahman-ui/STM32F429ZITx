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
	  	    case  GPIOA :
	  	   			  GPIOA_MODER |= (copy_u8MODE << (2*copy_u8PIN));
	      
	  	     break ;
	  	     /*******************/
	  	    case  GPIOB : 
	  	   			 GPIOB_MODER |= (copy_u8MODE << (2*copy_u8PIN));
	  	     break ;
	  	     /*******************/
	  	    case  GPIOC :
	  	    			 GPIOC_MODER |= (copy_u8MODE << (2*copy_u8PIN));
	  	      break ;
	  	      /*******************/
	  	    case  GPIOD :
	  	    			 GPIOD_MODER|= (copy_u8MODE << (2*copy_u8PIN));
	  	      break ;
	  	      /*******************/
	  	    case  GPIOE :
	  	    			 GPIOE_MODER|= (copy_u8MODE << (2*copy_u8PIN));
	  	      break ;
	  	      /*******************/
	  	    case  GPIOF : 
	  	    			 GPIOF_MODER|= (copy_u8MODE << (2*copy_u8PIN));
	  	     break ;
	  	     /*******************/
	  	    case  GPIOG : 
	  	    			 GPIOG_MODER|= (copy_u8MODE << (2*copy_u8PIN));
	  	     break ;
	  	     /*******************/
	  	    case  GPIOH : 
	  	    			 GPIOH_MODER|= (copy_u8MODE << (2*copy_u8PIN));
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
			      case  GPIOA :
					    GPIOA_OTYPER|= (copy_u8Type << (copy_u8PIN));
			      
			      break ;
			      /*******************/
			      case  GPIOB :
						 GPIOB_OTYPER|= (copy_u8Type << (copy_u8PIN));
			      break ;				 
			      /*******************/	 
			      case  GPIOC :			 
						GPIOC_OTYPER|= (copy_u8Type << (copy_u8PIN));
			      break		;			 
			      /*******************/	 
			      case  GPIOD :			 
						GPIOD_OTYPER|= (copy_u8Type << (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOE :
						GPIOE_OTYPER|= (copy_u8Type<< (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOF :
						 GPIOF_OTYPER|= (copy_u8Type << (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOG :
					    GPIOG_OTYPER|= (copy_u8Type << (copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOH :
						GPIOH_OTYPER|= (copy_u8Type<< (copy_u8PIN));
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
			      case  GPIOA :
					    GPIOA_OSPEEDR|= (copy_u8Speed << (2*copy_u8PIN));
			      
			      break ;
			      /*******************/
			      case  GPIOB :
						 GPIOB_OSPEEDR|= (copy_u8Speed << (2*copy_u8PIN));
			      break ;				 
			      /*******************/	 
			      case  GPIOC :			 
						GPIOC_OSPEEDR|= (copy_u8Speed << (2*copy_u8PIN));
			      break		;			 
			      /*******************/	 
			      case  GPIOD :			 
						GPIOD_OSPEEDR|= (copy_u8Speed << (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOE :
						GPIOE_OSPEEDR|= (copy_u8Speed<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOF :
						 GPIOF_OSPEEDR|= (copy_u8Speed << (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOG :
					    GPIOG_OSPEEDR|= (copy_u8Speed<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOH :
						GPIOH_OSPEEDR|= (copy_u8Speed<< (2*copy_u8PIN));
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
			      case  GPIOA :
					    GPIOA_PUPDR|= (copy_u8PULL_TYPE << (2*copy_u8PIN));
			      
			      break ;
			      /*******************/
			      case  GPIOB :
						 GPIOB_PUPDR|= (copy_u8PULL_TYPE<< (2*copy_u8PIN));
			      break ;				 
			      /*******************/	 
			      case  GPIOC :			 
						GPIOC_PUPDR|= (copy_u8PULL_TYPE << (2*copy_u8PIN));
			      break	;					 
			      /*******************/	 
			      case  GPIOD :			 
						GPIOD_PUPDR|= (copy_u8PULL_TYPE<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOE :
						GPIOE_PUPDR|= (copy_u8PULL_TYPE<< (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOF :
						 GPIOF_PUPDR|= (copy_u8PULL_TYPE << (2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOG :
					    GPIOG_PUPDR|= (copy_u8PULL_TYPE <<(2*copy_u8PIN));
			      break ;
			      /*******************/
			      case  GPIOH :
						GPIOH_PUPDR|= (copy_u8PULL_TYPE<< (2*copy_u8PIN));
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
			      case  GPIOA :	u8Local_Data =  GET_BIT(GPIOA_IDR , (copy_u8PIN)) ;
			      break ;
		/*******************/
			      case  GPIOB :	u8Local_Data = 	GET_BIT(GPIOB_IDR , (copy_u8PIN)) ;	
			      break ;			
		/*******************/		
			      case  GPIOC :	u8Local_Data = 	GET_BIT(GPIOC_IDR , (copy_u8PIN)) ;
			      break ;				
		/*******************/		
			      case  GPIOD :	u8Local_Data = 	GET_BIT(GPIOD_IDR , (copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOE :	u8Local_Data = 	GET_BIT(GPIOE_IDR ,( copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOF :	u8Local_Data = GET_BIT(GPIOF_IDR ,( copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOG :	u8Local_Data = 	GET_BIT(GPIOG_IDR , (copy_u8PIN)) ;	
			      break ;
		/*******************/
			      case  GPIOH :	u8Local_Data = 	GET_BIT(GPIOH_IDR , (copy_u8PIN)) ;	
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
				case  GPIOA :			SET_BIT(GPIOA_ODR ,(copy_u8PIN)) ;
				break ;
				/*******************/
				case  GPIOB :		  	SET_BIT(GPIOB_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOC :		  	SET_BIT(GPIOC_ODR ,(copy_u8PIN)) ;
				break		;			
				/*******************/	
				case  GPIOD :		  	SET_BIT(GPIOD_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOE :		  	SET_BIT(GPIOE_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOF :		   SET_BIT(GPIOF_ODR  ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOG :		  	SET_BIT(GPIOG_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOH :		  	SET_BIT(GPIOH_ODR ,(copy_u8PIN)) ;
				break ;
				/*******************/
				default : break ;
				
			}
		}
	 else
	 {
		 switch (copy_u8PORT)
			{
				case  GPIOA :			CLR_BIT(GPIOA_ODR ,(copy_u8PIN)) ;
				break ;
				/*******************/
				case  GPIOB :		  	CLR_BIT(GPIOB_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOC :		  	CLR_BIT(GPIOC_ODR ,(copy_u8PIN)) ;
				break		;			
				/*******************/	
				case  GPIOD :		  	CLR_BIT(GPIOD_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOE :		  	CLR_BIT(GPIOE_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOF :		   CLR_BIT(GPIOF_ODR  ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOG :		  	CLR_BIT(GPIOG_ODR ,(copy_u8PIN)) ;
				break ;					
				/*******************/	
				case  GPIOH :		  	CLR_BIT(GPIOH_ODR ,(copy_u8PIN)) ;
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
		case  GPIOA :			SET_BIT(GPIOA_LCKR ,copy_u8PIN) ;
								SET_BIT(GPIOA_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOA_LCKR ,LOCK_PIN )));         // Wait until pin 16 Toggle
		break ;
		/*******************/
		case  GPIOB :		  	SET_BIT(GPIOB_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOB_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOB_LCKR ,(LOCK_PIN ))));         // Wait until pin 16 Toggle
		
		break ;					
		/*******************/	
		case  GPIOC :		  	SET_BIT(GPIOC_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOC_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOC_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break		;				
		/*******************/	
		case  GPIOD :		  	SET_BIT(GPIOD_LCKR ,(copy_u8PIN)) ;
							    SET_BIT(GPIOD_LCKR ,LOCK_PIN) ;
							    while(!(GET_BIT(GPIOD_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOE :		  	SET_BIT(GPIOE_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOE_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOE_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOF :		   SET_BIT(GPIOF_LCKR  ,(copy_u8PIN)) ;
							   SET_BIT(GPIOF_LCKR ,LOCK_PIN) ;
							   while(!(GET_BIT(GPIOF_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOG :		  	SET_BIT(GPIOG_LCKR ,(copy_u8PIN)) ;
								SET_BIT(GPIOG_LCKR ,LOCK_PIN) ;
								while(!(GET_BIT(GPIOG_LCKR ,(LOCK_PIN ))))  ;        // Wait until pin 16 Toggle
		break ;					
		/*******************/	
		case  GPIOH :		  	SET_BIT(GPIOH_LCKR ,(copy_u8PIN)) ;
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
			     case  GPIOA :
			     GPIOA_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOB :
			     GPIOB_AFRL|= (copy_u8AlT<< (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOC :
			     GPIOC_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
			     break ;	
			     /*******************/
			     case  GPIOD :
			     GPIOD_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOE :
			     GPIOE_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOF :
			     GPIOF_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOG :
			     GPIOG_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
			     break ;
			     /*******************/
			     case  GPIOH :
			     GPIOH_AFRL|= (copy_u8AlT << (4U*copy_u8PIN));
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
			  case  GPIOA :
			  GPIOA_AFRH|= (copy_u8AlT << (4U*(copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOB :
			  GPIOB_AFRH|= (copy_u8AlT<< ((copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOC :
			  GPIOC_AFRH|= (copy_u8AlT << ((copy_u8PIN % 8U)));
			  break  ;	
			  /*******************/
			  case  GPIOD :
			  GPIOD_AFRH|= (copy_u8AlT << ((copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOE :
			  GPIOE_AFRH|= (copy_u8AlT << ((copy_u8PIN % 8U)));
			  break ;
			  /*******************/
			  case  GPIOF :
			  GPIOF_AFRH|= (copy_u8AlT << ((copy_u8PIN % 8)));
			  break ;
			  /*******************/
			  case  GPIOG :
			  GPIOG_AFRH|= (copy_u8AlT << ((copy_u8PIN % 8)));
			  break ;
			  /*******************/
			  case  GPIOH :
			  GPIOH_AFRH|= (copy_u8AlT << ((copy_u8PIN % 8)));
			  break ;
			  /*******************/
			  default : break ;
		  }
		
	}
}