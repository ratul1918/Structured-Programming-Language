#include<stdio.h>
int main(){
    int x=5,y=10,z=30,sum;

    int *p1,*p2,*p3;
    p1=&x;
    p2=&y;
    p3=&z;

    sum=*p1 + *p2 + *p3;
    printf("Sum= %d\n",sum);

}    