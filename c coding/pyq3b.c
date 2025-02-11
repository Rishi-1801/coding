#include<stdio.h>
int swap(int *p,int *q){
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
int reverseswap(int a[],int n){
    int p=0,q=n-1;
    while(p<q){
        swap(&a[p],&a[q]);
        p++;
        q--;
    }
}
    int output(int a[],int n){
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
        }
    }

int main(){
    int i,n;
    printf("enter the number:");scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("now reversing the array");
    reverseswap(a,n);
    output(a,n);
    return 0;
}