#include <stdio.h>

int main() {

  char c;
  int n;
  printf("give the number of temperatures you want to enter:");
  scanf("%d", &n);
  double arr[n];
  double sum=0;
  double mean=sum/n;
  int i=0;
  for(int i=0;i<n;i++){
    printf("enter the tempurature number %d: ", i+1);
    scanf("%lf", &arr[i]);
    sum+=arr[i];
  };

 printf("s -the sum of the temperatures\np - the list of all tem- peratures\nt the list of all temperatures in Fahrenheit\nanother character - the average of all temperatures\nn - end the program\n");

    getchar();
    scanf("%c", &c);
    switch(c) {
    case ('s'):
    printf("%lf", sum);
    break;


  case ('p'):
    while(i<n){
      printf("%lf\n", arr[i]);
      i++;}
      break;
    
      case('t'):
        while(i<n){
      printf("%lf\n", arr[i]*1.8 + 32);
      i++;}
      break;

       default:
       printf("%lf", mean);}

      
  return 0;
  
    }
    

