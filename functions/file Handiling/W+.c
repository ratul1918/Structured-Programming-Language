#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp1;
    fp1=fopen("sample.txt","w+");
    if(fp1==NULL){
        printf("Error");
        exit(1);
    }
    fputs("Spiderman",fp1);
    fclose(fp1);
}    