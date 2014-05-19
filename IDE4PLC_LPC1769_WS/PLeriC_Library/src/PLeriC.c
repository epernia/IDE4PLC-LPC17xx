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
    ERIC PERNIA

*/

#include "PLeriC.h"

// Error_Handler: Manejo de errores cometidos por mal uso de las instrucciones.
void PLC_Error_Handler(uint8_t ErrCode)
{
	switch(ErrCode)
	{
		case 1:
			vPrintString( "Error 1: Pila de parentesis desbordada.\n" );
		break;
		case 2:
			vPrintString( "Error 2: Pila de parentesis vacia.\n" );
		break;
		default:
		break;
	}
}

/*-----------------------------------------------------------*/

// Algoritmo para calcular el dia de la semana
int DT_Weekday(int Year, int Month, int Day)
{

	int a, y, m, NumZeller, NumDT;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + 12 * a - 2;

	// Para el calendario Juliano:
	// NumZeller = (5 + Day + y + y/4 + (31*m)/12) % 7

	// Para el calendario Gregoriano:
	NumZeller = (Day + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;

	// El resultado en NumZeller es:
	//	 0 = Domingo
	//	 1 = Lunes
	//	 2 = Martes
	//	 3 = Miercoles
	//	 4 = Jueves
	//	 5 = Viernes
	//	 6 = Sabado

	NumDT = NumZeller + 1;

	return NumDT;
}
/*-----------------------------------------------------------*/

// Muestra por consola el dia de la semana.
void Day_Display(int NumDT)
{
	switch(NumDT)
	{
		case 1:
			vPrintString( "Sunday. Domingo.\n" );
		break;
		case 2:
			vPrintString( "Monday. Lunes.\n" );
		break;
		case 3:
			vPrintString( "Tuesday. Martes.\n" );
		break;
		case 4:
			vPrintString( "Wednesday. Miercoles.\n" );
		break;
		case 5:
			vPrintString( "Thursday. Jueves.\n" );
		break;
		case 6:
			vPrintString( "Friday. Viernes.\n" );
		break;
		case 7:
			vPrintString( "Saturday. Sabado.\n" );
		break;
		default:
			vPrintString( "No es una fecha valida.\n" );
	}
}
