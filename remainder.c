#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter the first element : ");
    scanf("%d",&a);
    printf("enter the second element : ");
    scanf("%d",&b);
    int q;
    q=a/b;
    int p =a-(b*q);
    printf("%d",p);
    return 0;
}