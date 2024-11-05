//Sum of odd and sum of even by switchcase//
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int x,sum=0;
    printf("Which loop would you like to use\n1.sum of odd\n2.sum of even\nEnter 1 or 2:");
    scanf("%d",&x);
    switch(x){
        case 1:{//sum of odd//
            int i=1;
            while(i<=n){
                sum+=i;
                i++;
                i++;
            }
            break;
        }
        case 2:{//using do while//
            int i=2;
            while(i<=n){
                sum+=i;
                i++;
                i++;
            break;
            }
        }
        default:{
            printf("Invalid input\n");
        }
    }
    return 0;
}