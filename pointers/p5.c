#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int i,*p1;

    p1=&a[0];

    for(i=0;i<5;i++){
        printf("%d\n%x\n",*(p1+i),p1+i);
        //*p1++;

    }

}