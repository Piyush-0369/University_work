#include<stdio.h>
int main(){
    int n,x;
    printf("Enter size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        printf("Enter value of element %d:",i+1);
        scanf("%d",&x);
        A[i]=x;
    }
    for(int j=0;j<n;j++){
        printf("%d ",A[j]);
    }
    return 0;
}