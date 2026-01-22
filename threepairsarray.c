#include<stdio.h>
int main(){
    int num =0;
    int x;
    printf("enter the lement : ");
    scanf("%d",&x);
    int arr[9]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        for(int k =0;k<9;k++){
        if(arr[i] + arr[j] + arr[k] == x){
            printf("%d %d %d",arr[i],arr[j],arr[k]);
            printf("\n");
            num++;
        }
        }
    }
}
printf("%d",num);
return 0;
}