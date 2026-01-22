#include<stdio.h>
int main(){
    int sum =0;
    int arr[5]={23,45,67,78,90};
    
    for(int i=0;i<=4;i++){
        sum = sum + arr[i];

    }
    printf("%d",sum);
    return 0;
}