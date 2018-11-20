#ifndef Systick_H_
#define Systick_H_

/*============================================================*/
/*==========               includes                 ==========*/
/*============================================================*/
#include "STD_Types.h"


/*============================================================*/
/*==========              ProtoTypes                ==========*/
/*============================================================*/


void SysTick_Init(void);
void SysTick_Delay(uint16 time);

/*============================================================*/
/*==========              Definitions               ==========*/
/*============================================================*/

#define LOAD_REG_VALUE 80000

//STCTRL PINs
#define Enable   0
#define Inten     1
#define CLK_SRC 2
#define Count     16



#endif  //Systick_H_
