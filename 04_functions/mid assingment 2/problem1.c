#include<stdio.h>
#include<string.h>
void fun1( int n,int items[],int add[]){
    int i;

    for(i=0;i<n;i++){
         printf("Enter the item %d: ",i+1);
        scanf("%d",&items[i]);
        printf("Enter the value %d: ",i+1);
        scanf("%d",&add[i]);
 
    }
    for(i=0;i<n;i++){
        printf("items[%d] = %d, add[%d] = %d\n", i, items[i], i, add[i]);
    }
    
}    
void opendoor(char password[]){
    char correct_pass[30]="Narina";
    printf("Enter the password to open door: ");
    gets(password);

    password[strcspn(password,"\n")]=0;

    if(strcmp(correct_pass,password)==0){
        printf("Door to Narina open.\n");

    }
    else{
    printf("there is no door open.\n");
    }
}
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
     int items[n],add[n];
    getchar();
    fun1(n,items,add);
     char password[30];
    printf("%s",password);
    opendoor(password);
    return 0;
}