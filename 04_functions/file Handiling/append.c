#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp1;
    char ch[100];
    fp1=fopen("sample.txt","a");
    if(fp1==NULL){
        printf("Error");
        exit(1);
    }
    printf("Enter the line you want to append: ");
    fgets(ch, sizeof(ch), stdin);
    fprintf(fp1,"\n %s",ch);

    printf("Successfully inserted");

    fclose(fp1);
}    