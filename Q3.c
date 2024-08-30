//area>perimere or not for rectangle//
#include <stdio.h>
int main(){
    float l,b;
    printf("Enter length of rectangle:");
    scanf("%f",&l);
    printf("Enter breadth of rectangle:");
    scanf("%f",&b);
    float area=l*b;
    float perimetre=2*(l+b);
    if(area>perimetre){
        printf("Area is greater than perimetre");
    }
    else if(area<perimetre){
        printf("Area is less than perimetre");
    }
    else{
        printf("Area and perimetre are equal");
    }
    return 0;
}
