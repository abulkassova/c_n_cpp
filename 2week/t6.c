#include <stdio.h>

int main(){
    double x, y;
    scanf("%lf %lf", &x, &y);
  double *ptr_one, *ptr_two, *ptr_three;
  ptr_one=&x;
  ptr_two=&x;
  ptr_three=&y;
  printf("ptr_one=%p and ptr_two=%p\n",ptr_one, ptr_two);
  printf("ptr_three=%p\n", ptr_three);

  return 0;
}