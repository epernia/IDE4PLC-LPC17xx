/*------------------------------------------------------------------------

Copyright © 2012-2014 Eric Nicolás Pernia.

This file is part of IDE4PLC.

IDE4PLC is free software: you can redistribute it and/or modify it 
under the terms of the GNU Lesser General Public License as published 
by the Free Software Foundation, either version 3 of the License, or 
(at your option) any later version.

IDE4PLC is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranty of 
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with IDE4PLC. If not, see <http://www.gnu.org/licenses/>.

------------------------------------------------------------------------*/
/*
 * PLC_Registers.c
 *
 *  Created on: 04/02/2012
 *      Author: Eric Pernia
 */

#include "PLeriC.h"

/*-----------------------------------------------------------*/
/*
uint8_t Convert_PLC_Digital_PORT_8_2_Uint8_t(PLC_Digital_PORT_8 PORTx)
{
	uint8_t status = 0;

	if (PORTx.b0 != 0)
		{status |= bit_0;}
	if (PORTx.b1 != 0)
		{status |= bit_1;}
	if (PORTx.b2 != 0)
		{status |= bit_2;}
	if (PORTx.b3 != 0)
		{status |= bit_3;}
	if (PORTx.b4 != 0)
		{status |= bit_4;}
	if (PORTx.b5 != 0)
		{status |= bit_5;}
	if (PORTx.b6 != 0)
		{status |= bit_6;}
	if (PORTx.b7 != 0)
		{status |= bit_7;}

    return status;
}*/

/*-----------------------------------------------------------*/
/*
PLC_Digital_PORT_8 Convert_Uint8_t_2_PLC_Digital_PORT_8(uint8_t status)
{
	PLC_Digital_PORT_8 PORTx;

	PORTx.x0 = 0;
	PORTx.x1 = 0;
	PORTx.x2 = 0;
	PORTx.x3 = 0;
	PORTx.x4 = 0;
	PORTx.x5 = 0;
	PORTx.x6 = 0;
	PORTx.x7 = 0;

	if ((status & bit_0) != 0)
		{PORTx.x0 = 1;}
	if ((status & bit_1) != 0)
		{PORTx.x1 = 1;}
	if ((status & bit_2) != 0)
		{PORTx.x2 = 1;}
	if ((status & bit_3) != 0)
		{PORTx.x3 = 1;}
	if ((status & bit_4) != 0)
		{PORTx.x4 = 1;}
	if ((status & bit_5) != 0)
		{PORTx.x5 = 1;}
	if ((status & bit_6) != 0)
		{PORTx.x6 = 1;}
	if ((status & bit_7) != 0)
		{PORTx.x7 = 1;}

    return PORTx;
}*/

/*-----------------------------------------------------------*/

// A.X.x0;	// Accedo a un bit del byte A
// A.B.b0;	// Accedo al byte completo A

/*-----------------------------------------------------------*/

uint8_t Convert_PLC_1ByteRegister_2_Uint8_t(PLC_1ByteRegister PORT)
{
	uint8_t status = 0;

	if (PORT.X.x0)
		{status |= bit_0;}
	if (PORT.X.x1 != 0)
		{status |= bit_1;}
	if (PORT.X.x2)
		{status |= bit_2;}
	if (PORT.X.x3)
		{status |= bit_3;}
	if (PORT.X.x4)
		{status |= bit_4;}
	if (PORT.X.x5)
		{status |= bit_5;}
	if (PORT.X.x6)
		{status |= bit_6;}
	if (PORT.X.x7)
		{status |= bit_7;}

    return status;
}

/*-----------------------------------------------------------*/

PLC_1ByteRegister Convert_Uint8_t_2_PLC_1ByteRegister(uint8_t status)
{
	PLC_1ByteRegister PORT;

	PORT.X.x0 = 0;
	PORT.X.x1 = 0;
	PORT.X.x2 = 0;
	PORT.X.x3 = 0;
	PORT.X.x4 = 0;
	PORT.X.x5 = 0;
	PORT.X.x6 = 0;
	PORT.X.x7 = 0;

	if ((status & bit_0))
		{PORT.X.x0 = 1;}
	if ((status & bit_1))
		{PORT.X.x1 = 1;}
	if ((status & bit_2))
		{PORT.X.x2 = 1;}
	if ((status & bit_3))
		{PORT.X.x3 = 1;}
	if ((status & bit_4))
		{PORT.X.x4 = 1;}
	if ((status & bit_5))
		{PORT.X.x5 = 1;}
	if ((status & bit_6))
		{PORT.X.x6 = 1;}
	if ((status & bit_7))
		{PORT.X.x7 = 1;}

    return PORT;
}

/*-----------------------------------------------------------*/


/*
void Reset_PLC_CPU_Reg_StatusWord(volatile PLC_CPU_Reg_StatusWord *pxStatusWord)
{
	pxStatusWord->ER = 0;
	pxStatusWord->RLO = 0;
	pxStatusWord->STA = 0;
	pxStatusWord->OR = 0;
	pxStatusWord->OS = 0;
	pxStatusWord->OV = 0;
	pxStatusWord->A0 = 0;
	pxStatusWord->A1 = 0;
	pxStatusWord->RB = 0;
}
*/
