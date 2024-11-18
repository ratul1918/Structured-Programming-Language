#include<stdio.h>
int main(){
    int i,j,z,k=0;

    for(i=1;i<=9;i++){
          i<6?k++:k--;
          z=1;
        for(j=1;j<=5;j++){
            if(j>=6-k){

            printf("%d ",z);
            z++;
             } 
             else{
            printf(" ");
             }
        
        }
        printf("\n");
}
}