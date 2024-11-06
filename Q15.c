//sum of diagonal elements//
#include<stdio.h>
void matrix(int A[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter element for %dth row and %dth column:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
}
void main(){
    int sum=0,A[2][2];
    matrix(A);
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(i==j)
                sum=sum+A[i][j];
        }
    }
    printf("The sum of diagonal elements is %d",sum);
}

