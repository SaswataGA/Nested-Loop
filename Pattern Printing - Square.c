#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the square: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid input. Please enter a positive size.\n");
        return 1; // Exit the program with an error code
    }

    // Outer loop for rows
    for (int i = 1; i <= size; i++) {
        // Inner loop for columns
        for (int j = 1; j <= size; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
