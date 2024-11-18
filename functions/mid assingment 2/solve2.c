#include <stdio.h>
void printarr(int n, int arr[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    
    int field[n][n];

    printf("Enter the field value:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &field[i][j]);
        }
    }

    int row = 0, col = n - 1;
    printf("Doraemon's positions:\n");

    while (1) {
 
        if (field[row][col] == 0) {
            field[row][col] = 9;
        }

        printf("(%d, %d)\n", row, col);

        if (col > 0) {
            col--;
        } else if (row < n - 1) {
            row++;
        } else {
            break;
        }
    }

    printf("New field:\n");
    printarr(n, field);
}