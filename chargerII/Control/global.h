
//*****************************************************************************
//
// File Name	: 'global.h'
// Title		: AVR project global include 
// Author		: Jason van Aardt
// Created		: 
// Revised		: 
// Version		: 1.1
// Target MCU	: Atmel AVR series
// Editor Tabs	: 2
//
//	Description : This include file is designed to contain items useful to all
//					code files and projects.
//
//*****************************************************************************

#ifndef GLOBAL_H
#define GLOBAL_H

// global AVRLIB defines
#include "avrlibdefs.h"
// global AVRLIB types definitions
#include "avrlibtypes.h"

// project/system dependent defines

// CPU clock speed
//#define F_CPU          7100000               		// 8MHz processor
#define F_CPU        8000000               		// 4MHz processor
//#define F_CPU        14745000               		// 14.745MHz processor
//#define F_CPU        8000000               		// 8MHz processor
//#define F_CPU          7100000               		// 8MHz processor
//#define F_CPU        7372800               		// 7.37MHz processor
//#define F_CPU        4000000               		// 4MHz processor
//#define F_CPU        3686400               		// 3.69MHz processor
#define CYCLES_PER_US ((F_CPU+500000)/1000000) 	// cpu cycles per microsecond


// Bit handling macros
//************************************************************************************
#define SETBIT(x,y) (x |= (y))  // Set bit y in byte x
#define CLRBIT(x,y) (x &= (~(y)))// Clear bit y in byte x
#define CHKBIT(x,y) (x & (y))   // Check bit y in byte x



#endif
