//area and parametre//
#include <stdio.h>
int main(){
    float l;
    float b;
    printf("Enter length of rectangle:");
    scanf("%f",&l);
    printf("Enter breadth of rectangle:");
    scanf("%f",&b);
    float area=l*b;
    float parametre=2*(l+b);
    printf("The area of recangle is %f and paramentre is %f",area,parametre);
    return 0;
}