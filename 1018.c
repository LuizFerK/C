#include <stdio.h>
 
int main() {
  int x, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, xo;

  scanf("%d", &x);

  xo = x;

  while (x > 0) {
    if (x >= 100) {
      a++;
      x = x - 100;
    } else if (x >= 50) {
      b++;
      x = x - 50;
    } else if (x >= 20) {
      c++;
      x = x - 20;
    } else if (x >= 10) {
      d++;
      x = x - 10;
    } else if (x >= 5) {
      e++;
      x = x - 5;
    } else if (x >= 2) {
      f++;
      x = x - 2;
    } else {
      g++;
      x = x - 1;
    }
  }

  printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", xo, a, b, c, d, e, f, g);

  return 0;
}