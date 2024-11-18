#include <stdio.h>
#include <string.h>

int main() {
  char str1[20];
  char str2[20];


  fgets(str1, sizeof(str1), stdin);
  strcpy(str2, str1);

  puts(str2);

  return 0;
}
