//Natural numbers till n//
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}