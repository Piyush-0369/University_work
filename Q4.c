//Swapping using temp variable//
#include <stdio.h>
int main(){
    int x,y,temp;
    printf("Enter value of x");
    scanf("%d",&x);
    printf("Enter value of y");
    scanf("%d",&y);
    printf("Variables before swap x=%d and y=%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("Variables after swap x=%d and y=%d",x,y);
    return 0;
}