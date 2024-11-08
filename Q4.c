//length of a string//
#include<stdio.h>
void main(){
    int c,n=99999,len=0;
    char A[n];
    printf("Enter your word\n");
    fgets(A,n,stdin);
    for(int i=0;A[i]!='\0';i++){
        len++;
    }
    printf("Length of a string=%d",len);
}