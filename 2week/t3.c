#include <stdio.h>
 
int main() {
printf("Number of Days, week and hours");
int days, weeks, hours;

scanf("%d %d %d", &days, &weeks, &hours);
printf("total hours = %d\n", 24*days+weeks*24*7+hours);
  return 0;
}