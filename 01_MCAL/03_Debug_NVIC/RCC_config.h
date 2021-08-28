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


	/*
	Config RCC Enum
	- Crystal CLK SRC (RCC_HSE : External ,RCC_HSI : Internal  ,RCC_PLL Use_PLL) ---->ClkSrcName_t
	- For External Crystal CLK From (HSE_Crystal , HSE_RC )--->HSESrcName_t
	- For PLL Can Be For (HSE , HSI) --------->PllSrcName_t
	- PLL  Prescaller ( M /(2:63) N*(50:432) P Q )               ---> User Select By #define                  
	- AHB  Prescaller ( 1 : 512 )  							---> AHBPreName_t
	- APB1 Prescaller (1  : 16)    							---> APB1_Prescaller
	- APB2_Prescaller (1  : 16)    							---> APB2_Prescaller
	- Select Bus ( AHB1 AHB2 AHB3 APB1  APB2 )  --->BusName_t
	              
	              
	              
	             
	*/
		 typedef enum
		 {
			 RCC_HSE	=	 0 ,		//High Speed External
			 RCC_HSI		   ,		//High Speed Internal
			 RCC_PLL						//Use Pll
			 
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
		- C
	*/
	typedef enum 
	{
		AHB_Pre1 = 0 , 			// No Action
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
	 

	 
	 
	 /* 
	  - For PLL 
						* M From /2......... To/63 
	          * N From*2......... To*432
						* P From /2......... To/8
						* Q From /2......... To/.. 
	   */
	 
	 /*
	 
   #define M_Option 		2
	 
	 #define N_Option     2
	 
   #define P_Option     2
	 
	 #define Q_Option     2
	
	*/
	
	
	
	
	
	
#endif /* RCC_CONFIG_H_ */
