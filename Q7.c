#include<stdio.h>
void main(){
    int c;
        printf("\nWhich function would you like to use on the file\n1.Write\n2.Read\n3.Append\n4.Exit program\nEnter your choice:");
        scanf("%d",&c);
        if(c==1){
            FILE* file;
            file=fopen("sample.txt","w");
            char str[99999];
            printf("Enter what would you like to write in the file\n");
            fputs(str,99999,file);
            printf("Content added succesfully");
            fclose(file);
        }
        else if(c==2){
            FILE* file;
            file=fopen("sample.txt","r");
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
        else if(c==3){
            FILE* file;
            file=fopen("sample.txt","a");
            if(file==NULL)
                printf("File does not exist");
            else{
                char str[99999];
                printf("Enter what would you like to write in the file\n");
                fputs(str,99999,file);
                printf("Content added succesfully");
            }
            fclose(file);
        }
        else{
            printf("Invalid input try again");
    }
}