#include <stdio.h>
#include <stdlib.h>

void matrix_p(int matrix[30][30], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);  // Added space to separate elements
        }
        printf("\n");  // Newline after each row
    }
}

void matrix_utmd(int matrix[30][30], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i+j>=n) { //new condition for another diagonal
                printf("%d ", matrix[i][j]);  // Added space to separate elements
            } else {
                printf("  ");  
            }
        }
        printf("\n");  // Newline after each row
    }
}


int main() {
    int matrix[30][30], i, j, n;
    printf("Enter the number of rows and columns: ");  
    scanf("%d", &n);

    if (n <= 0 || n > 30) {
        printf("Invalid matrix size. Please enter a size between 1 and 30.\n");
        return 1; 
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    matrix_p(matrix, n);

    printf("Elements under the main diagonal: \n");
    matrix_utmd(matrix, n);

    return 0;
}


