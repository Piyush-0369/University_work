//recursive fibonacci//
#include<stdio.h>
int x=0,y=1;
void fib(int n){
    if(n==2){
        printf(" %d, %d",x,y);
        return;
    }
    else if(n==1){
        printf(" %d",x);
        return;
    }
    printf(" %d, %d,",x,y);
    x=x+y;
    y=y+x;
    fib(n-2);
}
int main(){
    int n;
    printf("Enter till which number you want fibonacchi series ");
    scanf("%d",&n);
    printf("The series will be\n");
    fib(n);
}