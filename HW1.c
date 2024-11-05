//basic arithematic//
#include <stdio.h>
int main(){
    float x;
    float y;
    printf("Enter the value of first number=");
    scanf("%f",&x);
    printf("Enter the value of second number=");
    scanf("%f",&y);
    float addition=x+y;
    float subtraction=x-y;
    float multiplication=x*y;
    float division=x/y;
    printf("For x=%f and y=%f\nThe sum =%f\nThe difference=%f\nThe product=%f\nThe quotient=%f",x,y,addition,subtraction,multiplication,division);
    return 0;
}