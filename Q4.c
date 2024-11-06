//pallindrome, length, concatenation//
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
int main(){
    int c,n;
    char A[99999];
    printf("Which function would you like to use\n1.Pallindrome check\n2.Length of string\n3.String concatenation\nEnter your choice:");
    scanf("%d",&c);
    if(c==1){
        printf("Enter your string\n");
        fgets(A,n,stdin);
        n=strlen(A);
        pallindrome(n,A);
    }
    else if(c==2){
        printf("Enter your string\n");
        fgets(A,n,stdin);
        n=strlen(A);
        printf("The length of given string is %d",n);
    }
    else if(c==3){
        printf("Enter your string\n");
        fgets(A,n,stdin);
        n=strlen(A);
        int m=99999;
        char B[m];
        printf("Enter your second string\n");
        fgets(B,m,stdin);
        strcat(A,B);
        printf("%s is the new string",A);
    }
}
