//prime numbers 1 to n//
#include<stdio.h>
int prime(int i){
    int j=2;
    while(j<i){
        if(i%j==0){
            break;
        }
        else if(j==(i-1)){
            printf("%d is prime\n",i);
            break;
        }
        else{
            j++;
        }
    }
    return 0;
}
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    if(n>2){
        printf("2 is prime\n");
    }
    for(int i=2;i<=n;i++){
        prime(i);
    }
    return 0;
}