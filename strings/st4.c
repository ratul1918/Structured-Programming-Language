#include<stdio.h>
#include<string.h>
/*int main(){
    char s1[]="Rafiur Rahman Ratul";
    int len = strlen(s1);
    printf("%d",len);
}*/
int main(){
    char s1[]="Rafiur Rahman Ratul";
    int i=0,len=0;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
    printf("Length=%d",len);
}