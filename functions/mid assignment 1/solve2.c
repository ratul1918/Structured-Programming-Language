#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter the array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            arr[count++]=arr[i];
        }
    }
    while(count<n){
        arr[count++]=0;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}