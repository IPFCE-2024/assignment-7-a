#include "taylor_sine.h"
#include <stdio.h>

int main() {

/*2.3, -2.3 og 0.00 gav de samme resultater som ANSI C funktionen*/
    printf("sinus af 2.3 er %lf\n", taylor_sine(2.3, 10));

    printf("sinus af -2.3 er %lf\n", taylor_sine(-2.3,10));

    printf("sinus af 0.00 er %lf\n", taylor_sine(0.00,10));
/* Funktionen giver selvfølgelig et mere korrekt resultat når størrelsen på taylorserien forøges*/
    printf("sinus af 2 er %lf\n", taylor_sine(2, 10));

    printf("sinus af 2 er %lf\n", taylor_sine(2, 5));
}