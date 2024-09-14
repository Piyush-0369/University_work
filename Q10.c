//prime numbers 1 to n//
#include<stdio.h>
int prime(i){
    int j=2;
}
int main(){
    int x,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        x=prime(i);
        printf("%d is prime",x);
    }
}