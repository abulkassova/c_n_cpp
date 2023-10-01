#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int countinsensitive(char *str, char c) {
  int occur = 0;
  for (int i = 0; i < strlen(str); i++) {
    if (tolower(c) == tolower(str[i])) { // case insensitive comparison
      occur++;
    }
  }
  return occur;
}

int main() {
  char *str;
  str = (char *)malloc(sizeof(char) * 50); // выделение памяти под строку из 50 символов
  if (str == NULL) {
    exit(1);
  }
  
  fgets(str, 50, stdin);

  char *str2;
  str2 = (char *)malloc(strlen(str) + 1); // выделение памяти для новой строки

  if (str2 == NULL) {
    free(str);
    exit(1);
  }

  strcpy(str2, str); // копирование строки

  free(str); // освобождение памяти, выделенной для str
  
  printf("b %d\n", countinsensitive(str2, 'b'));
  printf("H%d\n", countinsensitive(str2, 'H'));
  printf("8 %d\n", countinsensitive(str2, '8'));
  printf("u %d\n", countinsensitive(str2, 'u'));
  printf("$ %d\n", countinsensitive(str2, '$'));

  free(str2); // освобождение памяти, выделенной для str2
  
  return 0;
}