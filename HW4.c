//odd even//
#include <stdio.h>
int main(){
    int x;
    printf("Enter the number you want to check");
    scanf("%d",&x);
    if(x%2==0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}