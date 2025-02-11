#include<stdio.h>
int main(){
    int i,j,k,n,c;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=i;
        for(k=1;k<n-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i+1;j++){
            printf("%d",c);
            c--;
            
        }
        printf("\n");
    }
     
}