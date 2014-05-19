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
 * PLC_Instructions.h
 *
 *  Created on: 04/02/2012
 *      Author: Eric Pernia
 */

#ifndef PLC_IL_INSTRUCTIONS_H_
	#define PLC_IL_INSTRUCTIONS_H_

	/* Data type enumeration for PLC Boolean Operations (U, UN, O, ON, X, XN) */

	typedef enum{AND, ANDN, OR, ORN, XOR, XORN} PLC_Boolean_Operation;

	// Enum de Modificadores de IL
	typedef enum{ NullModifier, N, C, NullModifierC, NC} PLC_EnumModifiers;


	/*Functions Prototypes*/

	// Carga y almacenamiento
	void PLC_IL_LD_BOOL_Literal( PLC_BOOL, PLC_EnumModifiers);
	void PLC_IL_LD_INT_Literal( PLC_INT, PLC_EnumModifiers);
	void PLC_IL_LD_TIME_Literal( PLC_TIME, PLC_EnumModifiers);
	void PLC_IL_LD(void*, uint16_t, PLC_EnumDataTypes, PLC_EnumModifiers);
	void PLC_IL_ST(void*, uint16_t, PLC_EnumModifiers);

	// Set y Reset
	void PLC_IL_S(PLC_BOOL* operand);
	void PLC_IL_R(PLC_BOOL* operand);

	// Comparación
	void PLC_IL_EQ(void*, PLC_EnumDataTypes);
	void PLC_IL_NE(void*, PLC_EnumDataTypes);
	void PLC_IL_GT(void*, PLC_EnumDataTypes);
	void PLC_IL_GE(void*, PLC_EnumDataTypes);
	void PLC_IL_LT(void*, PLC_EnumDataTypes);
	void PLC_IL_LE(void*, PLC_EnumDataTypes);

	// Artitméticas
	void PLC_IL_ADD(void*, PLC_EnumDataTypes);
	void PLC_IL_SUB(void*, PLC_EnumDataTypes);
	void PLC_IL_MUL(void*, PLC_EnumDataTypes);
	void PLC_IL_DIV(void*, PLC_EnumDataTypes);
	void PLC_IL_MOD(void*, PLC_EnumDataTypes);

	// Lógicas
	void PLC_IL_AND(void*, PLC_EnumDataTypes, PLC_EnumModifiers);
	void PLC_IL_OR(void*, PLC_EnumDataTypes, PLC_EnumModifiers);
	void PLC_IL_XOR(void*, PLC_EnumDataTypes, PLC_EnumModifiers);
	void PLC_IL_NOT(PLC_EnumDataTypes);

#endif /* PLC_IL_INSTRUCTIONS_H_ */
