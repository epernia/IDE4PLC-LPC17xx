IDE4PLC
=======

A libre Programming Software for PLC comply with IEC 61131-3




Copyright © 2012-2014 Eric Nicolás Pernia.

This program is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.




BIENVENIDO AL PROYECTO IDE4PLC. AGRADECEMOS SU INTERÉS.



NOTAS DE LA VERSIÓN 0.0.7 ALPHA	
	
	Este software se encuentra desarrollo. La presente versión 0.0.7 alpha 
	puede porgramar únicamente microcontroladores NXP LPC1769 (ARM Cortex 
	M3 @ 120MHz) del tollchain LPCXpresso 1769 en lenguaje LADDER DIAGRAM
	IEC 61131-3. Es por esto que la ventana de creación de proyectos está 
	fija. Se está trabajando para poder incluir otros micorcontroladores.

	La ventana de configuración de software también se encuentra fija por 
	motivos de desarrollo. Es por esto que el programa generado corre en 
	una única tarea periódica cada 20ms llamada MAIN_TASK. Esta tarea 
	dispara una Unidad de Organización de programa (POU) del tipo Programa 
	llamada MAIN_PROGRAM.

	MAIN_PROGRAM es la única POU que permite modificar el programa, 
	contiene declaradas previamente variables de interfaz de Entradas (8 
	variables llamadas E0 a E7) y Salidas (8 variables llamadas S0 a S7) 
	y algunas variables internas, no permite el agregado o borrado de 
	variables. La única excepción son las variables del tipo instancia de
	POU Bloque de Función (ver documentación enel sitio web), que se 
	agregan automáticamente al agregar un bloque FB (Bloque de Función) 
	en el programa de usuario. Para que las mismas aparezcan en al lista 
	de variables internas se debe cerrar y volver a abrir la ventna del 
	Editor de Unidades de Organización de Programa.

	
¿Cómo abrir el IDE4PLC v0.0.7 alpha?

	Para abrirlo debe ejecutar el entorno Pharo-Smalltak:

	- Mac: abrir Pharo2.0-portable.app
	- Linux: abrir Pharo2.0-portable.sh
	- Windows: abrir Pharo.exe
	
Utilización de IDE4PLC v0.0.7 alpha

	- Versión Windows, Mac y Linux: 
	  
	  Abra el Pharo, cree un porgrama en lenguaje LADDER DIAGRAM 
	  mediante el editor de POUs (que se abre con el ícono correspondiente), 
	  presionar el botón "compilar" que traducirá a lenguaje C el programa 
	  Ladder (generando varios archivos con extensión .C y .H).
	  
	  NOTA: Los botones "conectarse al PLC" y "descargar al PLC" del editor
	  de POUs no esán disponibles en la versión para Windows, Linux y MAC 
	  OS X.
	  
	  Abra el software LPCXpresso IDE y haciendo clic con el botón derecho 
	  del mouse sobre la carpeta de proyecto "PLeriC_Library" se abrirá un 
	  menú contextual donde debe seleccionar la opción "build". Repetir 
	  esta acción sobre la carpeta de proyecto "PLeriC_Project". De esta 
	  manera se obtiene un ejecutable compatible con el microcontrolador 
	  LPC1769. Finalmente, conecte la placa LPCXpresso board a su 
	  computadora mediante USB e inicie una sesión de debug o descarge el 
	  programa directamente a la memoria flash del LPCXpresso board.
	  
	- Versión Windows:
	  
	  Abra el Pharo, cree un porgrama en lenguaje LADDER DIAGRAM 
	  mediante el editor de POUs (que se abre con el ícono correspondiente), 
	  presionar el botón "compilar" que traducirá a lenguaje C el programa 
	  Ladder (generando varios archivos con extensión .C y .H). 
	  Además de generar los archivos en elnguaje C, invoca automáticamente 
	  mediante linea de comandos al software LPCXpresso IDE e iniciar el 
	  proceso de build de los proyectos "PLeriC_Library" y "PLeriC_Project". 
	  De esta manera se obtiene un ejecutable compatible con el 
	  microcontrolador LPC1769. 
	  
	  Conecte la placa LPCXpresso board a su computadora mediante USB y 
	  presione el botón "conectarse al PLC" en el Editor de POUs para que 
	  se realice la derección de la misma.
	  
	  Finalmente, presione el botón "descargar al PLC" en el Editor de 
	  POUs, para que se realice la descarge del programa directamente a 
	  la memoria flash del LPCXpresso board.



Información del proyecto IDE4PLC

	Sitio web: http://ide4plc.wordpress.com
	E-mail del proyecto IDE4PLC: ide4plc@gmail.com

	
Acerca del autor
	
	Nombres y apellido: Eric Nicolás Pernia.
	Ubicación actual: Quilmes, Buenos Aires, Argentina.

	e-mail: ericpernia@gmail.com
	
	
