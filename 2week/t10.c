
#include <stdio.h>

int main() {

  int days;
  scanf("%d", &days);
  int cur=0;
  while(cur<=days){
    printf("%d days = %d hours", cur, cur*24 );
    cur++;
  }
  return 0;

}