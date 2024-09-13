//vowel or consonant using switch//
#include<stdio.h>
int main(){
    char x;
    printf("Enter alphabet:");
    scanf("%c",&x);
    switch(x){
        case 'a':{
            printf("Vowel");
            break;
        }
        
        case 'e':{
            printf("Vowel");
            break;
        }
        
        case 'i':{
            printf("Vowel");
            break;
        }
        
        case 'o':{
            printf("Vowel");
            break;
        }
        
        case 'u':{
            printf("Vowel");
            break;
        }
        default:{
            printf("Consonant");
            break;
        }
    }
    return 0;
}