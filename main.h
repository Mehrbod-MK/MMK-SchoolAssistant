/********************************
    This program is created by   
       Mehrbod Molla Kazemi
     Copyright(C) MelaTronX®
     All rights reserved. 2022
*********************************/

// File:        main.h
// Author:      Mehrbod Molla Kazemi
// Date:        08 Mordad 1401 (30 July 2022)

// One-time compilation notation.
#ifndef _MAIN_H_
#define _MAIN_H_

// Includes.
#include <stdint.h>
#include <delay.h>
#include <math.h>

// Function prototypes.
//---------------------------------//

// RESET INTERNAL CHIP WATCHDOG.
void    C_ResetWatchdog(void);
// Approximate internal chip delay.
void    C_DelayMs(uint32_t);
void    C_DelayUs(uint32_t);

//---------------------------------//

#endif


