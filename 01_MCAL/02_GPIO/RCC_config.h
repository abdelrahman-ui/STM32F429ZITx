/***************************************************************************************
 *************************** - RCC_config.h					 ***************************
***************************   -Created: 5/5/2021			 ***************************
***************************   -Author: Abdelrahman_Magdy     ***************************
***************************   -Version : _1_				 ***************************
***************************   -Note :
									*-
									*-
 **************************************************************************************/ 


/**************************************************************************************
	- The Optiones Which Developer Choose From Which What Is Appropriate To App
 **************************************************************************************/

/**************************************************************************************
******************* guard of file will call on time in .c		   ********************
**************************************************************************************/


#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

	/*The Option Of Clk source To User : RCC_HSE_CRYSTAL
						   RCC_HSE_RC 
						   RCC_HSI
						   RCC_PLL_HSE
						   RCC_PLL_HSI
						   
	*/
		 typedef enum
		 {
			 RCC_HSE	=	 0 ,
			 RCC_HSI		   ,
			 RCC_PLL
			 
			 }ClkSrcName_t;
			 
		 typedef enum
		 {
			 HSE_Crystal	=	 0 ,
			 HSE_RC
			 
		 }HSESrcName_t;
		 
		 typedef enum 
		 {
			 PLL_HSE  = 0 ,
			 PLL_HSI  
		 }PllSrcName_t;	 
		 
	/*
		- AHB_Prescaller 
	*/
	typedef enum 
	{
		AHB_Pre1 = 0 ,
		AHB_Pre2	 ,
		AHB_Pre4	 ,
		AHB_Pre8	 ,
		AHB_Pre16	 ,
		AHB_Pre32	 ,
		AHB_Pre64	 ,
		AHB_Pre128	 ,
		AHB_Pre256	 ,
		AHB_Pre512	 
		
		}AHBPreName_t;
		
	/*
		- APB1_Prescaller 
	*/
	
	typedef enum
	{
		ABP1_Pre1 = 0 ,
		ABP1_Pre2	 ,
		ABP1_Pre4	 ,
		ABP1_Pre8	 ,
		ABP1_Pre16	 
	}APB1PreName_t ;
	
/*
		* APB2_Prescaller 
*/
	typedef enum
	{
		ABP2_Pre1 = 0 ,
		ABP2_Pre2	 ,
		ABP2_Pre4	 ,
		ABP2_Pre8	 ,
		ABP2_Pre16
	}APB2PreName_t ;

/*
		* M , N , P , Q_Option 
*/
/*
	#define		M_Option			
	#define		N_Option
	#define		P_Option
    #define		Q_Option
*/

/*
	Buses 
*/
 typedef enum
	 {
		 AHB1	=	 0 ,
		 AHB2		   ,
		 AHB3		   ,
		 APB1		   ,
		 APB2 
		 
	 }BusName_t;

#endif /* RCC_CONFIG_H_ */