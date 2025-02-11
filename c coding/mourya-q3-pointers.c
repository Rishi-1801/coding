#include<stdio.h>
int main(){
    int *p,*q,n,i;
    printf("how many values do u want to enter:");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d elements :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=a;
    q=&a[n-1];
    while( p<q){
        *p=*q+*p;
        *q=*p-*q;
        *p=*p-*q;
        p++;
        q--;
    }
    printf("the reverse array is \n ");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    return 0;
}