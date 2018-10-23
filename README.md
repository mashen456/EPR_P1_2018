# EPR_P1
EPR Praktikum 1 2018

## Compiling under Linux:

* cc program-source-code.c -o executable-file-name
* gcc program-source-code.c -o executable-file-name
### assuming that executable-file-name.c exists
* make executable-file-name
### executing
$ ./demo

# Umwandlungsspezifizierer

### %g
Der Umwandlungsspezifizierer "g" verlangt eine gemischte Schreibweise zur Ausgabe einer Gleitkommazahl. Die Zehnerpotenzschreibweise wird zur Ausgabe dabei nur dann verwendet, wenn der sich für die Ausgabe ergebende Exponent von Zehn kleiner als −4 oder größergleich der Genauigkeit ist, die normalerweise 6 beträgt. Endnullen erscheinen nicht, und ein Dezimaltrennzeichen wird nur ausgegeben, wenn noch eine Stelle folgt.

```c
#include <stdio.h>

int main( void ) 
{ printf( "%g|\n", 5. );  
  printf( "%g|\n", 1.23 );  
  printf( "%g|\n", 0.0004 );  
  printf( "%g|\n", 0.00005 );  
  printf( "%g|\n", 500000. );  
  printf( "%g|\n", 6000000. );
  }
  ```
  
  5| 
1.23| 
0.0004| 
5e-005| 
500000| 
6e+006|

# C Standard-Bibliothek Grenzwerte einer Implementierung: <limits.h> und <float.h>

Die Definitionsdatei <limits.h> definiert Konstanten für den Wertumfang der ganzzahligen Typen. Die nachfolgenden Werte sind zugelassene minimale Größen; größere Werte können in einer Implementierung benutzt sein.
```c
CHAR_BIT	8	Bits in einem char
CHAR_MAX	UCHAR_MAX oder
SCHAR_MAX	maximaler Wert für char
CHAR_MIN	0 oder SCHAR_MIN	minimaler Wert für char
INT_MAX	+32.767	maximaler Wert für int
INT_MIN	-32.767	minimaler Wert für int
LONG_MAX	+2.147.483.647	maximaler Wert für long
LONG_MIN	-2.147.483.647	minimaler Wert für long
SCHAR_MAX	127	maximaler Wert für signed char
SCHAR_MIN	-128	minimaler Wert für signed char
SHRT_MAX	+32.767	maximaler Wert für short
SHRT_MIN	-32.768	minimaler Wert für short
UCHAR_MAX	255	maximaler Wert für unsigned char
UINT_MAX	65.535	maximaler Wert für unsigned int
ULONG_MAX	4.294.967.295	maximaler Wert für unsigned long
USHRT_MAX	65.535	maximaler Wert für unsigned short
Die Namen in der nächsten Tabelle, einer Teilmenge von <float.h>, sind Konstanten, die sich auf Gleitpunktarithmetik beziehen. Wenn ein Wert angegeben ist, handelt es sich um ein Minimum für die entsprechende Größe. Jede Implementierung definiert entsprechende Werte.
  ```
  ```c
FLT_RADIX	2	Basis der Exponentendarstellung, zum Beispiel 2, 16
FLT_ROUNDS	 	Art der Rundung bei Gleitpunktaddition
FLT_DIG	6	Genauigkeit in Dezimalziffern (für float)
FLT_EPSILON	lE-5	kleinster Wert x für den 1.0 + x ungleich 1.0 gilt
FLT_MANT_DIG	 	Länge der Mantisse in Basis-Ziffern
FLT_MAX	lE+37	maximaler Gleitpunktwert
FLT_MAX_EXP	 	maximales n, für das FLT_RADIXn-1 darstellbar ist
FLT_MIN	1E-37	minimaler, normalisierter Gleitpunktwert
FLT_MIN_EXP	 	minimales n, für das 10n normalisiert werden kann
DBL_DIG	10	Genauigkeit in Dezimalziffern (für double)
DBL_EPSILON	lE-9	kleinster Wert x für den 1.0 + x ungleich 1.0 gilt
DBL_MANT_DIG	 	Länge der Mantisse in Basis-Ziffern
DBL_MAX	lE+37	maximaler Gleitpunktwert
DBL_MAX_EXP	 	maximales n, für das FLT_RADIXn-1 darstellbar ist
DBL_MIN	lE-37	minimaler, normalisierter double Gleitpunktwert
DBL_MIN_EXP	 	minimales n, für das 10n normalisiert werden kann
```
