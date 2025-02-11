//understanding the pointers through increment and decrement
#include<stdio.h>
int main(){
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    q=&a[0]+3;
    printf("%d %d %d\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)++);
    q--;
    printf("%d\n",(*(q+2))--);
    printf("%d\n",*(p+2)-2);
    printf("%d\n",*(p++-2)-1);
}
/*if we didn't intialsize the pointer then by derefrencing it the program can crash
null pointers are used for this 
when two null pointers are used they both are equal 
if we allocate the memory dynamically by using malloc function it arranges memory at the run time, the if we free the pointer 
then the memory is erased but the pointer stores the address here comes the case of dandling pointer.*/