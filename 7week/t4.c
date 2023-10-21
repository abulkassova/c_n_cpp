#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpper(char *a) {
    for (int i = 0; a[i]; i++) {
        a[i] = toupper(a[i]);
    }
    printf("Text in UPPERCASE: %s\n", a);
}

void toLower(char *a) {
    for (int i = 0; a[i]; i++) {
        a[i] = tolower(a[i]);
    }
    printf("Text in lowercase: %s\n", a);
}

void reverseCase(char *a) {
    for (int i = 0; a[i]; i++) {
        if (islower(a[i])) {
            a[i] = toupper(a[i]);
        } else {
            a[i] = tolower(a[i]);
        }
    }
    printf("Text with reversed case: %s\n", a);
}

void exitProgram() {
    printf("Exiting the program.\n");
    exit(1);
}

void (*functions[4])(char *str) = {toUpper, toLower, reverseCase, exitProgram};

int main() {
    char text[50];
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    int choice;

    while (1) {
        printf("Choose an operation (1: Uppercase, 2: Lowercase, 3: Reverse case, 4: Exit): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Please choose a valid operation.\n");
        } else {
            functions[choice - 1](text);
        }
    }

    return 0;
}