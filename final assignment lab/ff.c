#include<stdio.h>
#include<string.h>
void Arr(int array[]);
void remove_nonAlpha(char *string);
void replace_chars(char *string,char replace,char new);
int main(){
    int myarray[]={1,2,3,4,5};
    Arr(myarray);
    for(int i=0;i<5;i++){
    printf("%d\n",myarray[i]);
    }

    char string[100];
    printf("enter a string:\n");
    fgets(string,100,stdin);
    remove_nonAlpha(string);
    replace_chars(string,replace,new);
    printf("After removing non alpha chars: %s\n",string);

}
void Arr(int array[]){
    array[0]=array[0];
}
void remove_nonAlpha(char *string){
    int len=strlen(string);
    int i=0,j=0;
    for(i=0;i<len;i++){
        if((string[i]>='A'&& string[i]<='Z')||(string[i]>='a'&&string[i]<='z')){
            string[j++]=string[i];

        }
        
    }
    string[j]='\0';
}
void replace_chars(char *string,char replace,char new){
    int len=strlen(string);
    for(int i=0;i<len;i++){
        if(string[i]==replace){
            string[i]=new;
        }
    }
}