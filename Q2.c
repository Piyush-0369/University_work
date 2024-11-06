//matrix multiplication//
#include<stdio.h>
void matrix(int m,int n,int A[m][n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element for %dth row and %dth column:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
}
int main(){
    int m,n,sum,p,q;
    printf("Enter order of matrix A in row x column format:\n");
    scanf("%d %d",&m,&n);
    printf("Enter order of matrix B in row x column format:\n");
    scanf("%d %d",&p,&q);
    if(n<1 || m<1 || p<1 || q<1){
        printf("Invalid order");
    }
    else if(n==p){
        int A[m][n];
        int B[p][q];
        int C[m][q];
        printf("Enter elements of matrix A\n");
        matrix(m,n,A);
        printf("Enter elements of matrix B\n");
        matrix(p,q,B);
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                sum=0;
                for(int k=0;k<n;k++){
                    sum+=A[i][k]*B[k][j];
                }
                C[i][j]=sum;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d  ",C[i][j]);
            }
            printf("\n");
        }
        return 0;
        }
}
