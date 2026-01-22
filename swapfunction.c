#include<stdio.h>
void swap(int a, int b){
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\n\nthe value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    return ;
}
int main(){
    int a,b;
    printf("enter the value of  a : ");
    scanf("%d",&a);
     printf("enter the value of  b : ");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
