#include<stdio.h>
int main(){
    int i,j,rows,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){

        for(j=1;j<=(2*rows-1);j++){
            if(j>=i&&j<=2*rows-i){
            printf("*");
             } 
             else{
            printf(" ");
             }
        
        }
        printf("\n");
}
}