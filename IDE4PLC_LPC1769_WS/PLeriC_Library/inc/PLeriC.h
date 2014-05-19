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
 * PLeriC.h
 *
 *  Created on: 04/02/2012
 *      Author: Eric Pernia
 */

#ifndef PLERIC_H_
	#define PLERIC_H_

	/* Sistema Operativo de Tiempo Real - FreeRTOS.org */
	#include "PLC_OperatingSystem.h"

	/* Bibliotecas de funciones estandar. */
	#include "PLC_Libraries.h"

	/* Hardware del PLC - Includes del microcontroaldor especifico (LPC17xx). */
	#include "PLC_Hardware.h"

	/* Eric includes. */

	#include "PLC_ElementaryDataTypes.h"
	#include "PLC_CompilerDerivedDataTypes.h"
	#include "PLC_UserDerivedDataTypes.h"

	#include "PLC_1KByteStructures.h"
	#include "PLC_Registers.h"

	#include "PLC_IL_Instructions.h"

	#include "PLC_StdFunctions.h"
	#include "PLC_StdFunctionBlocks.h"

	#include "PLC_UserFunctions.h"
	#include "PLC_UserFunctionBlocks.h"

	#include "PLC_UserPrograms.h"

	// Funciones de tareas de freeRTOS
	// #include "PLC_SystemTasks.h" // ESTE NO SE POR QUE CAGA TODO
	#include "PLC_UserTasks.h"


	/* Global variables */


	/*Functions Prototypes*/

	// Manejo de errores
	// void PLC_Error_Handler(uint8_t);

	// DT Weekday
	int DT_Weekday(int, int, int);
	void Day_Display(int);


#endif /* PLERIC_H_ */
