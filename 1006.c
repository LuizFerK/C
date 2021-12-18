#include <stdio.h>
 
int main() {
  double x, y, z;

  scanf("%lf", &x);
  scanf("%lf", &y);
  scanf("%lf", &z);

  printf("MEDIA = %.1lf\n", ((x * 2) + (y * 3) + (z * 5)) / 10);

  return 0;
}