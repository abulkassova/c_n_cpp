#include <stdio.h>
#include <string.h>

int count_consonants(char str[]){

  int vowels=0, TotalLetter=0, i;

  for(i=0; i<strlen(str); i++){ //counting vowels

    switch(str[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'y':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'Y':
      vowels++;
  }

  if(str[i]>='A'&& str[i]<='Z' || str[i]>='a'&& str[i]<='z'){ //counting total letters
    TotalLetter++;
  }
}
    int consonants=TotalLetter-vowels; //computing consonants

    return (consonants);
}


int main()
{
	char string[100];
	while (1){
		fgets(string, sizeof(string), stdin);
        if (string[0]=='\n'){
            break;
        }
        printf("Number of consonants=%i\n",count_consonants(string));
    }
	return 0;
}
