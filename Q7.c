//Checking string for pallindrome//
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
void reverse(int n,char A[n]){
    char B[n];
    int x=1;
    for(int i=0;i<n-1;i++){
        B[i]=A[n-i-2];
    }
    for(int j=0;j<n-1;j++){
        if(A[j]==B[j]){
            continue;
        }
        else{
            x=0;
            break;
        }
    }
    if(x==1){
        printf("The given string is a pallindrome");
    }
    else{
        printf("The give string is not a pallindrome");
    }
}
int main(){
    int c,n=99999;
    char A[n];
    printf("Enter your word\n");
    fgets(A,n,stdin);
    n=strlen(A);
    printf("Which function would you like to use\n1.Pallindrome check\n2.Pallindrome check by reversing the string\n");
    scanf("%d",&c);
    if(c==1){
        pallindrome(n,A);
    }
    else if(c==2){
        reverse(n,A);
    }
    else{
        printf("Invalid choice");
    }
    return 0;
}