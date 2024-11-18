#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp1;
    char ch;
    char str[30];
    fp1=fopen("sample.txt","r+");
    if(fp1==NULL){
        printf("Error");
        exit(1);
    }
    fputs("Mad",fp1);
    rewind(fp1);

    while(!feof(fp1)){
    ch=fgetc(fp1);
    printf(" %c",ch);
    }
    fputs("Hell",fp1);
    fclose(fp1);
}  