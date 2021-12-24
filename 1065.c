#include <stdio.h>
 
int main() {
  int i, temp, evens = 0;

  for (i = 0; i < 5; i++) {
    scanf("%d", &temp);

    if (temp % 2 == 0) {
      evens++;
    }
  }

  printf("%d valores pares\n", evens);

  return 0;
}