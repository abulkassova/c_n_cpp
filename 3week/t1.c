#include <stdio.h>

int main() {

  float x;
  int n;
  printf("enter one float and one integer\n");
  scanf("%f", &x);
  scanf("%d", &n);
  while(n<1||n%1!=0){
    printf("input is invalid, reenter value\n");
    scanf("%d", &n);
  }
  int i=0;
  while(i<n){
    printf("%f\n", x);
    i++;
  }

return 0;
  
}
