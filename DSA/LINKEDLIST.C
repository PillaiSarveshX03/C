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

void deletebeg(){

    

    if(head== NULL)
        {
            printf("List Empty..");
            return;
        }
    
    temp=head;
    head=head->next;


    printf("Element %d Deleted..\n",temp->data);
    free(temp);

}

void deleteend(){

    if(head== NULL)
        {
            printf("List Empty..");
            return;
        }

    if(head->next == NULL)
        {
            printf("Element %d Deleted..\n", head->data);

            free(head);

            head = NULL;

            return;
        }

    temp=head;

    while(temp->next!=NULL){

        if((temp->next)->next==NULL)
            {
                temp1=temp->next;
                
            
                printf("Element %d Deleted..\n",temp1->data);
    
                free(temp1);
                temp->next=NULL;

                return;
            }


        temp=temp->next;

    }
}

void deletepos(){

    int n=0;

    if(head== NULL)
        {
            printf("List Empty..");
            return;
        }

    if(head->next == NULL)
        {
            printf("Element %d Deleted..\n", head->data);

            free(head);

            head = NULL;

            return;
        }


    printf("Enter The Position You want to Delete : ");
    scanf("%d",&n);

    int i=1;

    temp=head;
    
    while(temp!=NULL){

        if(i+1==n)
            {
                temp1=temp->next;
                temp->next=temp1->next;

                printf("Element %d Deleted..\n", temp1->data);
                free(temp1);

                return;
            }


        temp=temp->next;
        i++;

    }


}


int main(){

printf("Linked List Operations..\n");

int ch;

    while(1){

    printf("1. Create\n2. Insert At Beginning\n3. Insert At End\n4. Insert At Position\n5. Display\n6. Delete At Beginning\n7. Delete At End\n8. Delete At Position\n9. Exit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&ch);

    switch(ch){

        case 1: create();
                break;
        case 2: insertBeg();
                break;
        case 3: insertEnd();
                break;
        case 4: insertpos();
                break;
        case 5: display();
                break;
        case 6: deletebeg();
                break;
        case 7: deleteend();
                break;
        case 8: deletepos();
                break;
        case 9: exit(0);
        default: printf("Invalid Choice..\n");

    }

    printf("\n");

    }

return 0;

}