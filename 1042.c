#include <stdio.h>
 
int main() {
  int nums[3], temp, i, j;

  scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

  int reversed[3] = {nums[0], nums[1], nums[2]};

  for (i = 0; i < 3; i++) {     
    for (j = i + 1; j < 3; j++) {     
      if(reversed[i] > reversed[j]) {    
        temp = reversed[i];    
        reversed[i] = reversed[j];    
        reversed[j] = temp;    
      }     
    }     
  }

  for (i = 0; i < 3; i++) {
     printf("%d\n", reversed[i]);
  }
  
  printf("\n");

  for (i = 0; i < 3; i++) {
     printf("%d\n", nums[i]);
  }

  return 0;
}