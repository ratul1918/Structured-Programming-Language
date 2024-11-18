#include<stdio.h>
int IsEven(int n){
    if(n%2==0){
       return 1;
    }
    else{
       return 0;
    }
}
int ComputeEvensum(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        if(IsEven(arr[i])){
            sum+=arr[i];
        }

    }
    return sum;
}
int main(){
    int n;
    printf("Enter the elements of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=ComputeEvensum(n,arr);
    printf("sum of even numbers: %d\n",sum);
    return 0;
}