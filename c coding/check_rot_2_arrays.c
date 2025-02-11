#include<stdio.h>
int main(){
    int i,j,n,t,flag=1;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements of another array:");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        t=a[0];
        for(j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=t;
        flag =1;
        for(j=0;j<n;j++){
            if(a[j]!=b[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            break;
        } 
    }
    if(flag==1)
    printf("yes, the array is rotation of another array");
    else
    printf("no, the array is not rotation of another array");
    return 0;
}