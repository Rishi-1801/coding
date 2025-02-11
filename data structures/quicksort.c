#include<stdio.h>
void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int* a,int lb,int ub){
    int st=lb;
    int pivot=a[lb];
    int end=ub;
    while(st<end){
        while(a[st]<=pivot){
            st++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(st<end){
            swap(&a[end],&a[st]);
        }
    }
    swap(&a[lb],&a[end]);
    return end;
}
void quicksort(int* a,int lb,int ub){
    if(lb<ub){
        int loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
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
    quicksort(a,0,n-1);
    printf("the sorted array is :");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }

}