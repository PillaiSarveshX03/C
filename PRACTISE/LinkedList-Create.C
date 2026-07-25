#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*temp,*newnode;


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
int n=0;

newnode =(struct node *)malloc(sizeof(struct node));
printf("Enter the element : ");
scanf("%d",&newnode->data);

if(head==NULL){
    head=newnode;
    newnode->next=NULL;

    return;
}

//display();
printf("Enter The Position You want to Insert : ");
scanf("%d",&n);

temp=head;
int i=1;

while(temp!=NULL){

if(i+1==n){

    newnode->next=temp->next;
    temp->next=newnode;
    break;
    
}

i++;
temp=temp->next;

}

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


create();
insertBeg();
insertBeg();
insertEnd();
insertEnd();

display();

insertpos();

display();



return 0;

}