//+ve -ve or 0//
#include <stdio.h>
int main(){
    int x;
    printf("Enter the value you wanna check:");
    scanf("%d",&x);
    if(x>0){
        printf("The number %d is positive",x);
    }
    else if(x<0){
        printf("The number %d is negative",x);
    }
    else{
        printf("The number is 0");
    }
    return 0;
}