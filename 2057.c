#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &b, &c, &a);

  if (b == 0) {
    b = 24;
  }

  b = (b + c + a) % 24;

  printf("%d\n",b);

	return 0;
}