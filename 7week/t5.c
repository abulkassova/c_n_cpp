#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertToUpper(char *text) {
    for (int i = 0; text[i]; i++) {
        text[i] = toupper(text[i]);
    }
    printf("Text in UPPERCASE: %s\n", text);
}

void convertToLower(char *text) {
    for (int i = 0; text[i]; i++) {
        text[i] = tolower(text[i]);
    }
    printf("Text in lowercase: %s\n", text);
}

void toggleCase(char *text) {
    for (int i = 0; text[i]; i++) {
        if (islower(text[i])) {
            text[i] = toupper(text[i]);
        } else {
            text[i] = tolower(text[i]);
        }
    }
    printf("Text with toggled case: %s\n", text);
}

void customExit() {
    printf("Custom exit message. Exiting...\n");
    exit(1);
}

void (*operations[4])(char *str) = {convertToUpper, convertToLower, toggleCase, customExit};

int main() {
    char inputText[50];
    printf("Enter a text: ");
    fgets(inputText, sizeof(inputText), stdin);

    int choice;
    while (1) {
        printf("Select an operation (1: Uppercase, 2: Lowercase, 3: Toggle case, 4: Custom Exit): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice. Please choose a valid operation.\n");
        } else {
            operations[choice - 1](inputText);
        }
    }

    return 0;
}