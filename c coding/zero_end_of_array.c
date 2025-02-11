#include<stdio.h>
int main(){
    int i,n,t;
    printf("enter the number:");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 
    for(i=0;i<n;i++){
        for(int k=0;k<n;k++)
        {
            if(a[k]==0){
                t=a[k];
                for(int j=k;j<n-1;j++)
                a[j]=a[j+1];
                a[n-1]=t;
            }
        }
        } 
    
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}

/*method 2
#include<stdio.h>
int main(){
    int i,n,j=0;
    printf("enter the number: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=0)
        a[j++]=a[i];
    }
    while(j<n){
        a[j++]=0;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}*/