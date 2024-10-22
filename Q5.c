#include <stdio.h>
int factorial(int x){
    int fct=1;
    for(int i=1;i<=x;i++){
        fct=fct*i;
    }
    return fct;
}
int ncr(int n,int r){
    float A=factorial(n-r),B=factorial(r),C=factorial(n);
    C=C/(A*B);
    printf("%f\n",C);
    return C;
}
int main(){
    int n,r;
    float ans;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("Enter value of r:");
    scanf("%d",&r);
    ans=ncr(n,r);
    printf("The Combination for n=%d and r=%d is %f",n,r,ans);
    return 0;
}