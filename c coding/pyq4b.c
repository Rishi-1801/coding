#include<stdio.h>
int main(){
    char check[30],*p;
    printf("enter the string");
    gets(check);
    p=check;
    while(*p!='\0'){
        if(*p=='@')
        printf("the given string is valid");
        p++;
    }
}