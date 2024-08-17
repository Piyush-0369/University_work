//addition with user input//
#include <stdio.h>
int main(){
    int x;
    int y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    int sum=x+y;
    printf("%d + %d = %d",x,y,sum);
    return 0;
}