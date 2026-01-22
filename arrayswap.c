#include<stdio.h>
void swap(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main(){
    int arr[2]={34,56};
    swap(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}
//jab function call kar arahe ho toh array k name
//and funtion declaration main int alaga kar karna hoga