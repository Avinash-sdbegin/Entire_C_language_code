#include<stdio.h>
void greet(int x , int y){
        printf("%d", x+y);
    }
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
     greet(a,b);
     
  return 0;
}