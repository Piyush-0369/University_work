#include<stdio.h>
int main(){
    int n,x,y,max,min;
    float avg,sum=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        printf("Enter value of element %d:",i+1);
        scanf("%d",&x);
        A[i]=x;
        sum+=x;
    }
    avg=sum/n;
    max=A[0];
    min=A[0];
    for(int j=0;j<n;j++){
        if(max<A[j]){
            max=A[j];
        }
        if(min>A[j]){
            min=A[j];
        }
    }
    printf("The largest element is %d\nThe smallest element is %d\nThe average is %0.2f",max,min,avg);
    return 0;
}