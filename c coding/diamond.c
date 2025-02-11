#include<stdio.h>
int main(){
    int i,j,n,k,z;
    printf("enter the no of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i<=(n+1)/2){
        for(j=1;j<=((n+1)/2-i);j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        }
        if(i>(n+1)/2){
            for( k=(n+1)/2+1;k<=i;k++){
                printf(" ");
            }
            for(j=2*n-1;j>=2*i-1;j--){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}