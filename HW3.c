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
    while(choice!=1 || choice !=2){
        printf("Enter valid choice 1 or 2");
    }
    if(choice==1){
        ntemp=(temp*1.8)+32;
        printf("The converted temprature is=%f",ntemp);
    }
    else{
        ntemp=(temp-32)/(1.8);
        printf("The converted temprature is=%f",ntemp);
    }
    return 0;
}