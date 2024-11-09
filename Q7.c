#include<stdio.h>
void main(){
    int x=2;
    FILE* file=fopen("test.txt","r");
    if(file==NULL)
        printf("File does not exist");
    else{
        char c;
        while((c=fgetc(file))!=EOF){
            printf("%c",c);
        }
    }
    fclose(file);
}