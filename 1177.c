#include <stdio.h>
 
int main() {
  int x, i, y = 0;

  scanf("%d", &x);

  for (i = 0; i < 1000; i++) {
    printf("N[%d] = %d\n", i, y);
    
    y++;

    if (y == x) {
      y = 0;
    }
  }

  return 0;
}