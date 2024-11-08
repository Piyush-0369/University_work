//frequency of a character//
#include<stdio.h>
void main(){
    char A[99999],ch;
    printf("Enter your sentence/word");
    fgets(A,99999,stdin);
    printf("which character frequency do you want:\n");
    scanf("%c",&ch);
    int f=0;
    for(int i=0;A[i]!='\0';i++){
        if(A[i]==ch)
            f++;
    }
    printf("The character %c comes up %d times in give string",ch,f);
}