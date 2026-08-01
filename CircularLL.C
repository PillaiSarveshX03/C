#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL,*temp,*newnode,*temp1;


// READ

int count(){

    if(head==NULL)
    {
        return 0;
    }

    temp = head;

    int count=0;

    while(temp->next!=head){
    
        temp=temp->next;
        count++;
    }

    return count+1;
}

void display(){

if(head==NULL){

    printf("The list Is Empty...!!\n\n");
    return;
    }


temp = head;


do{
    printf("%d ",temp->data);
    temp=temp->next;
} while(temp!=head);

printf("\n\n");

}



// CREATE

void create(){

    if(head==NULL){

    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&newnode->data);

    head=newnode;
    newnode->next=head;

    }
    else{
        printf("List Already Created...");

    } 
    

}

void insertBeg(){

    if(head==NULL){

    printf("The list Is Empty...!!\n\n");
    return;
    }


    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&newnode->data);

    temp=head;
    temp->next=head;

    newnode->next=head;
    head = newnode;

    
}


void insertEnd(){

    
    newnode =(struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&newnode->data);
    
    if(head==NULL){

    printf("The list Is Empty...!!\n\n");
    return;
    }


    temp=head;
    while(temp->next!=head){

        temp=temp->next;

    }

    newnode->next=head;
    temp->next=newnode;
    

}

void insertpos(){

if(head==NULL){

    printf("The list Is Empty...!!\n\n");
    return;
    }


int n=0;

display();
printf("Enter The Position You want to Insert : ");
scanf("%d",&n);

if(n==1){
    insertBeg();
    return;
}

if(n==count()){
    insertEnd();
    return;
}

newnode =(struct node *)malloc(sizeof(struct node));
printf("Enter the element : ");
scanf("%d",&newnode->data);

temp=head;
int i=1;


while(temp->next!=head){


if(i+1==n){

    newnode->next=temp->next;
    temp->next=newnode;
    break;
    
}

i++;
temp=temp->next;

}

}


// DELETE

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

// SEARCH

void search(){

    if(head== NULL)
        {
            printf("List Empty..");
            return;
        }

    int i=1;
    int n;
    int des=0;

    printf("Enter The Elemnt you want To find..: ");
    scanf("%d",&n);

    temp=head;

    while(temp!=NULL){

        if(temp->data==n)
            {
                printf("Element %d found At %d Position..\n",n,i);
                des=1;
            }

    
        temp=temp->next;
        i++;

    }

    if(des==0){printf("Element Not Found...\n");}

   
}



int main(){

printf("Linked List Operations..\n");

int ch;

    while(1){

    printf("1. Create\n2. Insert At Beginning\n3. Insert At End\n4. Insert At Position\n5. Display\n6. Delete At Beginning\n7. Delete At End\n8. Delete At Position\n9. Search \n10. Exit\n");
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
        case 9: search();
                break;
        case 10: exit(0);
        default: printf("Invalid Choice..\n");

    }

    printf("\n");

    }

return 0;

}