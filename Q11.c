//Armstrong numbers 1 to n//
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,c,sum=0;
    printf("Enter the number you want to check:");
    scanf("%d",&x);
    y=x;
    z=x;
    for(c=0;x>0;c++){
        x=x/10;
    }
    for(int i=1;i<=c;i++){
        x=y%10;
        y=y/10;
        int k=pow(x,c);
        sum+=k;
    }
    if(sum==z){
        printf("%d is an armstrong number",z);
    }
    else{
        printf("%d is not an armstrong number",z);
    }
    return 0;
}