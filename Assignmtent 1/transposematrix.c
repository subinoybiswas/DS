#include<stdio.h>

int main(){
    int row,column;
    printf("\n\tINPUT VALUES\n-----------------------------\n");
    
    printf("Enter Rows & Columns: ");
    scanf("%d %d",&row,&column);

    int matrix[row][column];
    for(int i=0;i<row;i++){
        printf("Enter Row %d: ",i);
        for(int j=0;j<column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("\n\tTRANSPOSE MATRIX\n-----------------------------\n");
    for(int i=0;i<row;i++){
        printf("|");
        for(int j=0;j<column;j++){
            printf(" %d ",matrix[j][i]);
        }
        printf("|\n");
    }

    return 0;
}