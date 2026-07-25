#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*first,*second,*third,*temp,*newnode;


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

void insertpos(){

    
}

void display(){

temp = head;

int count=0;

while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
    count++;
}


printf("\nCounts : %d",count);


}



int main(){


create();
insertBeg();
insertBeg();
insertEnd();
insertEnd();

display();



return 0;

}