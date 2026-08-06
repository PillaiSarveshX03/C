#include <stdio.h>
#include <stdlib.h>

struct node {

    int data;
    struct node* left;
    struct node* right;
};

struct node *root = NULL;

struct node* createRoot(void) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the element you want to insert as root: ");
    scanf("%d", &newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->left = NULL;

    root = newnode;
    printf("\nThe element %d initialized successfully\n", root->data);
    return root;
}

struct node* insertNode(struct node* current, int value) {
    if (current == NULL) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
        newnode->data = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }

    if (value < current->data) {
        current->left = insertNode(current->left, value);
    } else if (value > current->data) {
        current->right = insertNode(current->right, value);
    } else {
        printf("Same element not allowed !!!\n");
    }

    return current;
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




int main(void) {
    int n, value;

    root = createRoot();
    printf("How many more nodes do you want to insert? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter the element you want to insert: ");
        scanf("%d", &value);
        root = insertNode(root, value);
    }

    printf("\nPreorder: ");
    preorder(root);
    printf("\nInorder: ");
    inorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\n");

    return 0;
}


// int main(){

//     root=(struct node*)malloc(sizeof(struct node));
//     first=(struct node*)malloc(sizeof(struct node));
//     second=(struct node*)malloc(sizeof(struct node));
//     third=(struct node*)malloc(sizeof(struct node));
//     fourth=(struct node*)malloc(sizeof(struct node));
//     fifth=(struct node*)malloc(sizeof(struct node));

//     root->data = 100;
//     first->data = 50;
//     second->data = 200;
//     third->data = 25;
//     fourth->data = 150;
//     fifth->data = 300;

//     root->left=first;
//     root->right=second;

//     first->left=third;
//     first->right=NULL;

//     second->left = fourth;
//     second->right = fifth;

//     third->left = NULL;
//     third->right = NULL;

//     fourth->left = NULL;
//     fourth->right = NULL;

//     fifth->left = NULL;
//     fifth->right = NULL;

    
//     preorder(root);
//     printf("\n");
//     inorder(root);
//     printf("\n");
//     postorder(root);
//     return 0;
// }