#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Maximalgroesen von FLOAT / INTEGER / DOUBLE
    printf("Groeste Positive Integer Value: %d\n", INT_MAX);
    printf("Maximal Float Value %g\n",FLT_MAX);
    printf("Maximal Double Value %g\n",DBL_MAX);

    //Maximalgroese eines Integers mit einer Schleife herausfindfen.
    //Auskommentiert, da dieser weg zu ineffizient ist.
//    int maxint=0;
//    while (maxint > -1){
//        maxint++;
//    }
//    printf("\nManximale Int Value: %i\n",maxint -1);

    double d = DBL_MAX;
    printf("\nMaximales Double: %g\n",d);
    d = d +1.0;
    printf("Maximales Double +1: %g\n",d);

    if (d != DBL_MAX) {
        printf("Diese Schleife wuerde greifen, wenn ein ueberlauf des duobles passieren koennte.");
    }

    //Was passiert bei einem Überlauf von einem CHAR?
    printf("\nUeberlauf gezeigt an einem CHAR:\n");
    printf("\nMaximale CHAR groese: %i", CHAR_MAX);
    char c = CHAR_MAX;
    c++;
    printf("\nMaximale CHAR groese +1: %i", c);


    return 0;

}
