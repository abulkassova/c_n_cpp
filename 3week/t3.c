#include <stdio.h>

int main() {

  int cm;
  scanf("%d", &cm);
  float convert(int cm){
    float km= 0.000001*cm;
    return km;
  }
printf("%d cm = %f km", cm, convert(cm));
  
return 0;
  
}

