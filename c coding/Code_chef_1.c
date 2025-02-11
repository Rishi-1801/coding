#include<stdio.h>
int main(){
    int i=0,c=0;
    char str[8],a[8]="ADVITIYA";
    printf("enter the word in CAPITAL LETERRS:");
    gets(str);
    while(i<=7){
        
        if(a[i]-str[i]>0){
        c=c+a[i]-str[i];
        }
        else if(a[i]-str[i]<0){
            c=c+26+a[i]-str[i];
        }
        i++;
    }
    printf("the number of turns are :%d",c);
    return 0;
}