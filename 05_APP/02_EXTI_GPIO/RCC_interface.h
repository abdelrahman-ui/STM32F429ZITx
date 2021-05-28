/***************************************************************************************
 *************************** - RCC_interface.h				 ***************************
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

	/*
		-Function To Set System CLK
	*/
	 void MRCC_voidInitSysClock( ClkSrcName_t ClkSrc , HSESrcName_t HSESrc , PllSrcName_t PLLSrc  , AHBPreName_t AHB_Prescaler , APB1PreName_t APB1_Prescaler  , APB2PreName_t APB2_Prescaler ) ;
	
	/*
	  - Function To Enable Prepheral of  Reg
	*/
	 void MRCC_voidEnableClock (BusName_t BusName ,u8 Copy_u8PerName  ); 
	 
	 // CLK Sourse
	 #define  HSE_CLK			   	0
	 #define  HSI_CLK			   	1
	 #define  PLL_CLK			   	2
	// HSE Sourse
	 #define  HSE_CYRSTAL		     0
	 #define  HSI_RC			     1
	 // PLL SOURCE				     
	 #define  PLL_HSE			     0
	 #define  PLL_HSI			     1
	 
	 // AHB_Prescaller
	 #define  AHB_Pre1		         0			 
	 #define  AHB_Pre2		         1			 
	 #define  AHB_Pre4		         2			 
	 #define  AHB_Pre8		         3			 
	 #define  AHB_Pre16		         4			 
	 #define  AHB_Pre32		         5			 
	 #define  AHB_Pre64		         6			 
	 #define  AHB_Pre128			 7 			 
	 #define  AHB_Pre256			 8			 
	 #define  AHB_Pre512			 9			 
	 
	 // APB1_Prescaller
	 #define  ABP1_Pre1			     0			 
	 #define  ABP1_Pre2			     1			 
	 #define  ABP1_Pre4			     2			 
	 #define  ABP1_Pre8			     3			 
	 #define  ABP1_Pre16			 4	
	 /*
		* APB2_Prescaller 
	*/
	#define  ABP2_Pre1				0	
	#define  ABP2_Pre2				1
	#define  ABP2_Pre4				2
	#define  ABP2_Pre8				3
	#define  ABP2_Pre16				4
	 /*
	 BUS
	 */
	  #define  AHB1_BUS				 0
	  #define  AHB2_BUS				 1
	  #define  AHB3_BUS				 2
	  #define  APB1_BUS				 3
	  #define  APB2_BUS				 4
#endif //RCC_INTERFACE_H