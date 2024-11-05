//weighted sum//
#include <stdio.h>
int main(){
    float m;
    float p;
    printf("Enter markrs in maths:");
    scanf("%f",&m);
    printf("Enter marks in physics:");
    scanf("%f",&p);
    float wm=(0.3)*m;
    float wp=(0.7)*p;
    float sum=wm+wp;
    printf("The weighted sum=%f",sum);
    return 0;
}