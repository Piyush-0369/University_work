//even numbers 1-100//
#include<stdio.h>
int main(){
    int i=2,x;
    while(1==1){
        printf("Which loop would you like to use\n1.while\n2.do_while\nEnter 1 or 2:");
        scanf("%d",&x);
        if(x==1){//using while//
            while(i<=100){
                printf("%d\n",i);
                i++;
                i++;
            }
            break;
        }
        else if(x==2){//using do while//
            do{
                printf("%d\n",i);
                i++;
                i++;
            }while(i<=100);
        
            break;
        }
        else{
            printf("Invalid input try again\n");
        }
    }
    return 0;
}