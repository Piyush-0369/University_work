//give example of pass by reference
#include<stdio.h>
void SUM(int *x,int *y,int *z){
    *z=*x+*y;
}
int main(){
    int x,y,sum=0;
    printf("Enter value of first number:");
    scanf("%d",&x);
    printf("Enter value of second number:");
    scanf("%d",&y);
    SUM(&x,&y,&sum);
    printf("%d+%d=%d",x,y,sum);
    return 0;
}