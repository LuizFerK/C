#include <stdio.h>
 
int main() {
  int a, b, c;
  double d, e;

  scanf("%d %d %lf", &a, &b, &d);
  scanf("%d %d %lf", &a, &c, &e);

  printf("VALOR A PAGAR: R$ %.2lf\n", b * d + c * e);

  return 0;
}