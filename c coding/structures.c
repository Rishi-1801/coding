#include<stdio.h>
struct student{
    int rollno;
    char name[30];
    float marks;
}s;
int main(){
    printf("enter the rollno ,name , marks ");
    scanf("%d  %s  %f",&s.rollno,s.name,&s.marks);
    printf(" the student information is:");
    printf(" %d %s %f",s.rollno,s.name,s.marks);

}
/* unions are also same but structures offers continues memory locations of 9 bytes in this program
if the same program is written with unions the memory location would highest of data structures present in it i.e 4 bytes
but it does not all all 3 but prints only only the latest value*/