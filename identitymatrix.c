#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int matrix[n][n];
    //int matrix2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter %d,%d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
int res=0;
    for(int i=0;i<n;i++){
    if(res!=1){    
    for(int j=0;j<n;j++){
        if (i==j&&matrix[i][j]!=1&&i!=n-1&&j!=n-1)
        {
            printf("Not Identity");
            res=1;
        }
        else if(i!=j&&i!=n-1&&j!=n-1&&matrix[i][j]!=0){
            printf("Not Identity");
        res=1;}
        else if(i==n-1&&j==n-1&&matrix[i][j]==1){
            printf("Identity");
            res=1;
        }
    }}
    else{
        break;
    }

    }
    return 0;

}