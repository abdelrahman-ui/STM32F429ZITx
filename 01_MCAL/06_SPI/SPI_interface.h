/***************************************************************************************
 *************************** - SPI _interface.h				 ***************************
***************************   -Created: 6/28/2021			 ***************************
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



#ifndef SPI_INTERFACE_H
#define SPI_INTERFACE_H

#include "STD_TYPES.h"

/*			NUM OF SPI 			*/

#define SPI1						1
#define SPI2						2
#define SPI3						3
#define SPI4						4
#define SPI5						5
#define SPI6						6


#define SPI_MASTER      0
#define SPI_SLAVE       1

#define DATA_SIZE_8			0
#define DATA_SIZE_16		1

#define DATA_DIR_MSB    0
#define DATA_DIR_LSB    1

#define NSS_MODE_SW    0
#define NSS_MODE_HW    1

#define Bi_Dir_ON				1
#define Bi_Dir_OFF 			0





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



#endif //SPI_INTERFACE_H



