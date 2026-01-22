#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
     scanf("%d",&b);
     printf("enter the third number : ");
      scanf("%d",&c);
      if(a>b){
        if(a>c){
            printf("1 st numbe ris greatest");
        }else{
            printf("third number is greatest");
        }
        }else{
            if(b>c){
                printf("2nd one is greatest");
            }else{
                printf("3 rd is greatest");
            }
        }
        return 0;
        }
      