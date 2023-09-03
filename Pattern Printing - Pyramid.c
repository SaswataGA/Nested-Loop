#include <stdio.h>

int main() {
    int height;

    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    if (height <= 0) {
        printf("Invalid input. Please enter a positive height.\n");
        return 1; // Exit the program with an error code
    }

    // Outer loop for rows
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

