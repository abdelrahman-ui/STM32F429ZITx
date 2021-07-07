			/*
				* RCC_interface.h
				* Created: 5/5/2021
				* Author: Abdelrahman_Magdy

			*/

	/*
	
	- Frist You Must Know The Perpheral On Which Bus
	- Function To Set System CLK From Enum Type Send :
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
	 

/**************************************************************************************************************************************************************************************************************************/

		/*
			SPI _interface.h			
			Created: 6/28/2021		
			Author: Abdelrahman_Magdy

		*/

/*			Function Take The Number OF SPI(SPIX) & X {0,1,...,6} & Iniate It				 */
void MSPI_voidInit(u8 Copy_u8SPINumber ,u8 Copy_u8DeviceMode ,u8 Copy_u8ClockPolarity ,u8 Copy_u8ClockPhase ,u8 Copy_u8DataSize ,u8 Copy_u8DataDir , u8 Copy_u8NssMode,u8 Copy_u8BaudRate ,u8 Copy_u8BiDirMode) ;
/*			Function Take The Number OF SPI(SPIX) & X {0,1,...,6} & Disable It				 */
void MSPI_voidDisable(u8 Copy_u8SPINumber) ;
/*			Function Take Number Of SPI & 8_Bit Data To Write Them At DR_REG & Recive Data Can Be Dumy Or Usefull*/
u8 MSPI_u8Write8itData(u8 Copy_u8SPINumber , u8 Copy_u8DataOut);
/*			Function Take Number Of SPI & Write Array Of 8_Bit Data Send Meny Data After It Self  Loop By Data Count Index */
void MSPI_voidWriteMulti8BitData(u8 Copy_u8SPINumber , u8* Copy_u8DataOut , u8* Copy_u8DataIn , u8 Copy_u8Count   );
/*			Function Take Number Of SPI & Write Array Of 16_Bit Data Send Meny Data After It Self  Loop By Data Count Index */
void MSPI_voidWriteMulti16BitData(u8 Copy_u8SPINumber , u16* Copy_u8DataOut , u16* Copy_u8DataIn , u8 Copy_u8Count   );


/**************************************************************************************************************************************************************************************************************************/
 
				 /*
						- GPIO_interface.h
						- Created: 5/16/2021
						- Author: Abdelrahman_Magdy
				 */
	/*		Function Set The Mode Of Pin	*/
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
/**************************************************************************************************************************************************************************************************************************/
/*
			 DMA_interface.h
			 -Created: 6/25/2021
			 -Author: Abdelrahman_Magdy

*/
/* Function To Init DMA : */
u8 MDMA_2_u8StreamInit(void);

/* Function :	To Set Addrese Of Source & Distination*/
void MDMA_voidSetAdresses(u32* Ptr_SrcAdd ,u32* Ptr_DisAdd ,u32 Copy_u32Size  );

/* Function :	To EN_DMA */
void MDMA_voidEnable(void) ;
/**************************************************************************************************************************************************************************************************************************/
			/*   - NVIC_interface.h				
				 -Created: 5/24/2021			
				 -Author: Abdelrahman_Magdy  
			*/
/*		 Enables an interrupt or exception.	   -------> ISERx		need Interrput Number				*/
void MNVIC_voidSetEnable(u8 Copy_u8IntNum ) ;

/*		Disables an interrupt or exception.				*/
void MNVIC_voidDisable(u8 Copy_u8IntNum) ;

/*		Sets the pending status of interrupt or exception to 1.				*/
void MNVIC_voidSetPending(u8 Copy_u8IntNum) ;

/*Clears the pending status of interrupt or exception to 0.									*/
void MNVIC_voidClearPending(u8 Copy_u8IntNum);

/*		* Reads the pending status of interrupt or exception. This function returns nonzero value if the pending status is set to 1.							
    	* Handel Only External Int Priority										*/
void MNVIC_voidSetPriority(u8 Copy_u8IntNum, u8 Copy_u8GroupPriority , u8 Copy_u8SubGroupPriority , u8 Copy_u8GroupPriorityCFG  )	;

/*	Sets the priority of an interrupt or exception with configurable priority level to 1.								*/
u8	 MNVIC_voidGetActiveFlag(u8 Copy_u8IntNum)	;

/* Reads the priority of an interrupt or exception with configurable priority level. This function return the current priority level.						
u8	 MNVIC_GetPendingIRQ();
*/
/**************************************************************************************************************************************************************************************************************************/

				/*
				 - EXI _interface.h
				 - Created: 5/27/2021
				 - Author: Abdelrahman_Magdy
			
				*/
/*	Function Take The Number Of Line To Set Or Not Mask It As EXTI */
void MEXTI_voidEnable(u8 Copy_u8LineNum ) ;

/*	Function Take The Number Of Line To Disable Or Mask It As EXTI */
void MEXTI_voidDisable(u8 Copy_u8LineNum  ) ;

/* Function  To Make Trigger As Raise Or Fall */
void MEXTI_voidEventType( u8 Copy_u8LineNum  , u8 Copy_u8Event   ) ;

/* Function To Make Fake Trigger  */
void MEXTI_voidSWTrigger( u8 Copy_u8LineNum  ) ;

/* Function To Select Pin From Line Or Select Port From Line*/
void MEXTI_voidSelectPort(  u8 Copy_u8LineNum  , u8 Copy_u8PortID  ) ;


/**************************************************************************************************************************************************************************************************************************/
			/*
				- SPI _interface.h
				-Created: 6/28/2021
				-Author: Abdelrahman_Magdy
			*/
/*			Function Take The Number OF SPI(SPIX) & X {0,1,...,6} & Iniate It				 */
void MSPI_voidInit(u8 Copy_u8SPINumber ,u8 Copy_u8DeviceMode ,u8 Copy_u8ClockPolarity ,u8 Copy_u8ClockPhase ,u8 Copy_u8DataSize ,u8 Copy_u8DataDir , u8 Copy_u8NssMode,u8 Copy_u8BaudRate ,u8 Copy_u8BiDirMode) ;
/*			Function Take The Number OF SPI(SPIX) & X {0,1,...,6} & Disable It				 */
void MSPI_voidDisable(u8 Copy_u8SPINumber) ;
/*			Function Take Number Of SPI & 8_Bit Data To Write Them At DR_REG & Recive Data Can Be Dumy Or Usefull*/
u8 MSPI_u8Write8itData(u8 Copy_u8SPINumber , u8 Copy_u8DataOut);
/*			Function Take Number Of SPI & Write Array Of 8_Bit Data Send Meny Data After It Self  Loop By Data Count Index */
void MSPI_voidWriteMulti8BitData(u8 Copy_u8SPINumber , u8* Copy_u8DataOut , u8* Copy_u8DataIn , u8 Copy_u8Count   );
/*			Function Take Number Of SPI & Write Array Of 16_Bit Data Send Meny Data After It Self  Loop By Data Count Index */
void MSPI_voidWriteMulti16BitData(u8 Copy_u8SPINumber , u16* Copy_u8DataOut , u16* Copy_u8DataIn , u8 Copy_u8Count   );
/**************************************************************************************************************************************************************************************************************************/