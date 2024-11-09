//concatenation//
#include<stdio.h>
#include<string.h>
void main(){
    int c,n=99999,i=0,j=0;
    char A[n],B[n];
    printf("Enter your first sentence\n");
    fgets(A,n,stdin);
    printf("Enter your second sentence\n");
    fgets(B,n,stdin);
    while(A[i]!='\0')
        i++;
    i--;
    while(B[j]!='\0'){
        A[i]=B[j];
        j++;
        i++;
    }
    A[i]='\0';
    int len=strlen(A);
    printf("Length=%d\n",len);
    printf("The concatenated string is\n");
    printf("%s",A);
}