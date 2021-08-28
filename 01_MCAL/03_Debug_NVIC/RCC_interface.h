/***************************************************************************************
 ***************************  - RCC_interface.h				 ***************************
***************************   -Created: 5/5/2021			 ***************************
***************************   -Author: Abdelrahman_Magdy     ***************************
***************************   -Version : _1_				 ***************************
***************************   -Note :
									*-
									*-
 **************************************************************************************/ 



/*************************************************************************************
		* What i sell To Customer
		*  The Archictect Give The API	
						- The Name Of Function 
						- What is The Input 
						- What Is The Output
						- Macro 
						 
*************************************************************************************/ 

/*************************************************************************************
******************* guard of file will call on time in .c		   *******************
*************************************************************************************/



#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#include "RCC_config.h"
#include "STD_TYPE.h"
/*
	- Frist You Must Know The Perpheral On Which Bus
	- 

*/
	/*
	-Function To Set System CLK From Enum Type Send :
																				* ClkSrcName_t 		: RCC_HSE  RCC_HSI	RCC_PLL	
																				* HSESrcName_t 		: Crystal CLK From (HSE_Crystal , HSE_RC )
																				* AHBPreName_t    : AHB  Prescaller ( 1 : 512 )
																				* APB1PreName_t   : APB1 Prescaller ( 1 : 16  )  
																				* APB2PreName_t   : APB2_Prescaller ( 1 : 16  ) 
																				*( M N P Q )      : By #define 
																									
																
	*/
	 void MRCC_voidInitSysClock( ClkSrcName_t ClkSrc , HSESrcName_t HSESrc , PllSrcName_t PLLSrc  , AHBPreName_t AHB_Prescaler , APB1PreName_t APB1_Prescaler  , APB2PreName_t APB2_Prescaler ) ;
	
	/*
	- Function To Enable Prepheral :
																	- BusName_t      :  The Bus Of The Prepheral ( AHB1 , AHB2 , AHB3 , APB1 , APB2 ) Every One Detect Which REG To Choice Pripheral From It
																	- Copy_u8PerName :  The Order Of Prepheral On The Selected Reg 
	
	*/
	 void MRCC_voidEnableClock (BusName_t BusName ,u8 Copy_u8PerName  );
	/*
	- Function To Disable Prepheral :
																	- BusName_t      :  The Bus Of The Prepheral ( AHB1 , AHB2 , AHB3 , APB1 , APB2 ) Every One Detect Which REG To Choice Pripheral From It
																	- Copy_u8PerName :  The Order Of Prepheral On The Selected Reg 
	
	*/
	 void MRCC_voidDisableClock (BusName_t BusName ,u8 Copy_u8PerName  );
	 
	 
	 
	 
	 // CLK Sourse
	 #define  HSE_CLK			   		   0
	 #define  HSI_CLK			   		   1
	 #define  PLL_CLK			   		   2
	// HSE Sourse
	 #define  HSE_CYRSTAL		       0
	 #define  HSI_RC			         1
	 // PLL SOURCE				         
	 #define  PLL_HSE			         0
	 #define  PLL_HSI			         1
	 
	 // AHB_Prescaller
	 #define  AHB_Pre1		         0			 
	 #define  AHB_Pre2		         1			 
	 #define  AHB_Pre4		         2			 
	 #define  AHB_Pre8		         3			 
	 #define  AHB_Pre16		         4			 
	 #define  AHB_Pre32		         5			 
	 #define  AHB_Pre64		         6			 
	 #define  AHB_Pre128					 7 			 
	 #define  AHB_Pre256					 8			 
	 #define  AHB_Pre512					 9			 
	 
	 // APB1_Prescaller
	 #define  ABP1_Pre1			       0			 
	 #define  ABP1_Pre2			       1			 
	 #define  ABP1_Pre4			       2			 
	 #define  ABP1_Pre8			       3			 
	 #define  ABP1_Pre16			     4	
	 /*
		* APB2_Prescaller 
	*/
	#define  ABP2_Pre1						 0	
	#define  ABP2_Pre2						 1
	#define  ABP2_Pre4						 2
	#define  ABP2_Pre8						 3
	#define  ABP2_Pre16						 4
	 /*
	 BUS
	 */
	  #define  AHB1_BUS				 	   0
	  #define  AHB2_BUS				 	   1
	  #define  AHB3_BUS				 	   2
	  #define  APB1_BUS				 	   3
	  #define  APB2_BUS				 	   4
#endif //RCC_INTERFACE_H

