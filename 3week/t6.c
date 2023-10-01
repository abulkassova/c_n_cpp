#include <stdio.h>

int main() {

  int g, kg;
  printf ("enter gs and kgs"); // asking a user to enter values
  scanf("%d %d", &g, &kg);
  float to_pounds(int kg, int g){ //a function to convert

    int sum=g+1000*kg;
    float pounds=sum*0.0022;
    return pounds;
  }

printf("%d kg %d g = %f pounds", kg, g, to_pounds(kg,g)); //printing the result

return 0;
}