//factorial using pointer
#include<stdio.h>
void factorial(int *x,int n){
    int i=2;
    while(i<=n){
        *x=*x*i;
        i++;
    }
}
void main(){
    int n,fct=1;
    printf("Which number you want factorial of? ");
    scanf("%d",&n);
    factorial(&fct,n);
    printf("%d",fct);
}