//reverse a number//
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the number you want to reverse:");
    scanf("%d",&x);
    printf("The reverse of %d is ",x);
    for(int i=1;x>0;i++){
        y=x%10;
        x=x/10;
        printf("%d",y);
    }
    return 0;
}