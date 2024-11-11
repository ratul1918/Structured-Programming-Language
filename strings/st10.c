#include<stdio.h>
#include<string.h>
int main(){
    char s1[30];
    char s2[30];
    printf("Enter the strings: ");
    gets(s1);
    gets(s2);
    printf("%s\n%s",s1,s2);



    int len1,len2,i;
    len1=strlen(s1);
    len2=strlen(s2);

    for(i=0;i<=len2;i++){
        s1[len1+i]=s2[i];

    }
    printf("concat string= %s",s1);

}