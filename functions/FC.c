#include<stdio.h>
#include<math.h>
int Factorial(int n){
    printf("Enter the n: ");
    if(n>0 && n<=10){
    scanf("%d",&n);
    }
    int Fact=1;
    for(int i=0;i<=n;i++){
        Fact*=i;
    }
    return Fact;
}
int sum(int a,int b){
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}
int main(){
    int x,y,z;
    
    printf("Enter the 3 numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    
    int Fact1=Factorial(x);
    int Fact2=Factorial(y);
    int Fact3=Factorial(z);

    int TotalSum=sum(sum(Fact1,Fact2),Fact3);
    printf("Total Sum: %d\n",TotalSum);

}