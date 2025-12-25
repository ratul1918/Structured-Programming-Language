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

    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            totalSum += arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", totalSum);

    return 0;
}
