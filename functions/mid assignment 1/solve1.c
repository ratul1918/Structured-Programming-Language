#include<stdio.h>
int main(){
int n,rem,flag=0,sum=0;
scanf("%d",&n);
while(n!=0){
    rem=n%10;
    n=n/10;
    sum+=rem;
    if(rem%2==0){
        flag=1;
        break;
    }
}
if(flag==1){
    printf("Not a super prime\n");
}
else {
        int flag=0;
    for(int i=2;i<sum;i++){
        if(sum%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Not a super prime\n");
    }
    else {
        printf("Is a Super prime\n");
    }
}

}