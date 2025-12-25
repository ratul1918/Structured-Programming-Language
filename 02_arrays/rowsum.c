#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of rows (n) and columns (m): ");
    scanf("%d %d", &n, &m);

    int arr[n][m];   
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nRow-wise Sum:\n");
    for(int i = 0; i < n; i++) {
        int rowSum = 0;
        for(int j = 0; j < m; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

    return 0;
}

