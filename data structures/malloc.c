#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,*ptr;
    printf("enter the num:");scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("%d\n",(ptr+i));
    }
   for(i=0;i<n;i++){
        printf("%d\t",ptr[i]);
    }
    free(ptr);
}