#include<stdio.h>  
#include<stdlib.h>  

struct node {  
    int data;  
    struct node *next;   
};  

struct node *head = NULL;  

// Function declarations
void beginsert();   
void lastinsert();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search();  

int main() {  
    int choice = 0;  
    while(choice != 9) {  
        printf("\n\n********* Main Menu *********\n");  
        printf("\nChoose one option from the following list:\n");  
        printf("\n===============================================\n");  
        printf("1. Insert at beginning\n");  
        printf("2. Insert at last\n");  
        printf("3. Insert at any random location\n");  
        printf("4. Delete from beginning\n");  
        printf("5. Delete from last\n");  
        printf("6. Delete node after specified location\n");  
        printf("7. Search for an element\n");  
        printf("8. Show list\n");  
        printf("9. Exit\n");  
        printf("\nEnter your choice:\n");         
        scanf("%d", &choice);  
        
        switch(choice) {  
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
                printf("Please enter a valid choice.\n");  
        }  
    }  
    return 0;
}  

void beginsert() {  
    struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node));  
    if(ptr == NULL) {  
        printf("\nOVERFLOW\n");  
    } else {  
        printf("\nEnter value:\n");    
        scanf("%d", &item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted\n");  
    }  
}  

void lastinsert() {  
    struct node *ptr, *temp;  
    int item;     
    ptr = (struct node*) malloc(sizeof(struct node));      
    if(ptr == NULL) {  
        printf("\nOVERFLOW\n");     
    } else {  
        printf("\nEnter value:\n");  
        scanf("%d", &item);  
        ptr->data = item;  
        if(head == NULL) {  
            ptr->next = NULL;  
            head = ptr;  
            printf("\nNode inserted\n");  
        } else {  
            temp = head;  
            while (temp->next != NULL) {  
                temp = temp->next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted\n");  
        }  
    }  
}  

void randominsert() {  
    int i, loc, item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc(sizeof(struct node));  
    if(ptr == NULL) {  
        printf("\nOVERFLOW\n");  
    } else {  
        printf("\nEnter element value:\n");  
        scanf("%d", &item);  
        ptr->data = item;  
        printf("\nEnter the location after which you want to insert:\n");  
        scanf("%d", &loc);  
        temp = head;  
        for(i = 0; i < loc; i++) {  
            temp = temp->next;  
            if(temp == NULL) {  
                printf("\nCan't insert\n");  
                return;  
            }  
        }  
        ptr->next = temp->next;   
        temp->next = ptr;   
        printf("\nNode inserted\n");  
    }  
}  

void begin_delete() {  
    struct node *ptr;  
    if(head == NULL) {  
        printf("\nList is empty\n");  
    } else {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the beginning...\n");  
    }  
}  

void last_delete() {  
    struct node *ptr, *ptr1;  
    if(head == NULL) {  
        printf("\nList is empty\n");  
    } else if(head->next == NULL) {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted...\n");  
    } else {  
        ptr = head;   
        while(ptr->next != NULL) {  
            ptr1 = ptr;  
            ptr = ptr->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted node from the last...\n");  
    }     
}  

void random_delete() {  
    struct node *ptr, *ptr1;  
    int loc, i;    
    printf("\nEnter the location of the node after which you want to perform deletion:\n");  
    scanf("%d", &loc);  
    ptr = head;  
    for(i = 0; i < loc; i++) {  
        ptr1 = ptr;       
        ptr = ptr->next;  
        if(ptr == NULL) {  
            printf("\nCan't delete\n");  
            return;  
        }  
    }  
    ptr1->next = ptr->next;  
    free(ptr);  
    printf("\nDeleted node %d\n", loc + 1);  
}  

void search() {  
    struct node *ptr;  
    int item, i = 0, flag = 1;  
    ptr = head;   
    if(ptr == NULL) {  
        printf("\nEmpty List\n");  
    } else {   
        printf("\nEnter item to search:\n");   
        scanf("%d", &item);  
        while(ptr != NULL) {  
            if(ptr->data == item) {  
                printf("\nItem found at location %d\n", i + 1);  
                flag = 0;  
                break;  
            }  
            i++;  
            ptr = ptr->next;  
        }  
        if(flag) {  
            printf("\nItem not found\n");  
        }  
    }     
}  

void display() {  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL) {  
        printf("\nNothing to display\n");  
    } else {  
        printf("\nPrinting values...\n");   
        while(ptr != NULL) {  
            printf("%d ", ptr->data);  
            ptr = ptr->next;  
        }  
        printf("\n");  
    }  
}