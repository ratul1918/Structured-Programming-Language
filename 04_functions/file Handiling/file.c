#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *HF="NULL";

    char str[50];
    HF=fopen("sample.txt","w");

    if(HF==NULL){
        printf("error");
        exit(1);
    }

    printf("Enter the string: ");
    fgets(str,50,stdin);

    for(int i=0;i<strlen(str);i++){
        fputc(str[i],Fp);
    }
    fclose(HF);
}