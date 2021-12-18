#include <stdio.h>
 
int main() {
  double x, y;
  char z;

  scanf("%s", &z);
  scanf("%lf", &x);
  scanf("%lf", &y);

  printf("TOTAL = R$ %.2lf\n", x + (y * 0.15));

  return 0;
}