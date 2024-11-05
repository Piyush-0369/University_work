//triangle validity//
#include <stdio.h>
int main(){
    float x,y,z;
    printf("Enter three angles\n");
    scanf("%f\n%f\n%f",&x,&y,&z);
    if( x<=0 || y<=0 || z<=0){
        printf("The triangle is invalid");
    }    
    else{
        if(x+y+z==180){
            printf("The triangle is valid");
        }
        else{
            printf("The triangle is invalid");
        }
        return 0;
    }
}
