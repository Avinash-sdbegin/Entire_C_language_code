#include<stdio.h>
int main(){
    int x;
  
    printf("enter the number : ");
    scanf("%d",&x);
    int num = 0;
    int arr[7]={2,3,4,5,6,7,8};
    for(int i=0;i<=6;i++){
        for(int j=0;j<=6;j++){
            if(arr[i] + arr[j]==x){
               
              printf("%d %d ", arr[i],arr[j]);
              printf("\n");
              num++;
              
            }
        }
        
        }    
        printf("%d",num);
        return 0;
}