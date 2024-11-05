//SI calculator//
#include <stdio.h>
int main(){
    float P;
    float r;
    float T;
    printf("Enter the principal amount:");
    scanf("%f",&P);
    printf("Enter the rate of intrest:");
    scanf("%f",&r);
    printf("Enter time(in years):");
    scanf("%f",&T);
    float R=r/100;
    float SI=P*R*T;
    printf("The simple intrest on the principal=%f on rate=%f for %f years is =%f",P,R,T,SI);
    return 0;
}