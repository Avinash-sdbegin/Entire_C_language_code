#include<stdio.h>
int main(){
    int a,b,c,d;
     
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
     scanf("%d",&b);
     printf("enter the third number : ");
      scanf("%d",&c);
       printf("enter the fourth number : ");
      scanf("%d",&d);
      if(a>b&&a>c&&a>d){
        printf("1st is greatest");
      }else if(b>a && b>c &&b>d) {
       printf("2nd is greatest");
      }else if(c>a && c>b &&c>d) {
       printf("3rd is greatest");
       }else if(d>a && d>b && d>c) {
       printf("4th is greatest");
}
return 0;
}