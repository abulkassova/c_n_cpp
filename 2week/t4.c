#include <stdio.h>
 
int main() {
printf("a= ; b= ; h= \n");
float a, b, h;
scanf("%f %f %f", &a, &b, &h);
 printf("square area= %f\n", a*a);
  printf("rectangle area= %f\n", a*b);
  printf("triangle area=%f\n", 0.5*a*h);
  printf("trapezoid area=%f\n", (a+b)*h/2);

  return 0;
}