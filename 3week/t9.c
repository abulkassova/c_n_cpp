#include <stdio.h>

double sum25(double v[], int n){
  if(n>=5){
    double sum25=v[2]+v[5];
    return sum25;
  }
  return -111;
}

int main() {

  int n;
    printf("Enter a number of elements");
  scanf("%d", &n);
    if(n>20){
     printf("No more than 20!");
  scanf("%d", &n); 
    }
  double v[n];
  for(int i=0; i<=n; i++){
    printf("Enter a double");
    scanf("%lf", &v[i]);
  }
  printf("%lf\n", sum25(v, n));

return 0;
    
  }
