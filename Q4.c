//Swapping using temp variable//
#include <stdio.h>
int main(){
    int x,y,temp;
    printf("Enter value of x");
    scanf("%d",&x);
    temp=x;
    printf("Enter value of y");
    scanf("%d",&y);
    x=y;
    y=temp;
    printf("new x is %d and new y is %d",x,y);
    return 0;
}