#include <stdio.h>

int main() {
  char ch;
  int n;
  printf("enter a lowercase character and an integer");
  scanf("%c %d", &ch, &n);
  printf("%c", ch);
  int i=1;
  while(i!=n){
    printf("%c - %d", ch, i);
  }
  return 0;
  
}