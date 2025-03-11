#include <stdio.h>

int main() {
    int i, j, n;
    scanf("%d", &n);  // Take input for size of the square

    for (i = 0; i < n; i++) {  // Loop for rows
        for (j = 0; j < n; j++) {  // Loop for columns
            // Print '*' for the first and last row, and first and last column
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");  // Print space for the hollow part
            }
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}