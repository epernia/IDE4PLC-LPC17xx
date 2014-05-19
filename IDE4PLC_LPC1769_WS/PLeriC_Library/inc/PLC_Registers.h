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
 * PLC_Registers.h
 *
 *  Created on: 04/02/2012
 *      Author: Eric Pernia
 */

#ifndef PLC_REGISTERS_H_
	#define PLC_REGISTERS_H_

	// Registros del PLC de 1KByte.
	// Esta estructura se utiliza para las variables representadas Directamente.
	typedef union
	{
		PLC_1KByteAsBits	X;
		PLC_1KByteAsBytes	B;
		PLC_1KByteAsWords	W;
		PLC_1KByteAsDoubles	D;
		PLC_1KByteAsLongs	L;
	}PLC_1KByteRegister;

	// Registros del PLC de 1 Byte.
	// Esta estructura se utiliza para las variables representadas Directamente.
	typedef union
	{
		PLC_1ByteAsBits	X;
		PLC_1ByteAsByte	B;
	}PLC_1ByteRegister;



	// Enum de tipos de datos elementales
	typedef enum{ BOOL, BYTE, WORD, DWORD, LWORD, SINT, INT, DINT, LINT,
				  USINT, UINT, UDINT, ULINT, REAL, LREAL, TIME, D, TOD, DT,
				  STRING, WSTRING, BCD16, BCD32, OTHER
				} PLC_EnumDataTypes;

	typedef union
	{
		PLC_BOOL			BOOL;		//  0
		PLC_BYTE			BYTE;		//  1
		PLC_WORD			WORD;		//  2
		PLC_DWORD			DWORD;		//  3
		PLC_LWORD			LWORD;		//  4

		PLC_SINT			SINT;		//  5
		PLC_INT				INT;		//  6
		PLC_DINT			DINT;		//  7
		PLC_LINT			LINT;		//  8

		PLC_USINT			USINT;		//  9
		PLC_UINT			UINT;		// 10
		PLC_UDINT			UDINT;		// 11
		PLC_ULINT			ULINT;		// 12

		PLC_REAL 			REAL;		// 13
		PLC_LREAL 			LREAL;		// 14

		PLC_TIME 			TIME;		// 15
		PLC_DATE 			D;			// 16
		PLC_TIME_OF_DAY		TOD;		// 17
		PLC_DATE_AND_TIME	DT;			// 18

	  	PLC_STRING			STRING;		// 19
		PLC_WSTRING 		WSTRING;	// 20

		PLC_BCD16			BCD16;		// 21
		PLC_BCD32 			BCD32;		// 22

		PLC_1KByteAsLongs	KBYTE;

	}PLC_SyRegDataTypesAccess;


	typedef struct
	{
		PLC_EnumDataTypes			TYPE;
		PLC_SyRegDataTypesAccess	VALUE;
	}PLC_SymbolicRegister;


	/* Data type for PLC IN or OUT Ports of 8 bits*/
	//typedef PLC_1ByteAsBits PLC_Digital_PORT_8;

	/* Data types for PLC CPU registers */
/*
		// Data type for PLC CPU register StatusWord of 16 bits
		typedef struct
		{
			boolean ER:1;	 // bit 0. /ER  Primera consulta a nivel bajo (/ER o /FC)
			boolean RLO:1;	 // bit 1. RLO 	Resultado lógico
			boolean STA:1;	 // bit 2. STA	Valor del bit direccionado
			boolean OR:1;	 // bit 3. OR	Combinación Y = 1
			boolean OS:1;	 // bit 4. OS	Overflow memorizado (stored)
			boolean OV:1;	 // bit 5. OV	Overflow última operación
			boolean A0:1;	 // bit 6. A0	Res. Comparación / Artimética / Op. lógicas / Op. Shift+Rot / Errores (A0 o CC0)
			boolean A1:1;	 // bit 7. A1	Res. Comparación / Artimética / Op. lógicas / Op. Shift+Rot / Errores (A1 o CC1)
			boolean RB:1;	 // bit 8. RB	Resultado Binario (RB o BR)
			boolean b9:1; 	 // bits 9 a 15 (7 bits). Sin uso.
			boolean b10:1;	 // No utilizado.
			boolean b11:1;	 // No utilizado.
			boolean b12:1;	 // No utilizado.
			boolean b13:1;	 // No utilizado.
			boolean b14:1;	 // No utilizado.
			boolean b15:1;	 // No utilizado.
		}PLC_CPU_Reg_StatusWord;	// Registro CPU Palabra de estado

		// Data type for PLC CPU registers ACU 1 and ACU 2 of 32 bits
		typedef uint32_t PLC_CPU_Reg_ACU;

		// Data type for PLC CPU registers Address 1 and Address 2 of 32 bits
		typedef uint32_t PLC_CPU_Reg_Address;

		// Data type for PLC CPU register Nesting Stack of 8 bits. Pila de paréntesis
		typedef uint8_t PLC_CPU_Reg_NestingStack;

		// Data type for PLC CPU register MCR Stack of 32 bits
		typedef uint32_t PLC_CPU_Reg_MCR_Stack;

		// Data type for PLC CPU register MCR of 32 bits
		typedef uint32_t PLC_CPU_Reg_MCR;
*/

	/* Global variables */
	PLC_SymbolicRegister CR;

	/*Functions Prototypes*/

	// PLC_Digital_PORT_8 Convert_Uint8_t_2_PLC_Digital_PORT_8(uint8_t);
	// uint8_t Convert_PLC_Digital_PORT_8_2_Uint8_t(PLC_Digital_PORT_8);

	PLC_1ByteRegister Convert_Uint8_t_2_PLC_1ByteRegister(uint8_t);
	uint8_t Convert_PLC_1ByteRegister_2_Uint8_t(PLC_1ByteRegister);



	//void Reset_PLC_CPU_Reg_StatusWord(volatile PLC_CPU_Reg_StatusWord *);

#endif /* PLC_REGISTERS_H_ */
