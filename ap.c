#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=4;i<=n;i=i+4){
        printf("%d",i);
    }
    return 0;
}