#include<stdio.h>
 int checkIdentity(int *matrix,int n){
if(*matrix==1){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(*(matrix+i*n+j)!=1){
                    return 0;
                }
            }

          
            else{
                if(*(matrix+i*n+j)!=0){
                    return 0;
                }
            }
        }
    }
  return 1;
}

else{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-i-1){
                if(*(matrix+i*n+j)!=1){
                    return 0;
                }
            }

          
            else{
                if(*(matrix+i*n+j)!=0){
                    return 0;
                }
            }
        }
    }
      return 2;
}
  
  
}

int main(){
    int n;
    printf("\n\tINPUT VALUES\n----------------------------------------\n");
    printf("Enter n: ");
    scanf("%d",&n);

    int matrix[n][n];
    for(int i=0;i<n;i++){
        printf("Enter Row %d: ",i);
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n\tANSWER\n----------------------------------------\n");
  
   
    
//(checkIdentity(&matrix[0][0],n))?(printf("The Matrix is Identity Matrix")):printf("The Matrix isn't Identity Matrix");
if(checkIdentity((int *)matrix,n)==1){
    printf("The Matrix is Identity Matrix \n(Principal Diagonal)");
}

else if(checkIdentity((int *)matrix,n)==2){
    printf("The Matrix is Identity Matrix \n(Non-principal Diagonal)");
}
else{
   printf("The Matrix isn't Identity Matrix"); 
}

return 0;
}

