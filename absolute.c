#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int p =0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            p=1;
        }
    }
    if(p==1){
        printf("nto prime");
    }else{
        printf("prime no.");
    }
    return 0;
    }

