#include<stdio.h>
void change(int arr[]){
    arr[2] = 54;
    
}
int main(){
    int arr[5]={23,34,45,56,67};
    change( arr);
    printf("%d",arr[2]);
    return 0;
}