//Reverse numbering//
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int i=n;
    int x;
    while(1==1){
        printf("Which loop would you like to use\n1.while\n2.do_while\nEnter 1 or 2:");
        scanf("%d",&x);
        if(x==1){//using while//
            while(i>0){
                printf("%d\n",i);
                i--;
            }
            break;
        }
        else if(x==2){//using do while//
            if(i>0){
                do{
                    printf("%d\n",i);
                    i--;
                }while(i>0);
            }
            break;
        }
        else{
            printf("Invalid input try again\n");
        }
    }
    return 0;
}