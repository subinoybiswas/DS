#include<stdio.h>

int main(){
    int n;
    int trace;
    printf("\n\tINPUT VALUES\n------------------------------\n");
    printf("Enter n of Square Matrix: ");
    scanf("%d",&n);

    int matrix[n][n];
    for(int i=0;i<n;i++){
        printf("Enter Row %d: ",i);
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n\tTRACE OF THE MATRIX\n------------------------------\n");
    for(int i=0;i<n;i++){
            trace += matrix[i][i];
        }

    printf("The Trace is: %d\n",trace);
    return 0;
}