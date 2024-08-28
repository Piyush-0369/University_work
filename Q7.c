//LCM//
#include <stdio.h>
int main(){
    int x,y,z,lcm;
    printf("Enter two numbers you wanna check");
    scanf("%d %d",&x,&y);
    z=(x>y) ? x : y;
    lcm=z;
    while ((lcm%x!=0 || lcm%y!=0)){
        lcm+=z;
    }
    printf("The lcm is %d",lcm);
    return 0;
}