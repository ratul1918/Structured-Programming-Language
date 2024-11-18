#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int sum(int a, int  b){
    return a+b;
}
int main(){
    int x,y,z;
    printf("Enter three integers: ");
    scanf("%d%d%d",&x,&y,&z);

    int fact_x=factorial(x);
    int fact_y=factorial(y);
    int fact_z=factorial(z);

    int sum=(fact_x+fact_y+fact_z);
    printf("sum: %d\n",sum);
}