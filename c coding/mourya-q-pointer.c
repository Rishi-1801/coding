#include<stdio.h>
#include<string.h>
int main(){
    char small[30],*big;
    printf("enter the word in small letters:");
    gets(small);
    big=small;
    while(*big!='\0'){
        if('a'<=*big && 'z'>=*big)
        printf("%c",*(big)-32);
        else
        printf("%c",*big);
        big++;
    }
return 0;
}