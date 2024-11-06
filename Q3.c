//reversing words//
#include<stdio.h>
void reverse(int n,char A[n]){
    char x;
    for(int i=0;i<(n-1)/2;i++){
        x=A[i];
        A[i]=A[n-i-2];
        A[n-i-2]=x;
    }
}
int length(int n,char A[n]){
    int x=0;
    for(int i=0;A[i]!='\0';i++){
        x++;
    }
    return x;
}
int main(){
    int c,n=99999,len;
    char A[n];
    printf("Enter your word\n");
    fgets(A,n,stdin);
    len=length(n,A);
    reverse(len,A);
    printf("The reversed word is\n");
    for(int i=0;i<len-1;i++){
        printf("%c",A[i]);
    }
}
