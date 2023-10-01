#include <stdio.h>

int main() {

  double x,y;
  printf(" 2 doubles\n");
  scanf("%lf", &x);
  scanf("%lf", &y);
  printf("sum = %lf\n", x+y);
  printf("difference = %lf\n", x-y);
  printf("square = %lf\n", x*x);

  int b,c;
  printf(" 2 integers\n");
  scanf("%d %d", &b, &c);
  printf("sum = %d\n", b+c);
  printf("product = %d\n", b*c);

  char d,e;
  printf(" 2 characters\n");
  getchar();
  scanf("%c", &d);
  getchar();
   scanf("%c", &e);
  printf("sum = %c\n", d+e);
  printf("product = %c\n", d*e);
  printf("sum = %d\n", d+e);
  printf("product = %d\n", d*e);
  
  
  return 0;
}
