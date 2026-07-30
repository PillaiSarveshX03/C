#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*temp,*newnode,*temp1;


void create(){

    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&newnode->data);

    head=newnode;
    newnode->next=NULL;
    

}

void insertBeg(){

    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&newnode->data);

    newnode->next=head;
    head= newnode;
}

void insertEnd(){

    
    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&newnode->data);
    
    if(head==NULL){

    head=newnode;
    return;
    }

    temp=head;
    while(temp->next!=NULL){

        temp=temp->next;

    }

    newnode->next=NULL;
    temp->next=newnode;
    

}

void display(){

temp = head;

int count=0;

while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
    count++;
}


printf("\nCounts : %d \n",count);


}

int main(){
    int choice;

    while(1){
        printf("\n=== Linked List Menu ===\n");


        printf("1. Create\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Display\n");
        printf("5. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:create();
                   break;
            case 2:insertBeg();
                   break;
            case 3:insertEnd();
                   break;
            case 4:display();
                   break;
            case 5:printf("Exiting...\n");
                   return 0;
            default:printf("Invalid choice.\n");
         }
    }

    return 0;
}