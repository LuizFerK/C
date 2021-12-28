#include <stdio.h>
 
int main() {
  int i, x;

  scanf("%d", &x);
  printf("N[0] = %d\n", x);

  for (i = 1; i < 10; i++) {
    printf("N[%d] = %d\n", i, x * 2);
    x = x * 2;
  }


  return 0;
}