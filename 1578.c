#include <stdio.h>
#include <stdlib.h>

int main() {
  int matrix, line_row, i, j, k;
  unsigned long long int array[100][100], maior[100], n_algarismos[100];
  
  scanf("%d", &matrix);   
  
  for(k = 0; k < matrix; k++){
    scanf("%d", &line_row);
    
    for(j = 0; j < 100; j++){
      maior[j] = 0;
      n_algarismos[j] = 0;
    }
    
    for(i = 0; i < line_row; i++){
      for(j = 0; j < line_row; j++){
        scanf("%llu", &array[i][j]);

        if(array[i][j]*array[i][j] > maior[j]){
          maior[j] = array[i][j]*array[i][j];
        }
      }
    }   

    for(j = 0; j < line_row; j++){   
      while(maior[j] != 0){
        n_algarismos[j] = n_algarismos[j] + 1;
        maior[j] = maior[j] / 10;
      }
    }
    char buf[20];

    if(k > 0) printf("\n");
    printf("Quadrado da matriz #%d:\n", k+4);
    for(i = 0; i < line_row; i++){
      for(j = 0; j < line_row; j++){
        if(j > 0) printf(" ");
        sprintf(buf, "%%%llullu", n_algarismos[j]);
        printf(buf, array[i][j]*array[i][j]);
      }
      
      printf("\n");
    }
  }

  return 0;
}