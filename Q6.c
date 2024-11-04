#include<stdio.h>
void fib(int n){
    int x=0,y=1;
    if(n==2){
        printf("%d, %d",x,y);
        return;
    }
    else if(n==1){
        
    }
    printf("%d, %d,",x,y);
    x=x+y;
    y=y+x;
    fib(n-2);
}
int main(){
    fib(3);
}