//recursive factorial//
#include<stdio.h>
int fct=1;
int factorial(int n){
    if(n>1){
        fct=fct*n;
        factorial(n-1);
    }
    else
        return fct;
}
void main(){
    int n,result;
    printf("Enter the number you want factorial of:");
    scanf("%d",&n);
    result=factorial(n);
    printf("The factorial is %d",result);
}