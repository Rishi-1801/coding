#include<stdio.h>
int main(){
   int a=10,b=11;
    int *p,*q;
    p=&a;
    q=&b;
    printf("the value of b is %d\n",b);
    *q=*p;/*hence here we assigned the value in the address of b,so the value of b changed*/
printf("the value of b is %d",b);
return 0; 
}

