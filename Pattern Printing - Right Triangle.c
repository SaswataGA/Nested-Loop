#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows for the right-angled triangle: ");
    scanf("%d", &rows);

    if (rows <= 0) {
        printf("Invalid input. Please enter a positive number of rows.\n");
        return 1; // Exit the program with an error code
    }

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing asterisks in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

