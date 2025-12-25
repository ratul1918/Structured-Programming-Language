#include <stdio.h>

int main() {
    int n;

    printf("Enter size of matrix (n): ");
    scanf("%d", &n);

    int arr[n][n];   
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

// Swap first and last element of each row
int temp;
for (int i = 0; i < n; i++) {
    temp = arr[i][0];
    arr[i][0] = arr[i][n - 1];
    arr[i][n - 1] = temp;
}

    printf("\nMatrix after row-wise swap:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
