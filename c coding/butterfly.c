#include<stdio.h>
int main(){
int i,j,n;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i<=(n+1)/2){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=(n+1)/2-i;j++){
            printf(" ");
        }
        for(j=1;j<=(n+1)/2-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
    }
    if(i>(n+1)/2){
        for(j=n;j>=i;j--){
            printf("*");
        }
        for(j=(n+1)/2+1;j<=i;j++){
            printf(" ");
        }
         for(j=(n+1)/2+1;j<=i;j++){
            printf(" ");
        }
        for(j=n;j>=i;j--){
            printf("*");
        }
    }
    printf("\n");
    }
    return 0;
}
