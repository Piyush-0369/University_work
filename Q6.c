#include <stdio.h>
int main(){
    float d;
    printf("Enter distance in KM:");
    scanf("%f",&d);
    float m= (d*1000);
    float cm= (m*100);
    float f= (d*3280.84);
    float i= (d*39370.1);
    printf("M=%f\nCM=%f\nFeet=%f\nInch=%f",m,cm,f,i);
    return 0;
}