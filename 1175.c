#include <stdio.h>
 
int main() {
  int i, j = 19, n[20];

  for (i = 0; i < 20; i++) {
    scanf("%d", &n[i]);
  }

  for (i = 0; i < 20; i++) {
    printf("N[%d] = %d\n", i, n[j]);
    j--;
  }


  return 0;
}