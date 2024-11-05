//Factorial//
#include <stdio.h>
int main(){
    int x,f=1;
    printf("Enter the number you want factorial for:");
    scanf("%d",&x);
    for(int i=1;i<(x+1);i++){
        f=f*i;
    }
    printf("The factorial is %d",f);
    return 0;
}
