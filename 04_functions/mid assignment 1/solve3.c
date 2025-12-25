#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            printf("Array[%d][%d]: ",i,j);
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}

int sum=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if((i==0 && j!=n/2)||
           (i==n/2 && (j==0 || j==n-1))||
           (i==n-1 && (j!=0 && j!=n-1))||
        (i!=n/2 && (j==(n/2)-1 || j==(n/2)+1))){
            sum+=arr[i][j];
        }
    }
}
printf("%d",sum);
}
