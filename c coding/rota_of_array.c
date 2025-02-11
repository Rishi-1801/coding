#include<stdio.h>
int main(){
    int i,n,k,t;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number of steps :");
    scanf("%d",&k);
    for(i=0;i<k;i++){
        t=a[0];
        for(int j=0;j<n;j++){
            a[j]=a[j+1];
        }
        a[n-1]=t;
    }
    printf("array after rotation of %d steps:",k);
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
   
