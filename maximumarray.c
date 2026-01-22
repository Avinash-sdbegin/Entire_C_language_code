#include<stdio.h>
int main(){
    int n;
    printf("ente rthe number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        
        printf("enter the elements : ");
        scanf("%d",&arr[i]);
    }
int max = arr[0];
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
int max2 =arr[0];
for(int i=0;i<n;i++){
    if(max2<arr[i] && arr[i]!=max){
        max2=arr[i];
    }
}


    printf("The maximum element is %d",max2);
    return 0;
}
