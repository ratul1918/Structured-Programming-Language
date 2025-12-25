#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the 2D array: ");
    scanf("%d", &n);
    int arr[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }  


    for (int i = 0; i < n; i++) {
        int rowSum = 0; 
        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, rowSum);
    }

    return 0;
}
