//sorting in lexicographical/dictionary order//
#include<stdio.h>
void main(){
    char temp;
    char A[9999];
    printf("Enter your string\n");
    fgets(A,9999,stdin);
    for(int i=0;A[i]!='\0';i++){
        for(int j=0;A[j]!='\0';j++){
            if((int)A[i]<(int)A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int k=0;A[k]!='\0';k++){
        printf("%c",A[k]);
    }
}