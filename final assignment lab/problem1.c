#include<stdio.h>
int main(){
char str[50];
gets(str);
int Level;
scanf("%d",&Level);

if(isCyberThreat(str,Level)){
    printf("Danger !!\n");
}
else {
    printf("Safe.\n");
}
return 0;
}
char getLastChar(char str[]){
int len=0;
while(str[len]!='\0'){
    len++;
}
return str[len-1];

}
int isValidEntity(char *entityName){

if(!(entityName[0]>=65 && entityName[0]<=90)){
    return 0;
}

int i=0;
while(entityName[i]!='\0'){

    if(!((entityName[i]>=65 && entityName[i]<=90) ||
         (entityName[i]>=97 && entityName[i]<=122) ||
         (entityName[i]>='0' && entityName[i]<='9') )

       ){
        return 0;
       }

   i++;
}
char last_char=getLastChar(entityName);
if(!(last_char>=97 && last_char<=122)){
    return 0;
}

 i=0;
while(entityName[i]!='\0'){
if((entityName[i]=='@' || entityName[i]=='#' || entityName[i]=='$'|| entityName[i]=='%' || entityName[i]=='^' || entityName[i]=='&'||entityName[i]=='*')){
    return 0;
}
i++;
}
return 1;
}
int isCyberThreat(char *entityName, int threatLevel){

if((isValidEntity(entityName)) && (threatLevel>50)){
    return 1;
}
else {
    return 0;
}
}