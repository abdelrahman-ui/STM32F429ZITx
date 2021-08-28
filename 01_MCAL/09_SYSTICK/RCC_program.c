/****************************** *********************************************************
 ***************************  - RCC_program.c				 ****************************
***************************   - Created: 5/5/2021			 ****************************
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
		#include "RCC_private.h"
		#include "RCC_interface.h"
		#include "RCC_config.h"
/*****************************************/

/************** INCLUDE HALL**************/
			

/*****************************************/

/************** INCLUDEAPP***************/


/*****************************************/





/************************************ Start_FUNCTION  ************************************/
/* About The Function :
	
				- CLK		: HSE | HSI |PLL	
				- PLLSrc	:PLL_HSE | PLL_HSI
				- HSESrc    :HSE_Crystal ,HSE_RC 
 */
 void MRCC_voidInitSysClock( ClkSrcName_t ClkSrc , HSESrcName_t HSESrc , PllSrcName_t PLLSrc  , AHBPreName_t AHB_Prescaler , APB1PreName_t APB1_Prescaler  , APB2PreName_t APB2_Prescaler ) 
 {
		switch(ClkSrc)
		{
			//HSE
			case HSE_CLK 	: 
				switch (HSESrc)
				{	// HSE CRYSTAL 
					case  HSE_Crystal :
						SET_BIT(RCC_CR   , 16) ;		// EN HSE
						CLR_BIT(RCC_CR   , 18) ;		// Disable Byp
						SET_BIT(RCC_CFGR , 0 ) ;		// System Clk  HSE
						CLR_BIT(RCC_CFGR , 1 ) ;		// System Clk  HSE
					break; 
					// HSE RC
					case  HSE_RC :
						SET_BIT(RCC_CR   , 16) ;				// EN HSE
						SET_BIT(RCC_CR   , 18) ;				// Enable Byp
						SET_BIT(RCC_CFGR , 0 ) ;				// System Clk  HSE
						CLR_BIT(RCC_CFGR , 1 ) ;				// System Clk  HSE
					break;
					
					default		:  
						
						break;
					}
			
		  break ;
			 /*******************************************************************************/ 
			 // HSI  
			case HSI_CLK	: 
				SET_BIT(RCC_CR   , 0   ) ;           // EN HSI
				CLR_BIT(RCC_CFGR , 0   ) ;					 // System Clk  HSI
				CLR_BIT(RCC_CFGR , 1   ) ;					 // System Clk  HSI
			 break; 
			/*********************************************************************************/
			// PLL 
			case PLL_CLK 	:
				 switch(PLLSrc)
				 {
					 // PLL HSE 
					 case PLL_HSE :
							 SET_BIT(RCC_CR , 16) ;						// EN HSE
							 SET_BIT(RCC_CR , 24) ;						//  EN PLL
							 SET_BIT(RCC_PLLCFGR ,22) ;				//  PLL From HSE 
							 CLR_BIT(RCC_CFGR , 0 ) ;					// System Clk  PLL
							 SET_BIT(RCC_CFGR , 1 ) ;				  // System Clk  PLL
					 break ;
					 // PLL HSI
					 case PLL_HSI :
					     SET_BIT(RCC_CR ,   0   ) ;            // EN HSI
							 SET_BIT(RCC_CR ,  24)    ;					 	//  EN PLL
							 CLR_BIT(RCC_PLLCFGR ,22) ;					  //  PLL From HSI
							 CLR_BIT(RCC_CFGR , 0 )   ;					  // System Clk  PLL
							 SET_BIT(RCC_CFGR , 1 )   ;				    // System Clk  PLL
							 
					 break ;
					 
					 default : 
					 break ;
					 
					 
				 }
			
			break; 
			default		:  break;
			
			 }
			/****************************************************************************************/
				/*
	 ABP1_Pre1
	 ABP1_Pre2
	 ABP1_Pre4
	 ABP1_Pre8
	 ABP1_Pre16
	
	*/
	switch (APB1_Prescaler)
	{
		case ABP1_Pre1:
			CLR_BIT(RCC_CFGR , 10) ;
			CLR_BIT(RCC_CFGR , 11) ;
			CLR_BIT(RCC_CFGR, 12) ;
		break; 
		case ABP1_Pre2:
			CLR_BIT(RCC_CFGR , 10) ;
			CLR_BIT(RCC_CFGR , 11) ;
			SET_BIT(RCC_CFGR,  12) ;
		break;
		case ABP1_Pre4:
			SET_BIT(RCC_CFGR , 10) ;
			CLR_BIT(RCC_CFGR , 11) ;
			SET_BIT(RCC_CFGR,  12) ;
		break;
		case ABP1_Pre8:
			CLR_BIT(RCC_CFGR , 10) ;
			SET_BIT(RCC_CFGR , 11) ;
			SET_BIT(RCC_CFGR,  12) ;
		break;
		case ABP1_Pre16:
			SET_BIT(RCC_CFGR , 10) ;
			SET_BIT(RCC_CFGR , 11) ;
			SET_BIT(RCC_CFGR,  12) ;
		break;
		default: break;
		
		
	}
/**************************************************************************************************/	
		/*
		* APB2_Prescaller 
		ABP2_Pre1
		ABP2_Pre2
		ABP2_Pre4
		ABP2_Pre8
		ABP2_Pre16
		13 , 14 ,15
		*/
		switch (APB2_Prescaler)
		{
			case  ABP2_Pre1 :
				CLR_BIT(RCC_CFGR , 13) ;
				CLR_BIT(RCC_CFGR , 14) ;
				CLR_BIT(RCC_CFGR , 15) ;
			break;
			case  ABP2_Pre2 :
				CLR_BIT(RCC_CFGR , 13) ;
				CLR_BIT(RCC_CFGR , 14) ;
				SET_BIT(RCC_CFGR , 15) ;
			break;
			case  ABP2_Pre4 :
				SET_BIT(RCC_CFGR , 13) ;
				CLR_BIT(RCC_CFGR , 14) ;
				SET_BIT(RCC_CFGR , 15) ;
			break;
			case  ABP2_Pre8 :
				CLR_BIT(RCC_CFGR , 13) ;
				SET_BIT(RCC_CFGR , 14) ;
				SET_BIT(RCC_CFGR , 15) ;
			break;
			case  ABP2_Pre16 :
				SET_BIT(RCC_CFGR , 13) ;
				SET_BIT(RCC_CFGR , 14) ;
				SET_BIT(RCC_CFGR , 15) ;
			break;
			
			default: break;
			
			
			
		}
	
			
			/*
					AHB_Pre1
					AHB_Pre2
					AHB_Pre4
					AHB_Pre8
					AHB_Pre16
					AHB_Pre32
					AHB_Pre64
					AHB_Pre128
					AHB_Pre256
					AHB_Pre512
			
			*/
			switch (AHB_Prescaler)
			{
				case AHB_Pre1 :
						CLR_BIT(RCC_CFGR , 4U ) ;
						CLR_BIT(RCC_CFGR , 5U ) ;
						CLR_BIT(RCC_CFGR , 6U ) ;
						CLR_BIT(RCC_CFGR , 7U ) ;
				break ;                 
				/***********/           
				case AHB_Pre2 :         
						CLR_BIT(RCC_CFGR , 4U ) ;
						CLR_BIT(RCC_CFGR , 5U ) ;
						CLR_BIT(RCC_CFGR , 6U ) ;
						SET_BIT(RCC_CFGR , 7U ) ;
				break ;                 
				/***********/           
				case AHB_Pre4 :         
						SET_BIT(RCC_CFGR , 4U ) ;
						CLR_BIT(RCC_CFGR , 5U ) ;
						CLR_BIT(RCC_CFGR , 6U ) ;
						SET_BIT(RCC_CFGR , 7U ) ;
				break ;                 
				/***********/           
				case AHB_Pre8 :         
						CLR_BIT(RCC_CFGR , 4U ) ;
						SET_BIT(RCC_CFGR , 5U ) ;
						CLR_BIT(RCC_CFGR , 6U ) ;
						SET_BIT(RCC_CFGR , 7U ) ;
				break ;                 
				/***********/           
				case AHB_Pre16 :        
						SET_BIT(RCC_CFGR , 4U ) ;
						SET_BIT(RCC_CFGR , 5U ) ;
						CLR_BIT(RCC_CFGR , 6U ) ;
						SET_BIT(RCC_CFGR , 7U ) ;
				break ;                 
				/***********/           
				case AHB_Pre64 :        
						CLR_BIT(RCC_CFGR , 4U ) ;
						CLR_BIT(RCC_CFGR , 5U ) ;
						SET_BIT(RCC_CFGR , 6U ) ;
						SET_BIT(RCC_CFGR , 7U ) ;
				break ;                 
				/***********/           
				case AHB_Pre128 :       
						CLR_BIT(RCC_CFGR , 4U ) ;
						SET_BIT(RCC_CFGR , 5U ) ;
						SET_BIT(RCC_CFGR , 6U ) ;
						SET_BIT(RCC_CFGR , 7U ) ;
				break ;                 
				/***********/           
				case AHB_Pre512 :       
						SET_BIT(RCC_CFGR , 4U ) ;
						SET_BIT(RCC_CFGR , 5U ) ;
						SET_BIT(RCC_CFGR , 6U ) ;
						SET_BIT(RCC_CFGR , 7U ) ;
				break ;
				/***********/
				default: break; 
				
			}
		 
 }



/*********************************************************** END_ FUNCTION   ***********************************************************/



\
/************************************ Start_FUNCTION  ************************************/

 void MRCC_voidEnableClock (BusName_t BusName ,u8 Copy_u8PerName  )
 {
	 switch(BusName) 
	 {
		 case AHB1_BUS :
			SET_BIT(RCC_AHB1ENR , Copy_u8PerName  ) ;
		 break ; 
		 
		 case AHB2_BUS  :
			SET_BIT(RCC_AHB2ENR , Copy_u8PerName  ) ;
		 break ;
		 
		 case AHB3_BUS  :
			 SET_BIT(RCC_AHB3ENR , Copy_u8PerName  ) ;
		 break ;
		 
		 case APB1_BUS  :
			SET_BIT(RCC_APB1LPENR , Copy_u8PerName  ) ;	
		 break ;
		 
		 case APB2_BUS  :
			SET_BIT(RCC_APB2LPENR , Copy_u8PerName  ) ;	
		 break ;
		 
		 
		 
		 
	 }
 }

 
