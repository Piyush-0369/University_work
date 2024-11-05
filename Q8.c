//largest number between 3//
#include <stdio.h>
int main(){
    int x;
    int y;
    int z;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    printf("Enter the third number:");
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