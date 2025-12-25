#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    int i=0,len=0,j;

     printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0'; 

    
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {

        str2[j]=str1[i];
    }

    str2[j]='\0';

    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);
    printf("length of the string: %d\n",len);

    int d=strcmp(str1,str2);
    if(d==0){
        printf("YES");
    }
    else
    printf("NO");

}