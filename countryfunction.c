#include<stdio.h>

void pakistan(){
    printf("pakistan enemy india\n");
    return;
}
void australia(){
    printf("england looted india\n");
    pakistan();
     return;
}
void england(){
    printf("england looted india\n");
    australia();
     return;
}
 

int main(){
    printf("1 st are Indians\n");
    england();
    return 0;
}
