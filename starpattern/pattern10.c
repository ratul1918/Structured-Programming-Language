#include<stdio.h>
int main(){
    int i,j,rows,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++){

        i<=(rows+1)/2?k++:k--;
        for(j=1;j<=(rows+1)/2;j++){
            if(j<=k){
            printf("*");
             } 
             else{
            printf(" ");
             }
        
        }
        printf("\n");
   
}
}