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
 * PLC_Hardware.h
 *
 *  Created on: 04/02/2012
 *      Author: Eric Pernia
 */

#ifndef PLC_HARDWARE_H_
	#define PLC_HARDWARE_H_

	/* CMSIS Core includes. */
	//#ifdef __USE_CMSIS
		#include "LPC17xx.h"
	//#endif

	/* CMSIS Driver includes. */
	#include "lpc17xx_gpio.h"
	#include "lpc17xx_pinsel.h"

	/* Bit masks for 8 bit variables like unsigned char.*/
	#define bit_0 0x01
	#define bit_1 0x02
	#define bit_2 0x04
	#define bit_3 0x08
	#define bit_4 0x10
	#define bit_5 0x20
	#define bit_6 0x40
	#define bit_7 0x80

#define LPCXpresso_Input 0
#define LPCXpresso_Output 1


/* CONFIGURACION DE HARWARE DE PLACA LEDS Y PULSADORES */
/*
#define PLC_IN_PORT 0

#define PLC_IN_0 (1<<21)
#define PLC_IN_1 (1<<3)
#define PLC_IN_2 (1<<2)
#define PLC_IN_3 (1<<6)
#define PLC_IN_4 (1<<27)
#define PLC_IN_5 (1<<28)
#define PLC_IN_6 (1<<20)
#define PLC_IN_7 (1<<19)


#define PLC_OUT_PORT 2

#define PLC_OUT_0 (1<<8)
#define PLC_OUT_1 (1<<7)
#define PLC_OUT_2 (1<<6)
#define PLC_OUT_3 (1<<10)
#define PLC_OUT_4 (1<<11)
#define PLC_OUT_5 (1<<12)
#define PLC_OUT_6 (1<<9)
#define PLC_OUT_7 (1<<13)
*/



/* CONFIGURACION DE HARWARE DE PLACA PLeriC 1.1 */

#define PLC_IN_PORT 2

#define PLC_IN_0 (1UL << 5)
#define PLC_IN_1 (1UL << 12)
#define PLC_IN_2 (1UL << 10)
#define PLC_IN_3 (1UL << 7)
#define PLC_IN_4 (1UL << 6)
#define PLC_IN_5 (1UL << 8)
#define PLC_IN_6 (1UL << 11)
#define PLC_IN_7 (1UL << 4)


#define PLC_OUT_PORT 0

#define PLC_OUT_0 (1UL << 20)	// Antes P0[28] - Solo anda como salida en modo Open Drain
#define PLC_OUT_1 (1UL << 21)
#define PLC_OUT_2 (1UL << 24)
#define PLC_OUT_3 (1UL << 25)
#define PLC_OUT_4 (1UL << 26)
#define PLC_OUT_5 (1UL << 2)
#define PLC_OUT_6 (1UL << 3)
#define PLC_OUT_7 (1UL << 19)	// Antes P0[27] - Solo anda como salida en modo Open Drain

#define PLC_RUN (1UL << 10)
#define PLC_ERR (1UL << 11)



/* CONFIGURACION DE HARWARE DE PLACA LPCXpresso 1769 */

#define LPCXpresso_Led_Port 0

#define LPCXpresso_Led (1<<22)



	/* I/O Structures */

	typedef struct
	{
		boolean x0:1;
		boolean x1:1;
		boolean x2:1;
		boolean x3:1;
		boolean x4:1;
		boolean x5:1;
		boolean x6:1;
		boolean x7:1;
	}PLC_1ByteAsBits;

	typedef struct
	{
		uint8_t b0;
	}PLC_1ByteAsByte;



	/* Global variables */



	/*Functions Prototypes*/

	void IO_init (void);		// Inicializa las entradas y salidas digitales del LPCxpresso

	uint8_t Read_IN(void);		// Lee entradas digitales del LPCxpresso
	void Write_OUT(uint8_t);	// Escribe las salidas digitales del LPCxpresso

#endif /* PLC_HARDWARE_H_ */
