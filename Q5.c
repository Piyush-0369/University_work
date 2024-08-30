#include <stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter length of side:");
    scanf("%f",&s1);
    printf("Enter length of side:");
    scanf("%f",&s2);
    printf("Enter length of side:");
    scanf("%f",&s3);
    if((s1+s2)>s3 && (s2+s3)>s1 && (s1+s3)>s2){
        if(s1==s2 && s2==s3){
            printf("The Triangle is equilateral");
        }
        else if(s1==s2 || s2==s3 || s1==s3){
            printf("The triangle is isosceles");
        }
        else{
            printf("The triangle is scalene");
        }
    }
    else{
        printf("The triangle is invalid");
    }
    return 0;
}
