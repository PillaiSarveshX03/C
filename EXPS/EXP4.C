#include<stdio.h>
#include<stdlib.h>

struct Node{
    
    int data;
    struct Node *next;
    struct Node *prev;

};  

struct Node *head=NULL, *temp, *newnode;


void create(){

    if(head!=NULL){
        printf("List Already Created..");
    }

    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter The First Element To Initialize : ");
    scanf("%d",&newnode->data);

    newnode->next= NULL;
    newnode->prev= NULL;

    head=newnode;


}

void insertBeg(){

    if(head==NULL){

        printf("List Is Empty \n\n");

        return;
    }

    temp=head;

    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter The Element : ");
    scanf("%d",&newnode->data);


    newnode->next=head;
    newnode->prev=NULL;

    
    temp->prev=newnode;
    head=newnode;

}

void insertEnd(){

    if(head==NULL){

        printf("List Is Empty \n\n");

        return;
    }

    temp=head;

    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter The Element : ");
    scanf("%d",&newnode->data);

    while(temp->next!=NULL){

        temp=temp->next;

    }

    newnode->prev=temp;
    temp->next=newnode;
    newnode->next=NULL;

}

void display(){

    if(head==NULL){

        printf("List Is Empty \n\n");

        return;
    }

    temp=head;

    while(temp!=NULL){

        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");


}



int main(){

    int choice;

    while(1){
        printf("\n------ Doubly Linked List Menu ------\n");
        printf("1. Create List\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                create();
                break;
            case 2:
                insertBeg();
                break;
            case 3:
                insertEnd();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}