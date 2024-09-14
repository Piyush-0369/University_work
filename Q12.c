//fibonacci series//
#include<stdio.h>
int main(){
    int x=0,y=1,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d,",x);
            x=x+y;
        }
        else{
            printf("%d,",y);
            y=y+x;
        }
    }
    return 0;
}