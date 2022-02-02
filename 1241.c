#include <stdio.h>
#include <string.h>

int main() {
  int n, i, count, j, k;
  char a[1001], b[1001];

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    count = 0;
    scanf("%s %s", a, b);

    for(j = strlen(b), k = strlen(a); j >= 0; j--, k--){
      if(b[j] == a[k]){
        count++;
      }
    }

    if(count == strlen(b) + 1){
      printf("encaixa\n");
    }
    else{
      printf("nao encaixa\n");
    }
  }

  return 0;
}