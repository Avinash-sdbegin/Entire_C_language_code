#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct data*next;
};
struct node*head= NULL;
//Function declarations
void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();
int main(){
    int choice=0;
    while(choice!=9){
        printf("\n\n*********Main Menu******\n");
        printf("\nchoose one option from the following list: \n");
        printf("\n===========================\n");
        printf("1.Insert at beginning\n");
        printf("2.Insert at last\n");
        printf("3.insert at any random location\n");
        printf("4.delete from beginning\n");
        printf("5.delete from last\n");
        printf("6.Delete node after specified location\n");
        printf("7.Exit\n");
        printf("8.Show list\n");
        printf("\nEnter the choice: \n");
        scanf("%d",&choice);
        switch(chioice){
            case 1:
             beginsert();
            break;
            case 2:
             lastinsert();
            break;
            case 3:
             randominsert();
            break;
            case 4:
             begin_delete();
            break;
            case 5:
             last_delete();
            break;
            case 6:
             random_delete();
            break;
            case 7:
             search();
            break;
            case 8:
             display();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("please enter a valid choice\n");
        }
    }
            return 0;
}
void beginsert(){
    struct node *ptr;
    int item;
    int ptr=(struct node*)malloc(size of(struct node));
    if(ptr==NULL){
        printf("\nOverflow\n");
        }else{
            printf('\nEnter value: \n');
            scanf("%d",&item);
            ptr->data= item;
            ptr->next=head;
            head=ptr;
            printf("\nNode inserted\n");
        }
}
void lastinsert(){
struct node*ptr,*temp;
int item;
ptr=(struct node*)malloc(sizeof(strut node));
if(ptr==NULL){
    printf("\nOverflow\n")
}else{
    printf("Enter value : \n");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL){
        ptr->next=NULL;
        head=ptr;
        printf("\nNode inserted\n");
    }else{
        temp=head;
        while(temp->next!=NULL){
         temp->next=ptr;
         ptr->next=NULL;
         printf("\nNode inserted\n");
        }
    }
    }

    }
    void randomnsert()[
        int i,ioc,item;
        struct node*ptr,*temp;
        ptr=(struct node *)malloc(sizeof(structnode) );
        if(ptr==NULL){
            printf("\noverflow\n")  
        }
    ]
    }
}

        ]
    }
}

        }

    }
}

}