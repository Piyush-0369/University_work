//Swapping without third variable//
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    printf("Variables before swap x=%d and y=%d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("Variables after swap x=%d and y=%d",x,y);
    return 0;
}