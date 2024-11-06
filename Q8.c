//multi level switch calculator//
#include <stdio.h>
#include <math.h>
void add(float x, float y) {
    printf("Result: %.2f\n", x + y);
}
void subtract(float x, float y) {
    printf("Result: %.2f\n", x - y);
}
void multiply(float x, float y) {
    printf("Result: %.2f\n", x * y);
}
void divide(float x, float y) {
    if (y == 0) {
        printf("Error: Division by zero!\n");
    } else {
        printf("Result: %.2f\n", x / y);
    }
}
void exponent(float x, float y) {
    printf("Result: %.2f\n", pow(x, y));
}
int main(){
    int choice1, choice2;
    float x,y,z=1;
    while(1){
        if(z==0){
            break;
        }
        printf("1.Operations\n");
        printf("2.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice1);
        switch (choice1) {  
            case 1:
                while(1){
                    printf("1.Add\n");~
                    printf("2.Subtract\n");
                    printf("3.Multiply\n");
                    printf("4.Divide\n");
                    printf("5.Exponent\n");
                    printf("6.Exit operation menu\n");
                    printf("Enter your choice(1-6):");
                    scanf("%d", &choice2);
                    if (choice2>0 && choice2<6) {
                        printf("Enter first number: ");
                        scanf("%f", &x);
                        printf("Enter second number: ");
                        scanf("%f", &y);
                        switch (choice2) {
                            case 1:
                                add(x, y);
                                break;
                            case 2:
                                subtract(x, y);
                                break;
                            case 3:
                                multiply(x, y);
                                break;
                            case 4:
                                divide(x, y);
                                break;
                            case 5:
                                exponent(x, y);
                                break;
                        }
                    } else if (choice2 == 6) {
                        break;
                    } else {
                        printf("Invalid choice. Try again\n");
                    }
                }

            case 2:
                z=0;
                break;
            default:
                printf("Invalid choice.Try again\n");
        }
    } 
    return 0;
}
