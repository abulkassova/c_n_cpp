#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){
  *prod=a*b;
  *div=a/b;
  *pwr=pow(a,b);
  *invb=1/b;
  
}

int main(){
  float product, division, power, invbb;
  float a,b;
  printf("give two values\n");
  scanf("%f", &a);
  scanf("%f", &b);
  proddivpowinv(a,b,&product,&division,&power,&invbb);
  printf("product = %f\n",product);
   printf("division = %f\n", division);
   printf("power = %f\n", power );
   printf("invbb = %f\n", invbb);
  return 0;
}


