//swap with pointers//
#include <stdio.h>
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x,y;
    printf("Enter value of first number:");
    scanf("%d",&x);
    printf("Enter value of second number:");
    scanf("%d",&y);
    printf("Before Swapping: x=%d, y=%d\n",x,y);
    swap(&x,&y);
    printf("After  Swapping: x=%d, y=%d\n",x,y);
    return 0;
}