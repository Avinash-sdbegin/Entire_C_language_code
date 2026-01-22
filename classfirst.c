#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
struct node*left;
struct node*right;
};
struct node*createnode(int data){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode->left = NULL;
newnode->right =NULL;
return newnode;
}
int maxdepth(struct node*root){
    if(root==NULL){
        return 0;
    }
    
    
    int leftdepth = maxdepth(root->left);
    int rightdepth = maxdepth(root->right);
    return((leftdepth>rightdepth ? leftdepth: rightdepth) + 1);
    
}
int main(){
   struct node* root =createnode(1);
        root->left = createnode(2);
        root->right = createnode(3);
        root->left->right = createnode(4);
        root->right->left = createnode(5);
        printf("The maximum depth of the binary tree is %d\n",maxdepth(root));
        return 0;
    }
        

