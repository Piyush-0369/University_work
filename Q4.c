//fuction to reverse an integer//
#include<stdio.h>
int reverse(int x){
    int y=0,z;
    for(int i=0;x>0;i++){
        z=x%10;
        y=(y+z)*10;
        x=x/10;
    }
    y=y/10;
    return y;
}
int main(){
    int x,y;
    printf("Enter the number");
    scanf("%d",&x);
    y=reverse(x);
    printf("The reverse of number %d is %d",x,y);
    return 0;
}