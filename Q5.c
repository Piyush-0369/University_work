//Swapping without third variable//
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("New x=%d and New y=%d",x,y);
    return 0;
}