#include<stdio.h>
#include<math.h>
int sub(int a, int b){
    return (a-b);
}
int srt(int a){
    return sqrt(a);
}
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    int b;
    printf("enter the number : ");
    scanf("%d",&b);
    int ans = sub(a,b);
    int ans2= srt(a);
    printf("%d\n",ans);
     printf("%d\n",ans2);
    return 0;
}