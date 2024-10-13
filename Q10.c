#include <stdio.h>
int main(){
    int x,y;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value ofy:");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("New x=%d and New y=%d",x,y);
    return 0;
}
