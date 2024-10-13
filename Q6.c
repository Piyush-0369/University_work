#include<stdio.h>
int main(){
    int x;
    printf("Enter the number you want to check:");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}