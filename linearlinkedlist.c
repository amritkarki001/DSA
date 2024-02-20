//linear linked list
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void insertFront();
void insertEnd();
void deleteFront();
void deleteEnd();
void insertAfter();
void displayAll();

// Global variable representing the head of the linked list
struct Node* HEAD = NULL;

// Main function
int main() {
    int choice;
    do {
        system("cls");
        printf("\n1. Insert Front");
        printf("\n2. Insert End");
        printf("\n3. Display All");
        printf("\n4. Delete Front");
        printf("\n5. Delete End");
        printf("\n6. Insert After");
        printf("\n0. Exit");
        printf("\n\nWhich Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertFront();
                break;
            case 2:
                insertEnd();
                break;
            case 3:
                displayAll();
                break;
            case 4:
                deleteFront();
                break;
            case 5:
                deleteEnd();
                break;
            case 6:
                insertAfter();
                break;
            case 0:
                exit(0);
            default:
                printf("\nInvalid Choice! Please try again.");
        }
        getch();
    } while (1);

    return 0;
}

// Function to create a new node
struct Node* createNewNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the front of the list
void insertFront() {
    int data;
    printf("\nEnter data to insert at the front: ");
    scanf("%d", &data);

    struct Node* newNode = createNewNode(data);
    newNode->next = HEAD;
    HEAD = newNode;
}

// Function to insert a node at the end of the list
void insertEnd() {
    int data;
    printf("\nEnter data to insert at the end: ");
    scanf("%d", &data);

    struct Node* newNode = createNewNode(data);
    if (HEAD == NULL) {
        HEAD = newNode;
        return;
    }

    struct Node* temp = HEAD;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete the first node in the list
void deleteFront() {
    if (HEAD == NULL) {
        printf("\nEmpty list!\n");
        return;
    }
    struct Node* temp = HEAD;
    HEAD = HEAD->next;
    free(temp);
}

// Function to delete the last node in the list
void deleteEnd() {
    if (HEAD == NULL) {
        printf("\nEmpty list!\n");
        return;
    }
    if (HEAD->next == NULL) {
        free(HEAD);
        HEAD = NULL;
        return;
    }

    struct Node* temp = HEAD;
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    free(temp);
    prev->next = NULL;
}

// Function to insert a node after a specified value in the list
void insertAfter() {
    int key, data;
    printf("\nEnter the key after which you want to insert: ");
    scanf("%d", &key);
    printf("\nEnter data to insert: ");
    scanf("%d", &data);

    struct Node* newNode = createNewNode(data);
    struct Node* temp = HEAD;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Key not found!\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to display all elements in the list
void displayAll() {
    if (HEAD == NULL) {
        printf("\nEmpty list!\n");
        return;
    }
    struct Node* temp = HEAD;
    printf("\nList: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

