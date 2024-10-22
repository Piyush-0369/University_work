//function to find prime//
#include<stdio.h>
int prime(int x){
    int result=1;
    for(int i=1;i<x;i++){
        if(x%i==0){
            result=0;
            break;
        }
    }
    if(result){
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
}
int main(){
    int x;
    printf("Enter which number you want to check");
    scanf("%d",&x);
    prime(x);
    return 0;
}