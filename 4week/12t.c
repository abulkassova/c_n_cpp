#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to replace all occurrences of 'c' with 'e' in the string 'str'.
void replaceAll(char *str, char c, char e) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            str[i] = e;
        }
    }
}

int main() {
    char string[80], c1, c2;
    
    printf("Enter your string: ");
    
    while (1) {
        fgets(string, sizeof(string), stdin);
        string[strlen(string) - 1] = '\0';

        if (strcmp(string, "stop") == 0) {
            break;
        }
        
        printf("\nEnter the first element: ");
        scanf(" %c", &c1);  // Note the space before %c to skip leading whitespace
        getchar();
        
        printf("Enter the second element: ");
        scanf(" %c", &c2);  // Note the space before %c to skip leading whitespace

        printf("\n%c is changed to %c\n", c1, c2);
        printf("\nYour initial string was: %s\n", string);

        // Perform the character replacement operation.
        replaceAll(string, c1, c2);

        printf("Your current string is: %s\n", string);
        getchar();
        
        printf("\nEnter another string or type 'stop' to end the code: ");
    }

    return 0;
}