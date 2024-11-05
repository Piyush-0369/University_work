//Calculator using switch//
#include <stdio.h>
int main(){
    float x,y,result;
    int z;
    printf("Enter value of first number:");
    scanf("%f",&x);
    printf("Enter value of second number:");
    scanf("%f",&y);
    printf("What function would you like to use\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter 1,2,3,4:");
    scanf("%d",&z);
    switch(z){
        case 1:
            {
                result=x+y;
                printf("The result is %f",result);
                break;
            }
        case 2:
            {
                result=x-y;
                printf("The result is %f",result);
                break;
            }
        case 3:
            {
                result=x*y;
                printf("The result is %f",result);
                break;
            }   
        case 4:
            {
                if(y!=0)
                    {
                        result=x/y;
                        printf("The result is %f",result);
                    }
                else
                    {
                        printf("Division by zero not possible");
                    }
                break;
            }
        default:
            {
                printf("Invalid input");
            }
    }
    return 0;
}