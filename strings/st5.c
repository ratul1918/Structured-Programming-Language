#include<stdio.h>
#include<string.h>
int main(){
    char source[]="Rafiur Rahman Ratul";
    char target[30];

    strcpy(target,source);

    printf("%s\n",source);
    printf("%s",target);
}