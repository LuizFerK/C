#include <stdio.h>
 
int main() {
  int n, x = 0, y = 1, temp, i;

  scanf("%d", &n);

  if (n == 1) {
    printf("0");
  }

  if (n >= 2) {
    printf("0 1");
  }

  for (i = 0; i < n - 2; i++) {
    printf(" %d", x + y);
    temp = y;
    y = x + y;
    x = temp;
  }

  printf("\n");

  return 0;
}