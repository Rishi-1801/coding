#include<stdio.h>
int main(){
   long int n,i,f=1;
    printf("enter the num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;
    }
    printf("%d",f);
}