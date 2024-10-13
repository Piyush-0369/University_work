#include<stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    printf("The factorial is %d",factorial);
    return 0;
}
