#include <stdio.h>
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate sine using Taylor series expansion
// x: the input angle in radians
// n: the number of terms in the Taylor series
double taylor_sine(double x, int n) {
    double sum = 0.0;  // Accumulator for the result
    int sign = 1;      // Alternating sign

    for (int i = 0; i < n; i++) {
        int power = 2 * i + 1;  // Odd powers: 1, 3, 5, ...
        double term = sign * (1.0 * x);  // Start term with the angle x
        for (int j = 2; j <= power; j++) {
            term *= (x / j);  // Compute power and factorial simultaneously
        }
        sum += term;  // Add term to sum
        sign = -sign;  // Alternate sign for the next term
    }

    return sum;
}

int main() {
    double angle;
    int terms;

    scanf("%lf\n", &angle);
    scanf("%d", terms);


    double resultat = taylor_sine(angle,terms);

    printf("sinus af %lf er %lf", angle, resultat);

return 0;
}
