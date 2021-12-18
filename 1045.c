#include <stdio.h>
 
int main() {
  double a, b, c, x;

  scanf("%lf %lf %lf", &a, &b, &c);

  if (a < b) {
    x = a;
    a = b;
    b = x; 
  } 
  if (b < c) {
    x = b;
    b = c;
    c = x; 
  } 
  if (a < b) {
    x = a;
    a = b;
    b = x; 
  }
  if (a >= b + c) {
    printf("NAO FORMA TRIANGULO\n");
    return 0;
  }
  if (a * a == b * b + c * c) {
    printf("TRIANGULO RETANGULO\n");
  }
  if (a * a > b * b + c * c) {
    printf("TRIANGULO OBTUSANGULO\n");
  }
  if (a * a < b * b + c * c) {
    printf("TRIANGULO ACUTANGULO\n");
  }
  if (a == b && a == c && b == c) {
    printf("TRIANGULO EQUILATERO\n");
  }
  if (a == b || a == c || b == c) {
    if (a == b && a == c && b == c) {
      return 0;
    } else {
      printf("TRIANGULO ISOSCELES\n");
    }
  }

  return 0;
}