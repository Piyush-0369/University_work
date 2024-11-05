//Palindromes(example=121 or 1331)//
#include<stdio.h>
int main(){
    int x,y=0,z;
    printf("Enter the number you wanna check:");
    scanf("%d",&x);
    z=x;
    while(x>0){
        y+=(x%10);
        y=y*10;
        x=x/10;
    }
    y=y/10;
    if(y==z){
        printf("%d is a pallindrome",z);
    }
    else{
        printf("%d is not a pallindrome",z);
    }
    return 0;
}