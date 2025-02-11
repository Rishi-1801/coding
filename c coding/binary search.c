#include<stdio.h>
int main(){
    int min,max,ele,i,mid,n,f=0;
    printf("how many elements do u want to enter :");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&ele);
    min=0;
    max=n-1;
    while(min<=max){
        mid=(min+max)/2;
        if(ele==a[mid]){
            f++;
            break;
        }
        else if(ele>a[mid]){
            min=mid+1;
        }else{
            max=mid-1;
        }
    }
            if(f==1)
        printf("element found at %d ",mid);
}