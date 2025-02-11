/*pointers are the variables used to store the address of other variables
pointers are also known as derived datatype*/
#include<stdio.h>
int main(){
    int a=10,*p=&a;
    int b=9,*q=&b;
    int c;
    c=*q;
    printf("the value of a is %d:\n",a);
    printf("the value of a is %d:\n",*p);
    printf("the address of a is %u\n",p);/*%u indicates the unsigned integer and its size will be more than normal integer.*/
    printf("the adress of p is %u\n",&p);/*we cn even use %x to print address in hexadecimal form.*/
    printf("the value of b is %d:\n",*q);
    printf("the value of c is %d:\n",c);
    return 0;
}