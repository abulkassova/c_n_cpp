#include <stdio.h>

int main() {

  char x;
  scanf("%c", &x);

  if (x>='A'&&x<='Z') {
      printf("%c is the letter", x);}
  else if (x>='a'&&x<='z') {
      printf("%c is the letter", x);}
  else if (x>='0'&&x<='9') {
      printf("%c is the digit", x);}
  else {
      printf("%c is the symbol", x);}

  return 0;
  


}