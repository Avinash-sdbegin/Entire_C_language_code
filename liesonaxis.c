#include<stdio.h>
int main(){
    int x;
    printf("enter the x-coordinate : ");
    scanf("%d",&x);

    int y;
    printf("enter the x-coordinate : ");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("lies at the origin");
     } else if (x==0 && y!=0){
        printf("lies on the y-axis");
     }else if (y==0 && x!=0){
        printf("lies on the x-axis");
    }else if (y>0 && x>0){
        printf("lies on the first Quadrant");
        }else if (y<0 && x>0){
        printf("Lies on the fourth quadrant");
        }else if (y>0 && x<0){
        printf("lies on the second quadrant");
        }else if (y<0 && x<0){
        printf("lies on the third quadrant");
       } else{
            printf("Invalid conbdition");
        }
        return 0;
}