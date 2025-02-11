//encryption using pointers 
#include<stdio.h>
int main(){
    char msg[30], *ptr;
    int k;
    printf("enter the message:");
    gets(msg);
    ptr=msg;
    printf("enter the key= ");
    scanf("%d",&k);
    while(*ptr!='\0'){
       printf("%c",*(ptr++)+k);
    }
}
//encryption without using pointers
/*#include<stdio.h>
int main(){
    char msg[30];
    int k,i;
    printf("enter the message:");
    gets(msg); 
    printf("enter the key=");
    scanf("%d",&k);
    for(i=0;msg[i]!='\0';i++){
        printf("%c",msg[i]+k);

    }
}*/