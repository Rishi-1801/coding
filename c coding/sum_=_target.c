#include<stdio.h>
int main(){
    int i,n,k;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the target number:");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==k)
            printf("(%d,%d)\t",a[i],a[j]);
        }
    }
    return 0;
}