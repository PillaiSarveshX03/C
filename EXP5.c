#include <stdio.h>
#include <stdlib.h>



struct node {

    int data;
    struct node* left;
    struct node* right;
};

struct node  *newnode;


struct node *createNode(int data)
{
    struct node *node = malloc(sizeof(struct node));

    if (node == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void insert(struct node*root){

    struct node *temp= root;

    newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("\nEnter The Element You Want to enter : ");
	scanf("%d",&newnode->data);

    newnode->left=NULL;
    newnode->right=NULL;
    
    while(1)
    {
        if(newnode->data < temp->data){

            if(temp->left==NULL){
                root->left=newnode;
                break;
            }
            temp=temp->left;
        
        }
        else if(newnode->data==temp->data){
            printf("Same Element Not Allowed !!!");
            free(newnode);
            return;
        }
        else{

            if(temp->right==NULL){
                root->right=newnode;
                break;
            }

            temp=temp->right;
            root->right=newnode;
        }

    }
    



}


//PREORDER ROOT->LEFT->RIGHT

void preorder(struct node *root){

    if(root==NULL){
        return;
    }

    printf("%d ",root->data);


    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root){

    if(root==NULL){
        return;
    }

    inorder(root->left);

    printf("%d ",root->data);

    inorder(root->right);

}

void postorder(struct node *root){

    if(root==NULL){
        return;
    }

    postorder(root->left);

    postorder(root->right);

    printf("%d ",root->data);

}




int main(){

printf("--------- Binary Search Tree ---------\n\n");


struct node* test =createNode(50);
insert(test);
insert(test);
insert(test);
insert(test);
insert(test);

printf("\n");
inorder(test);
printf("\n");
preorder(test);
printf("\n");
postorder(test);



}
