#include <stdio.h>

int main() {
    int i, j, z, k = 0;

    // Outer loop for rows (1 to 9)
    for (i = 1; i <= 9; i++) {
        // Adjust k value to manage number of digits per row
        i < 6 ? k++ : k--;  // k increases till row 5, then decreases

        z = 1;  // z starts at 1 for each row

        // Inner loop for columns (1 to 5)
        for (j = 1; j <= 5; j++) {
            // Start printing numbers when j reaches (6 - k)
            if (j >= 6 - k) {
                printf("%d ", z);
                z++;  // increment number
            } else {
                printf("  ");  // print space
            }
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}
