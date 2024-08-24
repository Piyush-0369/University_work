#include <stdio.h>
int main(){
    char x[]={'a','e','i','o','u','A','E','I','O','U'};
    char y;
    int z=0;
    printf("Enter the character you wanna check:");
    scanf("%c",&y);
    for(int i=0; i<11; i++){
        if(y==x[i]){
            printf("%c is a vowel",y);
        }
        z++;
    }
    if(z==11){
        printf("%c is a consonant",y);
    }
    return 0;
}