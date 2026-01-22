#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0){
            printf("divisible by bopth 5 and 3");
        }else{
            printf("not divisible by 5 and 3");
    }
    }
    return 0;
}