#include<stdio.h>
int main(){
    char a[100],b[100];
    int i,j,l=0,k=0,flag=0;
    printf("enter the 1st word:");
    gets(a);
    while(a[l]!='\0'){
        l++;
    }
    printf("enter the 2nd word:");
    gets(b);
    while(b[k]!='\0'){
        k++;
    }
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            if(a[j]>a[j+1]){
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            if(b[j]>b[j+1]){
                b[j]=b[j]+b[j+1];
                b[j+1]=b[j]-b[j+1];
                b[j]=b[j]-b[j+1];
            }
        }
    }
    if(k==l){
        flag=1;
        for(i=0;i<l;i++)
        {
            if(a[i]!=b[i]){
                flag=0;
                break;
            }
        }
    }
    else{
        printf("the both words are not anagrams");
    }
    if(flag)
     printf("the both words are anagrams");
     else
      printf("the both words are not anagrams");

}