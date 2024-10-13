#include<stdio.h>
void matrix(int n,int A[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element for %dth row and %dth column:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
}
int main(){
    int n;
    printf("Enter order of matrix:");
    scanf("%d",&n);
    if(n<1){
        printf("Invalid order");
    }
    else{
        int A[n][n];
        int B[n][n];
        int C[n][n];
        printf("Enter elements of matrix A\n");
        matrix(n,A);
        printf("Enter elements of matrix B\n");
        matrix(n,B);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        printf("_          _\n");
        for(int i=0;i<n;i++){
            printf("| ");
            for(int j=0;j<n;j++){
                printf("%d  ",C[i][j]);
            }
            printf("|\n");
        }
        printf("``        ``");
        }
    return 0;
}