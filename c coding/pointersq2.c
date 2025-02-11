/*concept of double pointer
double pointer is used to store the address of the another pointer*/
#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("the value of a =%d %d %d\n",a,*p,**q);
    **q=5;
    printf("the value of a= %d %d %d ",a,*p,**q);
}
/* we cannot add two pointers but we can add numbers to the pointers 
but we can subtract two pointers
when we subtract two pointers we will get value not the address*/