#include<stdio.h>
void reverse(int n,char A[n]){
    char x;
    for(int i=0;i<n-1;i++){
        x=A[i];
        A[i]=A[n-i-2];
        A[n-i-2]=x;
    }
}
int main(){
    int c,n=99999;
    char A[n];
    printf("Enter your word\n");
    fgets(A,n,stdin);
    n=strlen(A);
    reverse(n,A);
    printf("The reversed word is\n");
    for(int i=0;i<n-1;i++){
        printf("%c",A[i]);
    }
}