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

# C Standard-Bibliothek
# Grenzwerte einer Implementierung: <limits.h> und <float.h>

