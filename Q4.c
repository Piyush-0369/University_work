//points on line or not//
#include <stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    printf("Enter value of x1 and y1");
    scanf("%f\n%f",&x1,&y1);
    printf("Enter value of x2 and y2");
    scanf("%f\n%f",&x2,&y2);
    printf("Enter value of x3and y3");
    scanf("%f\n%f",&x3,&y3);
    float m1=(y2-y1)/(x2-x1);
    float m2=(y3-y2)/(x3-x2);
    if((x1==x2 && y1==y2)||(x1==x3 && y1==y3)||(x2==x3 && y2==y3)){
        printf("Two or more points are same enter unique points");
    }
    else{
        if(m1==m2){
            printf("The three points lie on same line");
        }
        else{
            printf("The three points dont lie on same line");
        }
    }
}
