//Quadratic//
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x;
    int D;
    printf("Enter values of a,b,c as in ax^2+bx+c with +ve and -ve sign\n");
    scanf("%f  %f  %f",&a,&b,&c);
    float d=(b*b)-(4*a*c);
    if(d>0){
        D=1;
        x=sqrt(d);
    }
    else if(d==0){
        D=2;
    }
    else{
        D=3;
        x=sqrt(-d);
    }
    switch(D){
        case 1:{
            printf("The roots are real and unique\n");
            float r1,r2;
            r1=((-b)+x)/(2*a);
            r2=((-b)-x)/(2*a);
            printf("The value of the roots are %f and %f",r1,r2);
            break;
        }
        case 2:{
            printf("The roots are real and equal\n");
            float r;
            r=(-b)/(2*a);
            printf("The value of the root is %f",r);
            break;
        }
        case 3:{
            printf("The roots are imaginary\n");
            printf("The value of the roots are (%f + %fi)/%f and (%f - %fi)/%f",-b,x,2*a,-b,x,2*a);
            break;
        }
        default:{
            printf("Invalid input");
        }
    }
    return 0;
}