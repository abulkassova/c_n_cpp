#include <stdio.h>
#include <string.h>

int main(){

  char string[50]; //getting a string of 50 characters
  fgets(string,sizeof(string),stdin);
  int i=0;
  while(i<strlen(string)-1){ // a cycle for printing the string

    if(i%2==1){ //if odd
      printf(" %c\n", string[i]); // with space
    }

    else{ 

      printf("%c\n", string[i]); //without space
      
    }    
    i++;
  }

  return 0;
}