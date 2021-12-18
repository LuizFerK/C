#include <stdio.h>
 
int main() {
  double x, y;

  scanf("%lf", &x);
  scanf("%lf", &y);

  printf("MEDIA = %.5lf\n", ((x * 3.5) + (y * 7.5)) / 11);

  return 0;
}