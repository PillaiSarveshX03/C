#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *temp, *newnode, *prev;

void create() {
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter The Value : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newnode;
    }
}

void insertBeg() {
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter The Value : ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;
}

void deleteBeg() {
    if (head == NULL) {
        printf("The List Is Empty !!!\n");
        return;
    }

    temp = head;
    head = temp->next;

    printf("Element %d Has Been Deleted !!!\n", temp->data);
    free(temp);
}

void deleteEnd() {
    if (head == NULL) {
        printf("The List Is Empty !!!\n");
        return;
    }

    if (head->next == NULL) {
        printf("Deleted Element = %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    printf("Deleted Element = %d\n", temp->data);
    free(temp);
}

void display() {
    if (head == NULL) {
        printf("The List Is Empty !!!\n");
        return;
    }

    temp = head;
    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main(void) {
    int choice;

    while (1) {
        printf("\n===== Linked List Menu =====\n");
        printf("1. Create Node\n");
        printf("2. Insert at Beginning\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insertBeg();
                break;
            case 3:
                deleteBeg();
                break;
            case 4:
                deleteEnd();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}