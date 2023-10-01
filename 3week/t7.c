#include <stdio.h>

void print_form(int n, int m, char c) { // printing the form function
        for(int p=1; p<=n; p++){
          for (int i=1; i<=m+p-1; i++){ //  
              printf("%c",c); }
          
    printf("\n");
    }
}

int main() {

  int n,m;
  char c;
  printf("give n m integers"); // scanning the data
  scanf("%d %d", &n, &m);
  printf("give a char");
  getchar();
  scanf("%c", &c);
  
 print_form(n,m,c); //using the function

return 0;
    
  }
