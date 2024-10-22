//function to find nth fibonacchi number//
#include<stdio.h>
int fib(int n){
    int x=0,y=1;
    for(int i=2;i<n;i++){
        if(i%2==0){
            x=x+y;
        }
        else{
            y=y+x;
        }
    }
    if(n%2==0){
        return y;
    }
    else{
        return x;
    }
}
int main(){
    int n,x;
    printf("Which fibonacchi number do you want?\n");
    scanf("%d",&n);
    x=fib(n);
    printf("The %dth fibonacchi number is %d",n,x);
}