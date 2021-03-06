/***************************************************************************************
 *************************** - SPI _private.h				 ***************************
***************************   -Created: 7/5/2021			 ***************************
***************************   -Author: Abdelrahman_Magdy     ***************************
***************************   -Version : _1_				 ***************************
***************************   -Note :
									*-
									*-
 **************************************************************************************/ 

/**************************************************************************************

*	 - Developer can't Edit in it    
*	  - Register _ Defination		
*	  - Design : 
					- #define	:	YES
					- Union		:	NO
					- Struct	:	NO

**************************************************************************************/

/*************************************************************************************
******************* guard of file will call on time in .c		   *******************
*************************************************************************************/ 


#ifndef SPI_PRIVATE_H
#define SPI_PRIVATE_H

/***********************************************************************************
	-----> Macros
			*  From Memory Map At Referance Manual Get 
										- Base_Address OF (6)SPI
										- Bus OF SPI 
************************************************************************************/
												/*Base_Address */
#define SPI1_Base_Address										0x40013000       /*   APB2     */
#define SPI2_Base_Address										0x40003800       /*    APB1    */
#define SPI3_Base_Address										0x40003C00       /*   APB1     */
#define SPI4_Base_Address										0x40013400       /*   APB2     */
#define SPI5_Base_Address										0x40015000       /*    APB2    */
#define SPI6_Base_Address										0x40015400			 /* 		APB2		*/
                                                             
													                                   
												
/***********************************************************************************
-----> Macros
*  Register Map : SPI1_Register

************************************************************************************/

#define SPI1_CR1							 (*((volatile u32*) (SPI1_Base_Address+0x00)))	
#define SPI1_CR2							 (*((volatile u32*) (SPI1_Base_Address+0x04)))	
#define SPI1_SR							   (*((volatile u32*) (SPI1_Base_Address+0x08)))	
#define SPI1_DR							   (*((volatile u32*) (SPI1_Base_Address+0x0C)))	
#define SPI1_CRCPR						 (*((volatile u32*) (SPI1_Base_Address+0x10)))	
#define SPI1_RXCRCR						 (*((volatile u32*) (SPI1_Base_Address+0x14)))	
#define SPI1_TXCRCR						 (*((volatile u32*) (SPI1_Base_Address+0x18)))	
#define SPI1_I2SCFGR					 (*((volatile u32*) (SPI1_Base_Address+0x1C)))	
#define SPI1_I2SPR					   (*((volatile u32*) (SPI1_Base_Address+0x20)))	

/***********************************************************************************
-----> Macros
*  Register Map : SPI2_Register

************************************************************************************/

#define SPI2_CR1							 (*((volatile u32*) (SPI2_Base_Address+0x00)))	
#define SPI2_CR2							 (*((volatile u32*) (SPI2_Base_Address+0x04)))	
#define SPI2_SR							   (*((volatile u32*) (SPI2_Base_Address+0x08)))	
#define SPI2_DR							   (*((volatile u32*) (SPI2_Base_Address+0x0C)))	
#define SPI2_CRCPR						 (*((volatile u32*) (SPI2_Base_Address+0x10)))	
#define SPI2_RXCRCR						 (*((volatile u32*) (SPI2_Base_Address+0x14)))	
#define SPI2_TXCRCR						 (*((volatile u32*) (SPI2_Base_Address+0x18)))	
#define SPI2_I2SCFGR					 (*((volatile u32*) (SPI2_Base_Address+0x1C)))	
#define SPI2_I2SPR					   (*((volatile u32*) (SPI2_Base_Address+0x20)))	

/***********************************************************************************
-----> Macros
*  Register Map :SPI3_Register

************************************************************************************/

#define SPI3_CR1							 (*((volatile u32*) (SPI3_Base_Address+0x00)))	
#define SPI3_CR2							 (*((volatile u32*) (SPI3_Base_Address+0x04)))	
#define SPI3_SR							   (*((volatile u32*) (SPI3_Base_Address+0x08)))	
#define SPI3_DR							   (*((volatile u32*) (SPI3_Base_Address+0x0C)))	
#define SPI3_CRCPR						 (*((volatile u32*) (SPI3_Base_Address+0x10)))	
#define SPI3_RXCRCR						 (*((volatile u32*) (SPI3_Base_Address+0x14)))	
#define SPI3_TXCRCR						 (*((volatile u32*) (SPI3_Base_Address+0x18)))	
#define SPI3_I2SCFGR					 (*((volatile u32*) (SPI3_Base_Address+0x1C)))	
#define SPI3_I2SPR					   (*((volatile u32*) (SPI3_Base_Address+0x20)))	


/***********************************************************************************
-----> Macros
*  Register Map :SPI4_Register

************************************************************************************/

#define SPI4_CR1							 (*((volatile u32*) (SPI4_Base_Address+0x00)))	
#define SPI4_CR2							 (*((volatile u32*) (SPI4_Base_Address+0x04)))	
#define SPI4_SR							   (*((volatile u32*) (SPI4_Base_Address+0x08)))	
#define SPI4_DR							   (*((volatile u32*) (SPI4_Base_Address+0x0C)))	
#define SPI4_CRCPR						 (*((volatile u32*) (SPI4_Base_Address+0x10)))	
#define SPI4_RXCRCR						 (*((volatile u32*) (SPI4_Base_Address+0x14)))	
#define SPI4_TXCRCR						 (*((volatile u32*) (SPI4_Base_Address+0x18)))	
#define SPI4_I2SCFGR					 (*((volatile u32*) (SPI4_Base_Address+0x1C)))	
#define SPI4_I2SPR					   (*((volatile u32*) (SPI4_Base_Address+0x20)))	

/***********************************************************************************
-----> Macros
*  Register Map :SPI5_Register

************************************************************************************/

#define SPI5_CR1							 (*((volatile u32*) (SPI5_Base_Address+0x00)))	
#define SPI5_CR2							 (*((volatile u32*) (SPI5_Base_Address+0x04)))	
#define SPI5_SR							   (*((volatile u32*) (SPI5_Base_Address+0x08)))	
#define SPI5_DR							   (*((volatile u32*) (SPI5_Base_Address+0x0C)))	
#define SPI5_CRCPR						 (*((volatile u32*) (SPI5_Base_Address+0x10)))	
#define SPI5_RXCRCR						 (*((volatile u32*) (SPI5_Base_Address+0x14)))	
#define SPI5_TXCRCR						 (*((volatile u32*) (SPI5_Base_Address+0x18)))	
#define SPI5_I2SCFGR					 (*((volatile u32*) (SPI5_Base_Address+0x1C)))	
#define SPI5_I2SPR					   (*((volatile u32*) (SPI5_Base_Address+0x20)))	

/***********************************************************************************
-----> Macros
*  Register Map :SPI6_Register

************************************************************************************/

#define SPI6_CR1							 (*((volatile u32*) (SPI6_Base_Address+0x00)))	
#define SPI6_CR2							 (*((volatile u32*) (SPI6_Base_Address+0x04)))	
#define SPI6_SR							   (*((volatile u32*) (SPI6_Base_Address+0x08)))	
#define SPI6_DR							   (*((volatile u32*) (SPI6_Base_Address+0x0C)))	
#define SPI6_CRCPR						 (*((volatile u32*) (SPI6_Base_Address+0x10)))	
#define SPI6_RXCRCR						 (*((volatile u32*) (SPI6_Base_Address+0x14)))	
#define SPI6_TXCRCR						 (*((volatile u32*) (SPI6_Base_Address+0x18)))	
#define SPI6_I2SCFGR					 (*((volatile u32*) (SPI6_Base_Address+0x1C)))	
#define SPI6_I2SPR					   (*((volatile u32*) (SPI6_Base_Address+0x20)))	

/***********************************************************************************/

/***********************************************************************************
-----> Macros
*  Register CR1 Bit Arrangement

************************************************************************************/
#define	CPHA  									0
#define CPOL										1
#define MSTR										2
#define SPE 										6
#define LSBFIRST								7
#define SSI										  8
#define SSM											9
#define RXONLY									10
#define DFF											11
#define CRCNEXT									12
#define CRCEN										13
#define BIDIOE									14
#define BIDIMODE								15

/***********************************************************************************
-----> Macros
*  Register RS Bit Arrangement

************************************************************************************/
#define	RXNE  									0
#define TXE			   							1
#define CHSIDE									2
#define UDR 										3
#define CRCERR								  4	
#define MODF										5
#define OVR										  6
#define BSY								      7
#define FRE											8


#endif //SPI_PRIVATE_H







