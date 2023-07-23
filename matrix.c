#include<stdio.h>

int main(){
    int row;
    int column;
    printf("Enter Rows: ");
    scanf("%d",&row);
    printf("Enter Columns: ");
    scanf("%d",&column);
    int matrix[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("--------------------------\n");
     for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}