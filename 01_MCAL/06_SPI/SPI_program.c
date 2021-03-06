/***********************************************************************************************
 ***************************  - SPI_program.c				 		 ***************************
***************************   - Created: 6/28/2021					 ****************************
***************************   - Author : Abdelrahman_Magdy			 ****************************
***************************   - Version: _1_				 		 ****************************
***************************   - Note :
									*-
									*-
 **************************************************************************************/ 


/****************************************************************************************
***************************   The Foundation Of Function   ***************************** 
****************************************************************************************/


/************** INCLUDE LIB **************/
	
		 #include "STD_TYPES.h"
		 #include "BIT_MATH.h"
/*****************************************/	 

/************** INCLUDE MCAL**************/
		#include "SPI_private.h"
		#include "SPI_interface.h"
		#include "SPI_config.h"
/*****************************************/

/************** INCLUDE HALL**************/
			

/*****************************************/

/************** INCLUDEAPP***************/


/*****************************************/






/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function Take  :
						- SPINumber  		: (SPIX) X{1,2,.....,6} 
						- DeviceMode    : SPI_MASTER   , SPI_SLAVE
						- ClockPolarity :         0    ,    1
						- ClockPhase    :         0    ,    1
						- DataSize      : DATA_SIZE_8  , DATA_SIZE_16
						- DataDir       : DATA_DIR_MSB , DATA_DIR_LSB
						- NssMode       : NSS_MODE_SW  , NSS_MODE_HW
						- BiDirMode     : Bi_Dir_ON    , Bi_Dir_OFF
						- EN SPI
						- Bit 10 if 1 Resive only
						- ssm : automatic make ss low and after high but only when have only one slave 
				To Iniat The SPI 
		
		*/

void MSPI_voidInit(u8 Copy_u8SPINumber ,u8 Copy_u8DeviceMode ,u8 Copy_u8ClockPolarity ,u8 Copy_u8ClockPhase ,u8 Copy_u8DataSize ,u8 Copy_u8DataDir , u8 Copy_u8NssMode,u8 Copy_u8BaudRate ,u8 Copy_u8BiDirMode)
{
	switch(Copy_u8SPINumber)
	{
		case SPI1 :
/*********************************************************/		
			/* Cofigure The SPI Device Mode This bit should not be changed when communication is ongoing.*/
		if(Copy_u8DeviceMode == SPI_MASTER) 
		{
			/*	Master configuration 	*/
			SET_BIT(SPI1_CR1, MSTR);
		}
			
		else if (Copy_u8DeviceMode == SPI_SLAVE)
		{
			 /*	 Slave configuration	*/
			CLR_BIT(SPI1_CR1, MSTR);
		}
			else {/* MISRA*/}
		
/*********************************************************/		
		/* 	Cofigure The SPI Phase And Polarity	 */
		if(Copy_u8ClockPolarity==1U )
		{ /*CK to 1 when idle*/
			SET_BIT(SPI1_CR1,CPOL);
		}
		else
		{ /*CK to 0 when idle*/
			CLR_BIT(SPI1_CR1,CPOL);
		}
		if(Copy_u8ClockPhase==1U )
		{ /*The second clock transition is the first data capture edge*/
			SET_BIT(SPI1_CR1, CPHA);
		}
		else
		{ /*The first clock transition is the first data capture edge*/
			CLR_BIT(SPI1_CR1,CPHA);
		}
		
/*********************************************************/		
		/* 	Cofigure The SPI Data Size	 */
		if(Copy_u8DataSize==DATA_SIZE_16  )
		{ /*16-bit data frame format is selected for transmission/receptione*/
			SET_BIT(SPI1_CR1, DFF);
		}
		else if (Copy_u8DataSize==DATA_SIZE_8 )
		{ /*8-bit data frame format is selected for transmission/reception*/
			CLR_BIT(SPI1_CR1,DFF);
		}
		else {/* MISRA*/}	
/*********************************************************/	
		/* 	Cofigure The SPI Data DIR	 */
		if(Copy_u8DataDir ==DATA_DIR_LSB )
		{ /*LSB transmitted first*/
			SET_BIT(SPI1_CR1, LSBFIRST);
		}
		else if (Copy_u8DataDir==DATA_DIR_MSB )
		{ /*MSB transmitted first*/
			CLR_BIT(SPI1_CR1,LSBFIRST);
		}
		else {/* MISRA*/}
/*********************************************************/	   
	  /* Cofigure The SPI NssMode */
		if((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode == NSS_MODE_SW))
		{ /* Software slave management enabled */
			SET_BIT(SPI1_CR1, SSM);
			SET_BIT(SPI1_CR1, SSI);
		}
		else if ((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode== NSS_MODE_HW) )
		{ /* Software slave management disabled*/
			CLR_BIT(SPI1_CR1,SSM);
			/* HW At Master SSI Not Used */
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_SW) )
		{  /* SW Slave*/
			SET_BIT(SPI1_CR1, SSM);
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_HW) )
		{  /* SW Slave*/
			CLR_BIT(SPI1_CR1, SSM);
		}
		
		else {/* MISRA*/}
/*********************************************************/
		/* Cofigure The SPI BI_DIR_MODE */
		if(Copy_u8BiDirMode == Bi_Dir_ON)
		{ /* 1-line bidirectional data mode selected */
			SET_BIT(SPI1_CR1,BIDIMODE);
		}
		else if (Copy_u8BiDirMode== Bi_Dir_OFF)
		{ /*  2-line unidirectional data mode selected*/
			CLR_BIT(SPI1_CR1,BIDIMODE);
		}
		else {/* MISRA*/}
/*********************************************************/		
		/* Cofigure The SPI BOUD_Rate We Have 7 Option */
		if((Copy_u8BaudRate <=7))
		{
			SPI1_CR1|=(Copy_u8BaudRate<<3U);
		}
		else {/* MISRA*/}
/*********************************************************/				
		/* Cofigure The SPI EN */
			SET_BIT(SPI1_CR1,SPE);
		
		break ;
		
		/*********************************************************************************************************************************************/
	
		
		case SPI2 :
/*********************************************************/		
			/* Cofigure The SPI Device Mode This bit should not be changed when communication is ongoing.*/
		if(Copy_u8DeviceMode == SPI_MASTER) 
		{
			/*	Master configuration 	*/
			SET_BIT(SPI2_CR1, MSTR);
		}
			
		else if (Copy_u8DeviceMode == SPI_SLAVE)
		{
			 /*	 Slave configuration	*/
			CLR_BIT(SPI2_CR1, MSTR);
		}
			else {/* MISRA*/}
		
/*********************************************************/		
		/* 	Cofigure The SPI Phase And Polarity	 */
		if(Copy_u8ClockPolarity==1U )
		{ /*CK to 1 when idle*/
			SET_BIT(SPI2_CR1,CPOL);
		}
		else
		{ /*CK to 0 when idle*/
			CLR_BIT(SPI2_CR1,CPOL);
		}
		if(Copy_u8ClockPhase==1U )
		{ /*The second clock transition is the first data capture edge*/
			SET_BIT(SPI2_CR1, CPHA);
		}
		else
		{ /*The first clock transition is the first data capture edge*/
			CLR_BIT(SPI2_CR1,CPHA);
		}
		
/*********************************************************/		
		/* 	Cofigure The SPI Data Size	 */
		if(Copy_u8DataSize==DATA_SIZE_16  )
		{ /*16-bit data frame format is selected for transmission/receptione*/
			SET_BIT(SPI2_CR1, DFF);
		}
		else if (Copy_u8DataSize==DATA_SIZE_8 )
		{ /*8-bit data frame format is selected for transmission/reception*/
			CLR_BIT(SPI2_CR1,DFF);
		}
		else {/* MISRA*/}	
/*********************************************************/	
		/* 	Cofigure The SPI Data DIR	 */
		if(Copy_u8DataDir ==DATA_DIR_LSB )
		{ /*LSB transmitted first*/
			SET_BIT(SPI2_CR1, LSBFIRST);
		}
		else if (Copy_u8DataDir==DATA_DIR_MSB )
		{ /*MSB transmitted first*/
			CLR_BIT(SPI2_CR1,LSBFIRST);
		}
		else {/* MISRA*/}
/*********************************************************/	   
	  /* Cofigure The SPI NssMode */
		if((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode == NSS_MODE_SW))
		{ /* Software slave management enabled */
			SET_BIT(SPI2_CR1, SSM);
			SET_BIT(SPI2_CR1, SSI);
		}
		else if ((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode== NSS_MODE_HW) )
		{ /* Software slave management disabled*/
			CLR_BIT(SPI2_CR1,SSM);
			/* HW At Master SSI Not Used */
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_SW) )
		{  /* SW Slave*/
			SET_BIT(SPI2_CR1, SSM);
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_HW) )
		{  /* SW Slave*/
			CLR_BIT(SPI2_CR1, SSM);
		}
		
		else {/* MISRA*/}
/*********************************************************/
		/* Cofigure The SPI BI_DIR_MODE */
		if(Copy_u8BiDirMode == Bi_Dir_ON)
		{ /* 1-line bidirectional data mode selected */
			SET_BIT(SPI2_CR1,BIDIMODE);
		}
		else if (Copy_u8BiDirMode== Bi_Dir_OFF)
		{ /*  2-line unidirectional data mode selected*/
			CLR_BIT(SPI2_CR1,BIDIMODE);
		}
		else {/* MISRA*/}
/*********************************************************/		
		/* Cofigure The SPI BOUD_Rate We Have 7 Option */
		if((Copy_u8BaudRate <=7))
		{
			SPI2_CR1|=(Copy_u8BaudRate<<3U);
		}
		else {/* MISRA*/}
/*********************************************************/				
		/* Cofigure The SPI EN */
			SET_BIT(SPI2_CR1,SPE);
		
		break ;
		/*********************************************************************************************************************************************/
	
		case SPI3 :
/*********************************************************/		
			/* Cofigure The SPI Device Mode This bit should not be changed when communication is ongoing.*/
		if(Copy_u8DeviceMode == SPI_MASTER) 
		{
			/*	Master configuration 	*/
			SET_BIT(SPI3_CR1, MSTR);
		}
			
		else if (Copy_u8DeviceMode == SPI_SLAVE)
		{
			 /*	 Slave configuration	*/
			CLR_BIT(SPI3_CR1, MSTR);
		}
			else {/* MISRA*/}
		
/*********************************************************/		
		/* 	Cofigure The SPI Phase And Polarity	 */
		if(Copy_u8ClockPolarity==1U )
		{ /*CK to 1 when idle*/
			SET_BIT(SPI3_CR1,CPOL);
		}
		else
		{ /*CK to 0 when idle*/
			CLR_BIT(SPI3_CR1,CPOL);
		}
		if(Copy_u8ClockPhase==1U )
		{ /*The second clock transition is the first data capture edge*/
			SET_BIT(SPI3_CR1, CPHA);
		}
		else
		{ /*The first clock transition is the first data capture edge*/
			CLR_BIT(SPI3_CR1,CPHA);
		}
		
/*********************************************************/		
		/* 	Cofigure The SPI Data Size	 */
		if(Copy_u8DataSize==DATA_SIZE_16  )
		{ /*16-bit data frame format is selected for transmission/receptione*/
			SET_BIT(SPI3_CR1, DFF);
		}
		else if (Copy_u8DataSize==DATA_SIZE_8 )
		{ /*8-bit data frame format is selected for transmission/reception*/
			CLR_BIT(SPI3_CR1,DFF);
		}
		else {/* MISRA*/}	
/*********************************************************/	
		/* 	Cofigure The SPI Data DIR	 */
		if(Copy_u8DataDir ==DATA_DIR_LSB )
		{ /*LSB transmitted first*/
			SET_BIT(SPI3_CR1, LSBFIRST);
		}
		else if (Copy_u8DataDir==DATA_DIR_MSB )
		{ /*MSB transmitted first*/
			CLR_BIT(SPI3_CR1,LSBFIRST);
		}
		else {/* MISRA*/}
/*********************************************************/	   
	  /* Cofigure The SPI NssMode */
		if((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode == NSS_MODE_SW))
		{ /* Software slave management enabled */
			SET_BIT(SPI3_CR1, SSM);
			SET_BIT(SPI3_CR1, SSI);
		}
		else if ((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode== NSS_MODE_HW) )
		{ /* Software slave management disabled*/
			CLR_BIT(SPI3_CR1,SSM);
			/* HW At Master SSI Not Used */
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_SW) )
		{  /* SW Slave*/
			SET_BIT(SPI3_CR1, SSM);
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_HW) )
		{  /* SW Slave*/
			CLR_BIT(SPI3_CR1, SSM);
		}
		
		else {/* MISRA*/}
/*********************************************************/
		/* Cofigure The SPI BI_DIR_MODE */
		if(Copy_u8BiDirMode == Bi_Dir_ON)
		{ /* 1-line bidirectional data mode selected */
			SET_BIT(SPI3_CR1,BIDIMODE);
		}
		else if (Copy_u8BiDirMode== Bi_Dir_OFF)
		{ /*  2-line unidirectional data mode selected*/
			CLR_BIT(SPI3_CR1,BIDIMODE);
		}
		else {/* MISRA*/}
/*********************************************************/		
		/* Cofigure The SPI BOUD_Rate We Have 7 Option */
		if((Copy_u8BaudRate <=7))
		{
			SPI3_CR1|=(Copy_u8BaudRate<<3U);
		}
		else {/* MISRA*/}
/*********************************************************/				
		/* Cofigure The SPI EN */
			SET_BIT(SPI3_CR1,SPE);
		
		break ;
		/*********************************************************************************************************************************************/
			case SPI4 :
/*********************************************************/		
			/* Cofigure The SPI Device Mode This bit should not be changed when communication is ongoing.*/
		if(Copy_u8DeviceMode == SPI_MASTER) 
		{
			/*	Master configuration 	*/
			SET_BIT(SPI4_CR1, MSTR);
		}
			
		else if (Copy_u8DeviceMode == SPI_SLAVE)
		{
			 /*	 Slave configuration	*/
			CLR_BIT(SPI4_CR1, MSTR);
		}
			else {/* MISRA*/}
		
/*********************************************************/		
		/* 	Cofigure The SPI Phase And Polarity	 */
		if(Copy_u8ClockPolarity==1U )
		{ /*CK to 1 when idle*/
			SET_BIT(SPI4_CR1,CPOL);
		}
		else
		{ /*CK to 0 when idle*/
			CLR_BIT(SPI4_CR1,CPOL);
		}
		if(Copy_u8ClockPhase==1U )
		{ /*The second clock transition is the first data capture edge*/
			SET_BIT(SPI4_CR1, CPHA);
		}
		else
		{ /*The first clock transition is the first data capture edge*/
			CLR_BIT(SPI4_CR1,CPHA);
		}
		
/*********************************************************/		
		/* 	Cofigure The SPI Data Size	 */
		if(Copy_u8DataSize==DATA_SIZE_16  )
		{ /*16-bit data frame format is selected for transmission/receptione*/
			SET_BIT(SPI4_CR1, DFF);
		}
		else if (Copy_u8DataSize==DATA_SIZE_8 )
		{ /*8-bit data frame format is selected for transmission/reception*/
			CLR_BIT(SPI4_CR1,DFF);
		}
		else {/* MISRA*/}	
/*********************************************************/	
		/* 	Cofigure The SPI Data DIR	 */
		if(Copy_u8DataDir ==DATA_DIR_LSB )
		{ /*LSB transmitted first*/
			SET_BIT(SPI4_CR1, LSBFIRST);
		}
		else if (Copy_u8DataDir==DATA_DIR_MSB )
		{ /*MSB transmitted first*/
			CLR_BIT(SPI4_CR1,LSBFIRST);
		}
		else {/* MISRA*/}
/*********************************************************/	   
	  /* Cofigure The SPI NssMode */
		if((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode == NSS_MODE_SW))
		{ /* Software slave management enabled */
			SET_BIT(SPI4_CR1, SSM);
			SET_BIT(SPI4_CR1, SSI);
		}
		else if ((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode== NSS_MODE_HW) )
		{ /* Software slave management disabled*/
			CLR_BIT(SPI4_CR1,SSM);
			/* HW At Master SSI Not Used */
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_SW) )
		{  /* SW Slave*/
			SET_BIT(SPI4_CR1, SSM);
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_HW) )
		{  /* SW Slave*/
			CLR_BIT(SPI4_CR1, SSM);
		}
		
		else {/* MISRA*/}
/*********************************************************/
		/* Cofigure The SPI BI_DIR_MODE */
		if(Copy_u8BiDirMode == Bi_Dir_ON)
		{ /* 1-line bidirectional data mode selected */
			SET_BIT(SPI4_CR1,BIDIMODE);
		}
		else if (Copy_u8BiDirMode== Bi_Dir_OFF)
		{ /*  2-line unidirectional data mode selected*/
			CLR_BIT(SPI4_CR1,BIDIMODE);
		}
		else {/* MISRA*/}
/*********************************************************/		
		/* Cofigure The SPI BOUD_Rate We Have 7 Option */
		if((Copy_u8BaudRate <=7))
		{
			SPI4_CR1|=(Copy_u8BaudRate<<3U);
		}
		else {/* MISRA*/}
/*********************************************************/				
		/* Cofigure The SPI EN */
			SET_BIT(SPI4_CR1,SPE);
		
		break ;
		/*********************************************************************************************************************************************/
	case SPI5 :
/*********************************************************/		
			/* Cofigure The SPI Device Mode This bit should not be changed when communication is ongoing.*/
		if(Copy_u8DeviceMode == SPI_MASTER) 
		{
			/*	Master configuration 	*/
			SET_BIT(SPI5_CR1, MSTR);
		}
			
		else if (Copy_u8DeviceMode == SPI_SLAVE)
		{
			 /*	 Slave configuration	*/
			CLR_BIT(SPI5_CR1, MSTR);
		}
			else {/* MISRA*/}
		
/*********************************************************/		
		/* 	Cofigure The SPI Phase And Polarity	 */
		if(Copy_u8ClockPolarity==1U )
		{ /*CK to 1 when idle*/
			SET_BIT(SPI5_CR1,CPOL);
		}
		else
		{ /*CK to 0 when idle*/
			CLR_BIT(SPI5_CR1,CPOL);
		}
		if(Copy_u8ClockPhase==1U )
		{ /*The second clock transition is the first data capture edge*/
			SET_BIT(SPI5_CR1, CPHA);
		}
		else
		{ /*The first clock transition is the first data capture edge*/
			CLR_BIT(SPI5_CR1,CPHA);
		}
		
/*********************************************************/		
		/* 	Cofigure The SPI Data Size	 */
		if(Copy_u8DataSize==DATA_SIZE_16  )
		{ /*16-bit data frame format is selected for transmission/receptione*/
			SET_BIT(SPI5_CR1, DFF);
		}
		else if (Copy_u8DataSize==DATA_SIZE_8 )
		{ /*8-bit data frame format is selected for transmission/reception*/
			CLR_BIT(SPI5_CR1,DFF);
		}
		else {/* MISRA*/}	
/*********************************************************/	
		/* 	Cofigure The SPI Data DIR	 */
		if(Copy_u8DataDir ==DATA_DIR_LSB )
		{ /*LSB transmitted first*/
			SET_BIT(SPI5_CR1, LSBFIRST);
		}
		else if (Copy_u8DataDir==DATA_DIR_MSB )
		{ /*MSB transmitted first*/
			CLR_BIT(SPI5_CR1,LSBFIRST);
		}
		else {/* MISRA*/}
/*********************************************************/	   
	  /* Cofigure The SPI NssMode */
		if((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode == NSS_MODE_SW))
		{ /* Software slave management enabled */
			SET_BIT(SPI5_CR1, SSM);
			SET_BIT(SPI5_CR1, SSI);
		}
		else if ((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode== NSS_MODE_HW) )
		{ /* Software slave management disabled*/
			CLR_BIT(SPI5_CR1,SSM);
			/* HW At Master SSI Not Used */
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_SW) )
		{  /* SW Slave*/
			SET_BIT(SPI5_CR1, SSM);
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_HW) )
		{  /* SW Slave*/
			CLR_BIT(SPI5_CR1, SSM);
		}
		
		else {/* MISRA*/}
/*********************************************************/
		/* Cofigure The SPI BI_DIR_MODE */
		if(Copy_u8BiDirMode == Bi_Dir_ON)
		{ /* 1-line bidirectional data mode selected */
			SET_BIT(SPI5_CR1,BIDIMODE);
		}
		else if (Copy_u8BiDirMode== Bi_Dir_OFF)
		{ /*  2-line unidirectional data mode selected*/
			CLR_BIT(SPI5_CR1,BIDIMODE);
		}
		else {/* MISRA*/}
/*********************************************************/		
		/* Cofigure The SPI BOUD_Rate We Have 7 Option */
		if((Copy_u8BaudRate <=7))
		{
			SPI5_CR1|=(Copy_u8BaudRate<<3U);
		}
		else {/* MISRA*/}
/*********************************************************/				
		/* Cofigure The SPI EN */
			SET_BIT(SPI5_CR1,SPE);
		
		break ;
		/*********************************************************************************************************************************************/
	case SPI6 :
/*********************************************************/		
			/* Cofigure The SPI Device Mode This bit should not be changed when communication is ongoing.*/
		if(Copy_u8DeviceMode == SPI_MASTER) 
		{
			/*	Master configuration 	*/
			SET_BIT(SPI6_CR1, MSTR);
		}
			
		else if (Copy_u8DeviceMode == SPI_SLAVE)
		{
			 /*	 Slave configuration	*/
			CLR_BIT(SPI6_CR1, MSTR);
		}
			else {/* MISRA*/}
		
/*********************************************************/		
		/* 	Cofigure The SPI Phase And Polarity	 */
		if(Copy_u8ClockPolarity==1U )
		{ /*CK to 1 when idle*/
			SET_BIT(SPI6_CR1,CPOL);
		}
		else
		{ /*CK to 0 when idle*/
			CLR_BIT(SPI6_CR1,CPOL);
		}
		if(Copy_u8ClockPhase==1U )
		{ /*The second clock transition is the first data capture edge*/
			SET_BIT(SPI6_CR1, CPHA);
		}
		else
		{ /*The first clock transition is the first data capture edge*/
			CLR_BIT(SPI6_CR1,CPHA);
		}
		
/*********************************************************/		
		/* 	Cofigure The SPI Data Size	 */
		if(Copy_u8DataSize==DATA_SIZE_16  )
		{ /*16-bit data frame format is selected for transmission/receptione*/
			SET_BIT(SPI6_CR1, DFF);
		}
		else if (Copy_u8DataSize==DATA_SIZE_8 )
		{ /*8-bit data frame format is selected for transmission/reception*/
			CLR_BIT(SPI6_CR1,DFF);
		}
		else {/* MISRA*/}	
/*********************************************************/	
		/* 	Cofigure The SPI Data DIR	 */
		if(Copy_u8DataDir ==DATA_DIR_LSB )
		{ /*LSB transmitted first*/
			SET_BIT(SPI6_CR1, LSBFIRST);
		}
		else if (Copy_u8DataDir==DATA_DIR_MSB )
		{ /*MSB transmitted first*/
			CLR_BIT(SPI6_CR1,LSBFIRST);
		}
		else {/* MISRA*/}
/*********************************************************/	   
	  /* Cofigure The SPI NssMode */
		if((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode == NSS_MODE_SW))
		{ /* Software slave management enabled */
			SET_BIT(SPI6_CR1, SSM);
			SET_BIT(SPI6_CR1, SSI);
		}
		else if ((Copy_u8DeviceMode == SPI_MASTER) && (Copy_u8NssMode== NSS_MODE_HW) )
		{ /* Software slave management disabled*/
			CLR_BIT(SPI6_CR1,SSM);
			/* HW At Master SSI Not Used */
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_SW) )
		{  /* SW Slave*/
			SET_BIT(SPI6_CR1, SSM);
		}
		else if ((Copy_u8DeviceMode == SPI_SLAVE) && (Copy_u8NssMode== NSS_MODE_HW) )
		{  /* SW Slave*/
			CLR_BIT(SPI6_CR1, SSM);
		}
		
		else {/* MISRA*/}
/*********************************************************/
		/* Cofigure The SPI BI_DIR_MODE */
		if(Copy_u8BiDirMode == Bi_Dir_ON)
		{ /* 1-line bidirectional data mode selected */
			SET_BIT(SPI6_CR1,BIDIMODE);
		}
		else if (Copy_u8BiDirMode== Bi_Dir_OFF)
		{ /*  2-line unidirectional data mode selected*/
			CLR_BIT(SPI6_CR1,BIDIMODE);
		}
		else {/* MISRA*/}
/*********************************************************/		
		/* Cofigure The SPI BOUD_Rate We Have 7 Option */
		if((Copy_u8BaudRate <=7))
		{
			SPI6_CR1|=(Copy_u8BaudRate<<3U);
		}
		else {/* MISRA*/}
/*********************************************************/				
		/* Cofigure The SPI EN */
			SET_BIT(SPI6_CR1,SPE);
		
		break ;
		/*********************************************************************************************************************************************/
		default :
			/* Give Error Name*/
				break ;
		
	}
	
	
}

/*********************************************************** END_ FUNCTION   *********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function Take  :

			 The Number OF SPI(SPIX) & X {0,1,...,6} & Disable It				
*/
void MSPI_voidDisable(u8 Copy_u8SPINumber) 
{
	switch(Copy_u8SPINumber)
	{
		case SPI1 :
			/* Cofigure The SPI1 Disable */
		CLR_BIT(SPI1_CR1,SPE);
		break; 
		/************************************************************/
			case SPI2 :
			/* Cofigure The SPI2 Disable */
		CLR_BIT(SPI2_CR1,SPE);
		break; 
   /************************************************************/
			case SPI3 :
			/* Cofigure The SPI3 Disable */
		CLR_BIT(SPI3_CR1,SPE);
		break; 
	 /************************************************************/
			case SPI4 :
			/* Cofigure The SPI4 Disable */
		CLR_BIT(SPI4_CR1,SPE);
		break; 
		/************************************************************/
			case SPI5 :
			/* Cofigure The SPI5 Disable */
		CLR_BIT(SPI5_CR1,SPE);
		break; 
		/************************************************************/
			case SPI6 :
			/* Cofigure The SPI6 Disable */
		CLR_BIT(SPI6_CR1,SPE);
		break; 
		/**********************************************************/
			default :
				/* Give Error Name*/
				break ;
}
}

/*********************************************************** END_ FUNCTION   *********************************************************/

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function Take  :
			
		Function Take Number Of SPI & 8_Bit Data To Write Them At DR_REG*/
u8 MSPI_u8Write8itData(u8 Copy_u8SPINumber , u8 Copy_u8DataOut)
{
	switch(Copy_u8SPINumber)
	{
		case SPI1 :
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI1_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI1_SR & (1U<<BSY))==HIGH);
	/* Fill OutPot Buffer With Data */
	SPI1_DR = Copy_u8DataOut;
	/* Waiting For SPI to Finsh EveryThing*/
	while(((SPI1_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI1_SR & (1U<<BSY))==HIGH);
	/* Read Data Register*/
	return(SPI1_DR);
	break ;
/**************************************************************************************************************/
	
		case SPI2 :
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI2_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI2_SR & (1U<<BSY))==HIGH);
	/* Fill OutPot Buffer With Data */
	SPI2_DR = Copy_u8DataOut;
	/* Waiting For SPI to Finsh EveryThing*/
	while(((SPI2_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI2_SR & (1U<<BSY))==HIGH);
	/* Read Data Register*/
	return(SPI2_DR);
	break ;
/**************************************************************************************************************/
	
		case SPI3 :
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI3_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI3_SR & (1U<<BSY))==HIGH);
	/* Fill OutPot Buffer With Data */
	SPI3_DR = Copy_u8DataOut;
	/* Waiting For SPI to Finsh EveryThing*/
	while(((SPI3_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI3_SR & (1U<<BSY))==HIGH);
	/* Read Data Register*/
	return(SPI3_DR);
	break ;
/**************************************************************************************************************/
	
		case SPI4 :
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI4_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI4_SR & (1U<<BSY))==HIGH);
	/* Fill OutPot Buffer With Data */
	SPI4_DR = Copy_u8DataOut;
	/* Waiting For SPI to Finsh EveryThing*/
	while(((SPI4_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI4_SR & (1U<<BSY))==HIGH);
	/* Read Data Register*/
	return(SPI4_DR);
	break ;
/**************************************************************************************************************/
	
		case SPI5 :
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI5_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI5_SR & (1U<<BSY))==HIGH);
	/* Fill OutPot Buffer With Data */
	SPI5_DR = Copy_u8DataOut;
	/* Waiting For SPI to Finsh EveryThing*/
	while(((SPI5_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI5_SR & (1U<<BSY))==HIGH);
	/* Read Data Register*/
	return(SPI5_DR);
	break ;
/**************************************************************************************************************/
	
		case SPI6 :
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI6_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI6_SR & (1U<<BSY))==HIGH);
	/* Fill OutPot Buffer With Data */
	SPI6_DR = Copy_u8DataOut;
	/* Waiting For SPI to Finsh EveryThing*/
	while(((SPI6_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI6_SR & (1U<<BSY))==HIGH);
	/* Read Data Register*/
	return(SPI6_DR);
	break ;
		/********************************/
			default :
				/* Give Error Name*/
				break ;
	}
}

/*********************************************************** END_ FUNCTION   *********************************************************/

 

/********************************************************** Start_FUNCTION  **********************************************************/
/*		Function Take  :

		Function Take Number Of SPI & Write Array Of Bit Data  Loop By Data Count Index 
*/


void MSPI_voidWriteMulti8BitData(u8 Copy_u8SPINumber , u8* Copy_u8DataOut , u8* Copy_u8DataIn , u8 Copy_u8Count   )
{
	u8 Local_u8Index ;
	switch(Copy_u8SPINumber)
	{
		case SPI1 :
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI1_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI1_SR & (1U<<BSY))==HIGH);
		
		for(Local_u8Index =0 ; Local_u8Index < Copy_u8Count ; Local_u8Index ++)
		{
			/* Fill OutPot Buffer With Data */
			SPI1_DR=Copy_u8DataOut[Local_u8Index];
			/* Waiting For SPI to Finsh EveryThing*/
	  while(((SPI1_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI1_SR & (1U<<BSY))==HIGH);
	   /* Read Data Register*/
			Copy_u8DataIn[Local_u8Index]=SPI1_DR;
 		}
		break ;
/*********************************************************************************************/
case SPI2:
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI2_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI2_SR & (1U<<BSY))==HIGH);
		
		for(Local_u8Index =0 ; Local_u8Index < Copy_u8Count ; Local_u8Index ++)
		{
			/* Fill OutPot Buffer With Data */
			SPI2_DR=Copy_u8DataOut[Local_u8Index];
			/* Waiting For SPI to Finsh EveryThing*/
	  while(((SPI2_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI2_SR & (1U<<BSY))==HIGH);
	   /* Read Data Register*/
			Copy_u8DataIn[Local_u8Index]=SPI2_DR;
 		}
		break ;
/*********************************************************************************************/
case SPI3:
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI3_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI3_SR & (1U<<BSY))==HIGH);
		
		for(Local_u8Index =0 ; Local_u8Index < Copy_u8Count ; Local_u8Index ++)
		{
			/* Fill OutPot Buffer With Data */
			SPI3_DR=Copy_u8DataOut[Local_u8Index];
			/* Waiting For SPI to Finsh EveryThing*/
	  while(((SPI3_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI3_SR & (1U<<BSY))==HIGH);
	   /* Read Data Register*/
			Copy_u8DataIn[Local_u8Index]=SPI3_DR;
 		}
		break ;
/*********************************************************************************************/
case SPI4:
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI4_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI4_SR & (1U<<BSY))==HIGH);
		
		for(Local_u8Index =0 ; Local_u8Index < Copy_u8Count ; Local_u8Index ++)
		{
			/* Fill OutPot Buffer With Data */
			SPI4_DR=Copy_u8DataOut[Local_u8Index];
			/* Waiting For SPI to Finsh EveryThing*/
	  while(((SPI4_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI4_SR & (1U<<BSY))==HIGH);
	   /* Read Data Register*/
			Copy_u8DataIn[Local_u8Index]=SPI4_DR;
 		}
		break ;
/*********************************************************************************************/
case SPI5:
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI5_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI5_SR & (1U<<BSY))==HIGH);
		
		for(Local_u8Index =0 ; Local_u8Index < Copy_u8Count ; Local_u8Index ++)
		{
			/* Fill OutPot Buffer With Data */
			SPI5_DR=Copy_u8DataOut[Local_u8Index];
			/* Waiting For SPI to Finsh EveryThing*/
	  while(((SPI5_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI5_SR & (1U<<BSY))==HIGH);
	   /* Read Data Register*/
			Copy_u8DataIn[Local_u8Index]=SPI5_DR;
 		}
		break ;
/*********************************************************************************************/
case SPI6:
	/* Wating For Previous Tranmission To Compelet by flag(RXNE,BUSY: be Low At End,TXE) */
		 /* Out Of While When Condition = 0 ----> Busy Flag= LOW OR 2 FLAG == HIGH  */
		while(((SPI6_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI6_SR & (1U<<BSY))==HIGH);
		
		for(Local_u8Index =0 ; Local_u8Index < Copy_u8Count ; Local_u8Index ++)
		{
			/* Fill OutPot Buffer With Data */
			SPI6_DR=Copy_u8DataOut[Local_u8Index];
			/* Waiting For SPI to Finsh EveryThing*/
	  while(((SPI6_SR & ((1U<<RXNE)|(1U<<TXE)))==LOW)||(SPI6_SR & (1U<<BSY))==HIGH);
	   /* Read Data Register*/
			Copy_u8DataIn[Local_u8Index]=SPI6_DR;
 		}
		break ;
/*********************************************************************************************/
default :
				/* Give Error Name*/
				break ;
	
	}
}


/*********************************************************** END_ FUNCTION   *********************************************************/

 




