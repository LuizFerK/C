#include <stdio.h>
#include <string.h>

int main() {
  int n, i, counter = 0;
  char str[1010];
  
  scanf("%d ", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", str);
    if (strstr(str,"CD") != NULL)
      counter++;
  }
  
  printf("%d\n", n - counter);

  return 0;
}