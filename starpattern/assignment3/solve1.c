#include<stdio.h>
int main(){
int num,rem,i=0;
int arr[30];
int even=1, odd=1;
printf("Enter the number:");
scanf("%d",&num);
while(num!=0) {
    rem=num%10;
    num=num/10;
    arr[i]=rem;
  i++;
}
for(int j=0;j<i;j++) {
    if(arr[j]%2==0) {
        odd=0;
    }
    else {
        even=0;
    }
}
if(even ==1 || odd==1) {
    printf("Lucky Number\n");
}
else {
    printf("Not a Lucky Number\n");
}

}