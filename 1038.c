#include <stdio.h>
 
int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  if (a == 1) {
    printf("Total: R$ %.2lf\n", 4.0 * b);
  } else if (a == 2) {
    printf("Total: R$ %.2lf\n", 4.5 * b);
  } else if (a == 3) {
    printf("Total: R$ %.2lf\n", 5.0 * b);
  } else if (a == 4) {
    printf("Total: R$ %.2lf\n", 2.0 * b);
  } else if (a == 5){
    printf("Total: R$ %.2lf\n", 1.5 * b);
  }

  return 0;
}