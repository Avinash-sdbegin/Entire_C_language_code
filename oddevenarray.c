#include<stdio.h>
int main(){
    int arr[7]={2,3,4,5,6,7,8};
    int sum1 = 0;
    int sum2 = 0;
    for( int i=0;i<=6;i++){
        if(i%2==0){
            sum1 = sum1 +arr[i];
        }else{
            sum2 = sum2 + arr[i];
        }
      
    }
    printf("%d",sum1-sum2);
        return 0;
    }
    
