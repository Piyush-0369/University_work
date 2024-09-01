//temp conversion//
#include <stdio.h>
int main(){
    int choice;
    float temp;
    printf("What would you like to do\n1.Celsius to Farenheit\n2.Farenheit to Celsius\nEnter your choice(1 or 2):");
    scanf("%d",&choice);
    printf("Enter temprature:");
    scanf("%f",&temp);     
    float ntemp;
    ntemp= choice==1 ? (temp*1.8)+32 : (temp-32)/(1.8);
    printf("The converted temprature is=%f",ntemp);
    return 0;
}