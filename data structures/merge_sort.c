#include<stdio.h>
 
 void merge(int* a,int lb,int mid,int ub){
    int i,j,k,b[ub-lb+1];
    i=lb;
    j=mid+1;
    k=0;
    while(i<=mid && j<=ub){
        if(a[i]<=a[j]){
            b[k++]=a[i++];
        }else{
            b[k++]=a[j++];
        }
    }
        while(j<=ub){
            b[k]=a[j];
            j++;k++;
        }
        while(i<=mid){
            b[k]=a[i];
            i++;k++;
        }
    for(k=0,i=lb;i<=ub;k++,i++){
        a[i]=b[k];
    }
}
void mergesort(int* a, int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
    int n;
    printf("enter the num:");scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("the sorted array is :");
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}