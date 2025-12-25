#include<stdio.h>
void Arr(int n, int arr[n][n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("Array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];

    Arr(n, arr);

    for(int i = 0; i < n; i++) {
        int j = n - 1 - i;
        printf("%d %d\n", i, j);
    }
    for(int j = 1; j < n - 1; j++) {
        int i = n - 1;
        printf("%d %d\n", i, j);
    }
    for(int i = n - 1; i >= 0; i--) {
        int j = n - 1;
        printf("%d %d\n", i, j);
    }

    printf("\n\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 0) {
                arr[i][j] = 9;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}