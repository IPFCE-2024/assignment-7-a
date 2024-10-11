#include "math.h"
#include "taylor_sine.h"
#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long fact = n * factorial(n-1);
    return fact;
}

double taylor_sine(double x, int n) {
    double sum = 0.0;

    for(int i = 0; i <n; ++i){
        int fortegn = (i % 2 == 0) ? 1: -1;
        int exponent = 2*i+1;
        double power = pow(x,exponent);
        long long fact = factorial(exponent);

        sum += fortegn * (power/fact);
    }
    return sum;
}

int main(){
    double vinkel;
    int gange;

    scanf("%lf\n", &vinkel);
    scanf("%d", gange);


    double resultat = taylor_sine(vinkel,gange);

    printf("sinus af %lf er %lf", vinkel, resultat);

}
