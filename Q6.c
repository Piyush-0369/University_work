//GCD using Eucledean algorithm//
#include <stdio.h>
int GCD(int x,int y){
    int a=x,b=y;
    while(1){
        if(a==b){
            break;
        }
        else if(a>b){
            a=a-b;    
        }
        else{
            b=b-a;
        }
    }
    printf("The GCD for %d and %d is %d",x,y,a);
}
int main(){
    int x,y;
    printf("Enter two numbers for which you want the GCD\nNumber 1=");
    scanf("%d",&x);
    printf("Number2=");
    scanf("%d",&y);
    GCD(x,y);
    return 0;
}
