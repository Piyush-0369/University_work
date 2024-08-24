#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    printf("Enter third number:");
    scanf("%d",&z);
    if (x>y && x>z){
        printf("%d is largest number",x);
    }
    else if (y>x && y>z){
        printf("%d is largest number",y);
    }
    else if (z>y && z>x){
        printf("%d is largest number",z);
    }
    else{
        printf("All given number are equal");
    }
    return 0;
}