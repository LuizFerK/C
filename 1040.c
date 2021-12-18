#include <stdio.h>
 
int main() {
  double a, b, c, d, avr, exm, fnl;

  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

  avr = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10.0;

  printf("Media: %.1lf\n", avr);

  if (avr >= 7.0) {
    printf("Aluno aprovado.\n");
  } else if (avr >= 5.0) {
    printf("Aluno em exame.\n");
    scanf("%lf", &exm);
    printf("Nota do exame: %.1lf\n", exm);

    fnl = (avr + exm) / 2.0;

    if (fnl < 5.0) {
      printf("Aluno reprovado.\n");
    } else {
      printf("Aluno aprovado.\n");
    }

    printf("Media final: %.1lf\n", fnl);
  } else {
    printf("Aluno reprovado.\n");
  }

  return 0;
}