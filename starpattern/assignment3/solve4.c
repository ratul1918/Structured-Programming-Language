#include<stdio.h>
int main(){
    int num=2;
    int i,j,n;

    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
     
        for(j=1;j<=n-i;j++){
            printf("  "); 
        }
        for(j=1;j<=(2*i-1);j++){
            printf(" %d",num);
            num+=2;
        }

        printf("\n");
    }

    return 0;
}
