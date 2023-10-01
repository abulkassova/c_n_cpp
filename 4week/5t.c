#include <stdio.h>
#include <string.h>

int count_consonants(char str[]){

  int vowels=0, TotalLetter=0, i;
  char *ptr=str;
  for(i=0; i<strlen(ptr); i++){ //counting vowels
  
    switch(*(ptr+i)){
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

  if(*(ptr+i)>='A'&& *(ptr+i)<='Z' || *(ptr+i)>='a'&& *(ptr+1)<='z'){ //counting total letters
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

