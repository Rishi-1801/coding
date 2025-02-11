/*#include<stdio.h>
int main(){
    int i,n,k,t,sum,c;
    printf("enter the number: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the sum: ");
    scanf("%d",&k);
    for(i=0;i<n && sum!=k;i++){
        c=0;
        sum=0;
        for(int j=i;j<n && sum!=k;j++){ 
        sum=sum+a[j]; 
        c++;
    }
    t=i;
        }
        printf("%d",c);
    printf("the longest sub array with the given sum is:");
    for(i=t;i<c+t;i++){
        printf("%d  ",a[i]);
    }
}*/
//this code excute but but does not check for long sub array
//the following is correct code
#include<stdio.h>
int main(){
    int i,n,k,sum,max_len=0,t;
    printf("enter the number: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d array elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the sum: ");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            if(sum==k){
                if(max_len<j-i+1){
                    max_len=j-i+1;
                    t=i;
                }
            }
        }
    }
    if(max_len>0){
        printf("the longest sub array with given sum is:");
        for(i=t;i<t+max_len;i++){
            printf("%d",a[i]);
        }
    }else{
        printf("there does not exist sub array with given sum");
    }
}