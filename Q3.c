#include<stdio.h>
int main(){
    float P,R,T,SI;
    printf("Enter principal ammount:");
    scanf("%f",&P);
    printf("Enter rate of intrest:");
    scanf("%f",&R);
    printf("Enter Time in years:");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("The Intrest in %0.2f years will be=%0.2f",T,SI);
    return 0;
}