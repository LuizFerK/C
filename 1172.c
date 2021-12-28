#include <stdio.h>
 
int main() {
  int i, temp;

  for (i = 0; i < 10; i++) {
    scanf("%d", &temp);

    if (temp <= 0) {
      printf("X[%d] = 1\n", i);
    } else {
      printf("X[%d] = %d\n", i, temp);
    }
  }


  return 0;
}