#include<stdio.h>
     void fun(int,int);
    int main(){
        int x=5,y=7;
        fun(x,y);
        printf("calling function:\n");
        printf("x=%d y=%d\n",x,y);
    }
    void fun(int x, int y){
        x=7;
        y=5;
        printf("called function:\n");
        printf("x=%d y=%d\n",x,y);
    }