#include<stdio.h>

int fn(int a){
    
    return 2*a*a-1;
}
int fn1(int b){
    for(int i=2;i<b;i++){
        if(b%i==0){
            return 0;break;
        }
        }
        return b;
    }


int main(){
    int i,n,x,y;
    printf("enter the number:");scanf("%d",&n);
    for(i=2;i<n;i++){
        x=fn(i);
        y=fn1(x);
        if(x==y){
            printf("%d  ",i);
        }
    }
    return 0;
}
