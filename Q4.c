#include<stdio.h>
int main(){
    int c;
    float F,C;
    printf("What would you like to do\n1.Celsius to Farenhiet\n2.fareheit to Celsius\n");
    scanf(" %d",&c);
    if(c==1){
        printf("Enter the temprature in Celsius:\n");
        scanf("%f",&C);
        F=((9*C)/5)+32;
        printf("The converted temp is %0.2f",F);
    }
    else if(c==2){
        printf("Enter the temprature in Farenheit\n");
        scanf("%f",&F);
        C=((5)*(F-32))/9;
        printf("The converted temp is %0.2f",C);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}