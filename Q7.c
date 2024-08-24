//LCM//
#include <stdio.h>
int prime(x){
    for(int i=2; i<(x/2)+2; i++){
        if(x%i==0){
            break;
        }
        else{
            return x;
        }
    }
    return 0;
}
int main(){
    int p,q,r,s,x,y;
    printf("Enter first number");
    scanf("%d",&x);
    printf("Enter second number");
    scanf("%d",&y);
    int a=prime(x);
    int b=prime(y);
    if(a*b!=0){
        printf("The LCM is %d",a*b);
    }
}