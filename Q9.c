//linear search//
#include<stdio.h>
int main(){
    int n,x=0,key;
    printf("Enter size of array:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        printf("Enter element number %d",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter which element you wanna look for:");
    scanf("%d",&key);
    for(int j=0;j<n;j++){
        if(A[j]==key){
            printf("The element is found at position %d",j+1);
            x=-1;
            break;
        }
    }
    if(x!=-1){
        printf("The element is not present in the array");
    }
    return 0;
}
