#include <stdio.h>

int main() {
    int i, j, rows, k = 0;

    // Ask user to input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop through each row
    for (i = 1; i <= rows; i++) {
        // Increase k in first half, decrease in second halff
        if (i <= (rows + 1) / 2)
            k++;
        else
            k--;

        // Print stars and spaces
        for (j = 1; j <= (rows + 1) / 2; j++) {
            if (j <= k)
                printf("*");
            else
                printf(" ");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
