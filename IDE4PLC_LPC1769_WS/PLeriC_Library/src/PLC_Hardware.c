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
 * PLC_Hardware.c
 *
 *  Created on: 04/02/2012
 *      Author: Eric Pernia
 */

#include "PLeriC.h"



//-----------------------------------------------------------

/* Init I/O Port of LPCXpresso 1769 */
	// NOTE: GPIOInit(); must have been called
	// before using any functions in this file.
void IO_init (void)
{
	// Configuracion del comportamiento electrico de los Pines con drivers CMSIS
	// PINES DE ENTRADA SIN PULL-UP Y SIN PULL-DOWN
	/*
	PINSEL_CFG_Type PinCfg ;	// Variable estructura de tipo PINSEL_CFG_Type

	PinCfg.Portnum = PINSEL_PORT_0;				// PINSEL_PORT_x (x:0-3)
	PinCfg.Pinnum = PINSEL_PIN_15;				// PINSEL_PIN_x (x:0-31)
	PinCfg.Funcnum = PINSEL_FUNC_0;				// PINSEL FUNC x (x:0-3)
	PinCfg.Pinmode = PINSEL_PINMODE_TRISTATE;	// Pullup, Pulldown o TriState
	PinCfg.OpenDrain = PINSEL_PINMODE_NORMAL;	// Normal u Open Drain

	PINSEL_ConfigPin(&PinCfg);

	PinCfg.Pinnum = PINSEL_PIN_16 ;
	PINSEL_ConfigPin(&PinCfg);

	PinCfg.Pinnum = PINSEL_PIN_17 ;
	PINSEL_ConfigPin(&PinCfg);

	PinCfg.Portnum = PINSEL_PORT_2;
	PinCfg.Pinnum = PINSEL_PIN_3 ;
	PINSEL_ConfigPin(&PinCfg);

	PinCfg.Pinnum = PINSEL_PIN_4 ;
	PINSEL_ConfigPin(&PinCfg);

	 */

	/* // Direccion con drivers CMSIS. Son de la forma P2.x. P=2, .=(1<<x),1 = Salida */

	// Seteo los GPIOs como Entradas.
	//        	  2 = P2							      													 0 = Ent
	GPIO_SetDir( PLC_IN_PORT, (PLC_IN_0|PLC_IN_1|PLC_IN_2|PLC_IN_3|PLC_IN_4|PLC_IN_5|PLC_IN_6|PLC_IN_7), LPCXpresso_Input );

	// Seteo los GPIOs como Salidas.
	//          0 = P0																								   1 = Sal

	GPIO_SetDir( PLC_OUT_PORT, (PLC_OUT_0|PLC_OUT_1|PLC_OUT_2|PLC_OUT_3|PLC_OUT_4|PLC_OUT_5|PLC_OUT_6|PLC_OUT_7|PLC_RUN|PLC_ERR), LPCXpresso_Output );

	// Apago las 8 salidas inicialmente
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_0);		// Apago Out 0
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_1);		// Apago Out 1
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_2);		// Apago Out 2
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_3);		// Apago Out 3
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_4);		// Apago Out 4
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_5);		// Apago Out 5
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_6);		// Apago Out 6
	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_7);		// Apago Out 7
	GPIO_ClearValue(PLC_OUT_PORT,PLC_ERR);			// Apago ERR
	GPIO_ClearValue(PLC_OUT_PORT,PLC_RUN);			// Apago RUN


	// Enciendo las 10 salidas para probar
	/*
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_0);			// Enciendo Out 0
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_1);			// Enciendo Out 1
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_2);			// Enciendo Out 2
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_3);			// Enciendo Out 3
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_4);			// Enciendo Out 4
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_5);			// Enciendo Out 5
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_6);			// Enciendo Out 6
	GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_7);			// Enciendo Out 7

	GPIO_SetValue(PLC_OUT_PORT,PLC_ERR);		// Enciendo ERR
	GPIO_SetValue(PLC_OUT_PORT,PLC_RUN);		// Enciendo RUN
	*/


	//Configuro el Led del LPCXpresso 1769 como salida
	GPIO_SetDir( LPCXpresso_Led_Port, LPCXpresso_Led, LPCXpresso_Output );
	GPIO_ClearValue( LPCXpresso_Led_Port, LPCXpresso_Led );	// Apago el Led del LPCXpresso 1769
	//GPIO_SetValue( LPCXpresso_Led_Port, LPCXpresso_Led );	// Enciendo el Led del LPCXpresso 1769


	// PIO0_28 as output - Sin CMSIS
	//LPC_GPIO0->FIODIR |= (1<<28);

}
//-----------------------------------------------------------

uint8_t Read_IN(void)
{
    uint8_t status = 0;
    uint32_t port = 0;

    port = GPIO_ReadValue(PLC_IN_PORT);		// Leer Port PLC_IN_PORT del LPCXpresso

    if ( !(port & PLC_IN_0) )
    	{status |= bit_0;}
    if ( !(port & PLC_IN_1) )
    	{status |= bit_1;}
    if ( !(port & PLC_IN_2) )
    	{status |= bit_2;}
    if ( !(port & PLC_IN_3) )
    	{status |= bit_3;}
    if ( !(port & PLC_IN_4) )
    	{status |= bit_4;}
    if ( !(port & PLC_IN_5) )
    	{status |= bit_5;}
    if ( !(port & PLC_IN_6) )
    	{status |= bit_6;}
    if ( !(port & PLC_IN_7) )
		{status |= bit_7;}



    return status;
}
//-----------------------------------------------------------

void Write_OUT(uint8_t salidas)
{

	if ( (salidas & bit_0) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_0);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_0);
    }

    if ( (salidas & bit_1) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_1);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_1);
    }

    if ( (salidas & bit_2) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_2);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_2);
    }

    if ( (salidas & bit_3) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_3);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_3);
    }

    if ( (salidas & bit_4) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_4);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_4);
    }

    if ( (salidas & bit_5) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_5);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_5);
    }

    if ( (salidas & bit_6) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_6);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_6);
    }

    if ( (salidas & bit_7) ) {
		GPIO_SetValue(PLC_OUT_PORT,PLC_OUT_7);
    }
    else {
    	GPIO_ClearValue(PLC_OUT_PORT,PLC_OUT_7);
    }

}
