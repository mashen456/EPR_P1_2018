#include <stdio.h>
//# include < stdo .h >

void main() {
//int mein ( void ) {
//mein =! main (Typo)
//Int ist nicht benötigt, da die Funktion keinen wert zurueck gibt.

    int i;
    double x = 0.0;

    for (i = 0; i < 10; i++) {
        //printf {"i=%d x=%g\n",i , x };
        //{} =! ()
        //printf("i=%d x=%g\n", i, x); %d Ist möglich, da i aber ein Integer ist, wäre ein %i angebracht.
        printf("i=%i x=%g\n", i, x);
        //x = x + i
        x = x + i;
    }
//    return 0;
//    void = kein rueckgabewert also wird auch kein return benötigt. 
}
