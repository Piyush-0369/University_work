#include <stdio.h>
int factorial(int x){
    int fct=1;
    for(int i=1;i<=x;i++){
        fct=fct*i;
    }
    return fct;
}
int main(){
    int x,fct;
    printf("Enter which number you want factorial of:");
    scanf("%d",&x);
    fct=factorial(x);
    printf("The factorial is %d",x);
    return 0;
}