#include <stdio.h>

int main(){
    int a[3][3],flag=0;
    for(int row=0;row<3;row++){ 
        for(int col=0;col<3; col++){
            scanf("%d",&a[row][col]);
        }
    }

    for(int row=0;row<3;row++){
        for(int col=row+1;col<3; col++){
            if(a[row][col]!=0){ 
                flag=1;
            }
        }
    }
    
    if(flag==0){
        printf("The matrix is lower triangular");
    }
    else{
        printf("The matrix is not lower triangular");
    }
    
    return 0;
}
