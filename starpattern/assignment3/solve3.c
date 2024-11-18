#include <stdio.h>
int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int W; 
        scanf("%d", &W);
        
        int problems_solved[W]; 
        
        for (int i = 0; i < W; i++) {
            scanf("%d", &problems_solved[i]);
        }
        
        int R1, R2;
        scanf("%d %d", &R1, &R2);
        
        for (int i = R1; i <= R2; i++) {
            if (problems_solved[i] >= 10) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
