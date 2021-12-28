#include <stdio.h>

int main() {
  int i, n, p, l;

  scanf("%d", &n);

  int x[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }

  l = x[0];

  for (i = 1; i < n; i++) {
    if (l > x[i]) {
      l = x[i];
      p = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", l, p);

  return 0;
}