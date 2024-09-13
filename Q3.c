//Quadratic//
#include<stdio.h>
int main(){
    float a,b,c,x,y;
    int D;
    printf("Enter values of a,b,c as in ax^2+bx+c with +ve and -ve sign\n");
    scanf("%f  %f  %f",&a,&b,&c);
    float d=(b*b)-(4*a*c);
    if(d>0){
        int D=1;
    }
    else if(d==0){
        int D=2;
    }
    else{
        int D=3;
    }
    switch(D){
        case 1:{
            printf("The roots are real and unique");
            float r=1;
            break;
        }
        case 2:{
            printf("The roots are real and equal");
            break;
        }
        case 3:{
            printf("The roots are imaginary");
            break;
        }
    }

}