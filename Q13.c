//Perfect numbers 1 to n//
#include<stdio.h>
int perfect(int i){
    int sum=0;
    for(int j=1;j<i;j++){
        if(i%j==0){
            sum+=j;
        }
    }
    if(sum==i){
        printf("%d is perfect number\n",i);
    }
}
int main(){
    int x,y,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        perfect(i);
    }
}