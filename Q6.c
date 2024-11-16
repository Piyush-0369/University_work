//Copying a string//
#include<stdio.h>
void main(){
    int c,n=99999,i=0;
    char A[n],B[n];
    printf("Enter your string\n");
    fgets(A,n,stdin);
    while(A[i]!='\0'){
        B[i]=A[i];
        i++;
    }
    B[i]='\0';
    printf("String copied sucessfully\n");
    printf("%s",B);
}