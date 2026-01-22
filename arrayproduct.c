#include<stdio.h>
int main(){
    int product = 1;
    int arr[5]={23,45,56,77,89};
    for(int i=0;i<=4;i++){
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}