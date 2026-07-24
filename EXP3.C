#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *temp, *newnode, *prev;


void create(){

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter The Value : ");
    scanf("%d",&newnode->data);

    newnode->next = NULL;

    if(head==NULL)
        {
            head = newnode;
        }
    else
        {
            temp = head;

            while(temp->next!=NULL){

                temp= temp->next;

            }

            temp->next=newnode;
        }

}


void insertBeg(){

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter The Value : ");
    scanf("%d",&newnode->data);
    
    newnode->next=head;
    head=newnode;

}






void main(){

}