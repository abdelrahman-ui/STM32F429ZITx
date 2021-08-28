/****************************************************************
 ************  -STK_private.h                  ******************
 ***********					   		       ******************
 ***********   -Created: 2/9/2021			   ******************
 ***********   -Author: Abdelrahman_Magdy      ******************
 ***********   -Version : _1_				   ******************
 ***********								   ******************
 ****************************************************************/

/****************************************************************
***********  guard of file will call on time in .c  *************
******************************************************************/



#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H


#include "STD_TYPE.h"

	typedef struct
	{
		  volatile u32  CTRL ;
			volatile u32  LOAD ;
			volatile u32  VAL  ;
			volatile u32  CALIB;
	}MSTK_Type;

	#define STK_BASSE_ADDRESS 			0xE000E010

  #define MSTK  ((MSTK_Type*)STK_BASSE_ADDRESS)



	#define MSTK_CLK_AHB    		 	  0U
	#define MSTK_CLK_AHB_8     			1U

  #define MSTK_SINGLE_INTERVAL    0U
  #define MSTK_PERIOD_INTERVAL    1U

#endif //STK_PRIVATE.H

