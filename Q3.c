#include<stdio.h>
int MAX(int n,int A[n]){
    int max=A[0];
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max=A[i];
        }
    }
    return max;
}
int MIN(int n,int A[n]){
    int min=A[0];
    for(int i=0;i<n;i++){
        if(min>A[i]){
            min=A[i];
        }
    }
    return min;
}
int main(){
    int n,max,min;
    printf("Enter size of array");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of element number %d for the array:",i+1);
        scanf("%d",&A[i]);
    }
    max=MAX(n,A);
    min=MIN(n,A);
    printf("The maximum value in array is %d and minimum value is %d",max,min);
}