#include <stdio.h>
int main(){
    float m,h;
    printf("Enter your weight in Kg");
    scanf("%f",&m);
    printf("Enter your height in cm");
    scanf("%f",&h);
    float bmi=m/(h*h);
    if(bmi<=0){
        printf("Incorrect values");
    }
    else if(bmi<18.5){
        printf("You are underweight");
    }
    else if(bmi<24.9){
        printf("Your have normal weight");
    }
    else if(bmi<29.9){
        printf("You are overweight");
    }
    else{
        printf("You are obese");
    }
} 
