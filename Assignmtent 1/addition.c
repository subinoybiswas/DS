#include<stdio.h>

int main(){
    int m,n;
    printf("\n\tINPUT VALUES\n------------------------------\n");
    printf("Matrix1 & Matrix 2: Enter m,n: ");
    scanf("%d %d",&m,&n);

    int matrix[m][n];
    int matrix2[m][n];
    for(int i=0;i<m;i++){
        printf("Matrix1: Enter Row %d: ",i);
        for(int j=0;j<n;j++){
            
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
     for(int i=0;i<m;i++){
        printf("Matrix2: Enter Row %d: ",i);
        for(int j=0;j<n;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n\tANSWER\n------------------------------\n");
    for(int i=0;i<m;i++){
        printf("|");
        for(int j=0;j<n;j++){
            printf(" %d ",matrix[i][j]+matrix2[i][j]);
        }
        printf("|\n");
    }

    return 0;
}