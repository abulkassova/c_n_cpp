#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float geometric_mean(float arr[], int num){

  float msqrt=1;
  float mean;
  int i;

  for(i=0;i<num;i++){
    msqrt=msqrt*arr[i]; //getting the result under root
  }
  mean=pow(msqrt,(1.0/i));
  return mean;
} //function to get geometric mean

float high_num(float arr[], int num){
  float highest=0.0;
  for(int i=0;i<num;i++){
    if(arr[i]>highest){
      highest=arr[i];
    }
  }
  return highest;
} //function to get the highest number
  
float low_num(float arr[], int num){

    float lowest=arr[0];
    for(int i=1;i<num;i++){
      if(arr[i]<lowest){
        lowest=arr[i];
      }
    }
    return lowest;
  }//function to get the lowest number
float sum(float arr[], int num){
    float sum1=0;
    for(int i=0;i<num;i++){
    sum1=sum1+arr[i];
    }
    return sum1;
  }//function to get the sum of numbers


int main(){
    float array[15];
    int i;
    float m;
    printf("Enter your values\n");
    for (i=0; i<15; i++)
    {
      scanf("%f",&m);
      if (m<=0) { //if negative stop scanning values
      break;
      }
    array[i]=m;
    }
        getchar();
        char c;
        printf("Enter a character:");
        scanf("%c",&c);
  
  switch (c){
  case 'm':
  printf("Geometric mean=%f",geometric_mean(array,i));
  break;

  case 'h':
  printf("highest value=%f", high_num(array,i));
  break;

  case 'l':
  printf("Lowest value=%f", low_num(array,i));
  break;

  case 's':
  printf("Sum=%f",sum(array,i));
  break;
}
  return 0;
}

