#include<stdio.h>
#include<string.h>
int main(){
    char str1[30]="Ratul";
    char str2[20]="Rahman";
    char temp[40];

    printf("before swapping\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("after swapping\n");
    printf("str1=%s\n",str1);
    printf("str2=%s",str2);


}