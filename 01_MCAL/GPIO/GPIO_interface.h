/***************************************************************************************
 *************************** - GPIO_interface.h				 ***************************
***************************   -Created: 5/16/2021			 ***************************
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



#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H


			/* Macros Of Port */
			
#define  GPIOA										0
#define  GPIOB										1
#define  GPIOC										2
#define  GPIOD										3
#define  GPIOE										4
#define  GPIOF										5
#define  GPIOG										6
#define  GPIOH										7

			/* Macros Of Pins */

#define  PIN0										0
#define  PIN1										1
#define  PIN2										2
#define  PIN3										3
#define  PIN4										4
#define  PIN5										5
#define  PIN6										6
#define  PIN7										7
#define  PIN8										8
#define  PIN9										9
#define  PIN10										10
#define  PIN11										11
#define  PIN12										12
#define  PIN13										13
#define  PIN14										14
#define  PIN15										15
			/*Macros Of Mode*/
#define MODE_INPUT									00
#define MODE_OUTPUT									01
#define MODE_ALTF									10
#define MODE_ANALOG									11

			/*Macros Of Type*/
#define  OUTPUT_TYPE_PUSH_PULL						0
#define  OUTPUT_TYPE_OPEN_DRAIN						1
			/*Macros Of Speed*/
			
#define OUTPUT_LOW_SPEED							00
#define OUTPUT_MEDUIM_SPEED							01
#define OUTPUT_HIGH_SPEED							10
#define OUTPUT_VERY_HIGH_SPEED						11		
			/*Macros Of PULL*/
#define PULL_OFF									00							
#define PULL_UP										01
#define PULL_DOWN									11
			/*Macros Write Data */
#define  HIGH										1
#define  LOW										0			

			/*Macros Of Pin 16  */
#define  LOCK_PIN									16

/*		Function Prototypes */

	/*		Function Set The Mode Of Pin								*/
void MGOIP_voidSetPinMode(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8MODE)  ; 
	/*		Function Set The Type Of OutPut (OpenDrain = 0 , PushPull = 1)		*/
void MGPIO_voidSetOutType(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8Type)  ; 
	/*		Function Set The Speed (LOW , Meduim , High ,VeryHaigh		*/
void MGPIO_voidSetOutSpeed(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8Speed)  ; 
	/*		Function Set The PULL ( OFF , UP , DOWN )		*/
void MGPIO_voidSetPull(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8PULL_TYPE)  ;
	/*		Function To Read Data From IDR		*/
u8 MGPIO_u8ReadData(u8 copy_u8PORT ,u8 copy_u8PIN)  ;
	/*		Function To Write Data At ODR	Value = high , low	*/
void MGPIO_voidWriteDataOdr(u8 copy_u8PORT ,u8 copy_u8PIN , u8 copy_u8Value )  ;
	/*		Function To Lock Pin	*/
void MGPIO_voidPinLock(u8 copy_u8PORT ,u8 copy_u8PIN )  ;
	/*		Function Set The AltFn								*/
void MGOIP_voidPinSetAltFn(u8 copy_u8PORT ,u8 copy_u8PIN,u8 copy_u8AlT)  ;








#endif /* GPIO_INTERFACE_H*/
