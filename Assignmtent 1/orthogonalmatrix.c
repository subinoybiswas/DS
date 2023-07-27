#include <stdio.h>

int orthogonal(){
    int n;
    printf("Enter n of the matrices : ");
    scanf("%d",&n);
    int matrix[n][n],transpose[n][n];

    printf("\nEnter row %d: ",i);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Output is :\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[i][j] = matrix[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int temp = 0;
            for(int k=0;k<n;k++){
                temp += matrix[i][k] * transpose[k][j];
            }
            if(i==j){
                if(temp != 1)
                return 0;
            }
            else{
                if(temp != 0)
                return 0;
            }
        }
    }

    return 1;
}

int main(){

(orthogonal())? printf("The Matrix is Orthogonal") : printf("The Matrix isn't Orthogonal");

    return 0;
}