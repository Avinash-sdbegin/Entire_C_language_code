#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int rev = 0;
    
    while(a!=0){
        a = rev*10 + a%10;
           rev = a/10;
    }
    printf("%d",a);
    return 0;
}