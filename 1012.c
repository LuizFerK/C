#include <stdio.h>

#define pi 3.14159
 
int main() {
  double a, b, c, d, e, f, g, h;

  scanf("%lf %lf %lf", &a, &b, &c);

  d = (a * c) / 2;
  e = pi * c * c;
  f = ((a + b) * c) / 2;
  g = b * b;
  h = a * b;

  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", d, e, f, g, h);

  return 0;
}