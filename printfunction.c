#include<stdio.h>
void minimum(int a,int b){
    int min;
    
    if(a<b){
    min = a;
    }else{
        min = b;
        
    }
    printf("%d\n",min);
    return ;

}
void maximun(int a, int b){
    int max;
    if(a<b){
        max=b;
    }else{
        max=a;
    }
    printf("%d\n",max);
    return ;
}

int main(){
    
   int a,b;
   scanf("%d",&a);
    scanf("%d",&b);
    minimum(a, b);
    maximun(a, b);
    return 0;
}