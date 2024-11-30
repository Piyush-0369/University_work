// sum of array using pointer
#include<stdio.h>
void add(int *x,int n,int A[n]){
    for(int i=0;i<=n;i++){
        *x=*x+A[i];
    }
}
int main(){
    int n,A[n],sum=0;
    printf("How many numbers would you like to add?  ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("Enter %dth number:",i+1);
        scanf("%d",&A[i]);
    }
    add(&sum,n,A);
    printf("SUM=%d",sum);
}