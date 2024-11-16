//Number of spaces,digits,vowels,consonants//
#include<stdio.h>
void main(){
    int space=0,digit=0,vowel=0,consonant=0;
    char A[99999],ch;
    printf("Enter your sentence/word:\n");
    fgets(A,99999,stdin);
    for(int i=0;A[i]!='\0';i++){
        if(A[i]==' '){
            space++;
        }
        else if((int)A[i]>=48 && (int)A[i]<=57){
            digit++;
        }
        else if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U'){
            vowel++;
        }
        else if(((int)A[i]>=65 && (int)A[i]<=90) || (int)A[i]>=97 && (int)A[i]<=122){
            consonant++;
        }
    }
    printf("white spaces=%d\ndigit=%d\nvowel=%d\nconsonant=%d\n",space,digit,vowel,consonant);
}