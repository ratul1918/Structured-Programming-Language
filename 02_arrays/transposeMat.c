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

    int transposed[m][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            transposed[j][i] = arr[i][j];
        }

    }


    printf("Transposed matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;    

}