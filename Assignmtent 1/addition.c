#include<stdio.h>

int main(){
    int m,n,m2,n2;
    printf("\n\tINPUT\n------------------------------\n");
    printf("Matrix1: Enter m,n: ");
    scanf("%d %d",&m,&n);
  
    printf("Matrix2: Enter m,n: ");
    scanf("%d %d",&m2,&n2);

    if(n!=m2){
        printf("Can't be multipled");
    }
    else{
    int matrix[m][n];
    int matrix2[m2][n2];
    for(int i=0;i<m;i++){
        printf("Matrix1: Enter Row %d: ",i);
        for(int j=0;j<n;j++){
            
            scanf("%d",&matrix[i][j]);
        }
    }

     for(int i=0;i<m2;i++){
        printf("Matrix2: Enter Row %d: ",i);
        for(int j=0;j<n2;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n\tANSWER\n------------------------------\n");
    for(int i=0;i<m;i++){
        printf("|");
        for(int j=0;j<n2;j++){
            int add=0;
            for(int k=0;k<n;k++){
                add+=matrix[i][k]*matrix2[k][j];
            }
            printf("% d ",add);
            add=0;
        }
        printf("|\n");
    }
}


    return 0;
}