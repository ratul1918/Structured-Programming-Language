#include <stdio.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    
    int sacks[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &sacks[i]);
    }
    
    for (int k = 0; k < q; k++) {
        int queryType;
        scanf("%d", &queryType);
        
        if (queryType == 1) {
            int i;
            scanf("%d", &i);
            printf("%d\n", sacks[i]);
            sacks[i] = 0;
        } else if (queryType == 2) {
            int i, v;
            scanf("%d %d", &i, &v);
            sacks[i] += v;
        } else if (queryType == 3) {
            int i, j;
            scanf("%d %d", &i, &j);
            int total = 0;
            for (int k = i; k <= j; k++) {
                total += sacks[k];
            }
            printf("%d\n", total);
        }
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", sacks[i]);
    }
    printf("\n");
    
    return 0;
}
