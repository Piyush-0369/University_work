//remove char except alphabet//
#include<stdio.h>
void main(){
    char A[99999],ch;
    printf("Enter your sentence/word");
    fgets(A,99999,stdin);
    for(int i=0;A[i]!='\0';i++){
        if(((int)A[i]>=65 && (int)A[i]<=90)||((int)A[i]>=97 && (int)A[i]<=122)){
        }
        else{
            A[i]=' ';
        }
    }
    printf("The new string is\n %s",A);
}