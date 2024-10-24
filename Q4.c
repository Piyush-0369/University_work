#include<stdio.h>
#include<string.h>
void pallindrome(int n,char A[n]){
    int x=1;
    for(int i=0;i<((n-1)/2);i++){
        if(A[i]==A[n-i-2]){
            continue;
        }
        else{
            x=0;
        }
    }
    if(x==1){
        printf("The given string is a pallindrome");
    }
    else{
        printf("The given string is not a pallindrome");
    }
}
