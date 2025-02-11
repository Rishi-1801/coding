#include<stdio.h>
int main(){
    int i,j,m,n,temp;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);  
    }
    for(i=0;i<n-1;i++){
        m=i;
        for(j=i+1;j<n;j++){
            if(a[m]>a[j])
            m=j;
        }
        if(i!=m){
            temp=a[m];
            a[m]=a[i];
            a[i]=temp;
        }
    }
    printf("the sorted array is :");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}