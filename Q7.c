#include<stdio.h>
void main(){
    FILE* file=fopen("test.txt","r");
    if(file==NULL)
        printf("File does not exist");
    else{
        char c;
        while((c=fgetc(file))!=EOF){
            putchar(c);
        }
    }
    fclose(file);
}
