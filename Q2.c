//pointer arithematic
#include<stdio.h>
int main(){
    int a=10;
    int *ptr=&a;
    printf("Original pointer = %u\n",ptr);
    ptr++;
    printf("After increment pointer = %u\n",ptr);
    ptr--;
    printf("After decrement pointer = %u",ptr);
}