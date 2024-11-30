//sum of array elements with pointers
#include<stdio.h>
void factorial(int *x,int n){
    int i=2;
    while(i<=n){
        *x=*x*i;
        i++;
    }
}
int main(){
    int n=5,fct=1;
    factorial(&fct,4);
    printf("%d",fct);
}