//Swappin of two numbers using pointers
#include<stdio.h>
void swap(int *x,int *y){
    int temp= *x;
    *x=*y;
    *y=temp;
}
void main(){
    int a,b;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("Numbers before swap: a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("Numbers before swap: a=%d and b=%d",a,b);
}