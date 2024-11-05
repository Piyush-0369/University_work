//quadratic_solutions//
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    printf("Enter value of c");
    scanf("%d",&c);
    float d=b^2 -4*a*c;
    if(d>0){
        printf("There are 2 uniquie solutions");
    }
    else if(d=0){
        printf("There are 2 equal solutions");
    }
    else{
        printf("There are 2 complex solution");
    }
    return 0;
}
