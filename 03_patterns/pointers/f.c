#include<stdio.h>
int main(){
    int n;
    int arr[5];
    int *ptr;
    ptr=arr;

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=*(ptr+i);

    }
    printf("%d\n",sum);

}