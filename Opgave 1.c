#include <stdio.h>

double taylor_sine(double x, int n) {
  // implement your function here

  int fact = 1;
  for (int i = 1; i<n; i++){
    fact = fact *i;
  }

  double sum = 0.0;
  int fortegn = 1;

  for (int i = 0; i<n; i++){
    int potens = 2*i+1;
    double led = fortegn * (1.0*x);
    for (int j = 2; j <= potens; j++){
      led = led * (x/j);
    }
    sum += led;
    fortegn = -fortegn;
  }
  return sum;
}

int main() {
    double vinkel;
    int gange;

    scanf("%lf\n", &vinkel);
    scanf("%d", gange);


    double resultat = taylor_sine(vinkel,gange);

    printf("sinus af %lf er %lf", vinkel, resultat);

}