#include <stdio.h>
#include <stdlib.h>

struct node {

    int data;
    struct node* left;
    struct node* right;
};

struct node *root, *first, *second, *third, *fourth, *fifth; 

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

    root=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    root->data = 100;
    first->data = 50;
    second->data = 200;
    third->data = 25;
    fourth->data = 150;
    fifth->data = 300;

    root->left=first;
    root->right=second;

    first->left=third;
    first->right=NULL;

    second->left = fourth;
    second->right = fifth;

    third->left = NULL;
    third->right = NULL;

    fourth->left = NULL;
    fourth->right = NULL;

    fifth->left = NULL;
    fifth->right = NULL;

    
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    return 0;
}