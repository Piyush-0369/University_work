#include<stdio.h>
int main(){
    float x,y;
    char c;
    printf("Enter two numbers\n");
    scanf("%f %f",&x,&y);
    printf("Enter what operation you want to do(+,-,*,/):");
    scanf(" %c",&c);
    if(c=='+'){
        printf("The sum is %0.2f",x+y);
    }
    else if(c=='-'){
        printf("The difference is %0.2f",x-y);
    }
    else if(c=='*'){
        printf("The product is %0.2f",x*y);
    }
    else if(c=='/' && y!=0){
        printf("The quotient is %0.2f",x/y);
    }
    else{
        printf("Invalid input");
    }
    return 0;
}