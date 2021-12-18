#include <stdio.h>
 
int main() {
  double x, r;

  scanf("%lf", &x);

  int printResult(int pct) {
    r = x * (pct / 100.0);

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", x + r, r, pct);

    return 0;
  }

  if (x <= 400.0) {
    printResult(15);
  } else if (x <= 800.0) {
    printResult(12);
  } else if (x <= 1200.0) {
    printResult(10);
  } else if (x <= 2000.0) {
    printResult(7);
  } else {
    printResult(4);
  }

  return 0;
}