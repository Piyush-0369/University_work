//Multiplication table//
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter the number you want multiplication table of:");
    scanf("%d",&x);
    y=10;
    /*
    Extra feature
    printf("Till which number do you want multiplication table?\n");
    scanf("%d",&y);
    */
    for(int i=1;i<=y;i++){
        printf("%d X %d = %d\n",x,i,x*i);
    }
}