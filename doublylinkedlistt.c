#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc
#include <conio.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *HEAD = NULL;

struct node *createnewnode();
void insertfront();
void insertend();
void list();
void displayall();
void deletefront();
void deleteend();
void insertafter();
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
        printf("\n7. List");
        printf("\n0. Exit");
        printf("\n\nWhich Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertfront(); break;
            case 2: insertend(); break;
            case 3: displayall(); break;
            case 4: deletefront(); break;
            case 5: deleteend(); break;
            case 6: insertafter(); break; // Not implemented
            case 7: list(); break;
            case 0: exit(0);
            default: printf("\nInvalid Choice! Please try again.");
        }
        getch();
    } while (1);
}

struct node *createnewnode() {
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data:\n");
    scanf("%d", &p->data);
    p->prev = NULL;
    p->next = NULL;
    return p;
}

void insertfront() {
    struct node *p;
    p = createnewnode();
    if (HEAD == NULL) {
        HEAD = p;
        return;
    }
    p->next = HEAD;
    HEAD->prev = p;
    HEAD = p;
}

void insertend() {
    struct node *p, *temp;
    p = createnewnode();
    if (HEAD == NULL) {
        HEAD = p;
        return;
    }
    temp = HEAD;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
}

void list() {
    struct node *temp;
    if (HEAD == NULL) {
        printf("\nList is empty.");
        return;
    }
    temp = HEAD;
    printf("\nList elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void displayall() {
    list(); // Same as list function
}

void deletefront() {
    if (HEAD == NULL) {
        printf("\nList is empty.");
        return;
    }
    struct node *temp = HEAD;
    HEAD = HEAD->next;
    if (HEAD != NULL)
        HEAD->prev = NULL;
    free(temp);
}

void deleteend() {
    if (HEAD == NULL) {
        printf("\nList is empty.");
        return;
    }
    struct node *temp = HEAD;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        HEAD = NULL;
    }
    free(temp);
}
void insertafter() {
    if (HEAD == NULL) {
        printf("\nList is empty. Cannot insert after.");
        return;
    }

    int value;
    printf("\nEnter the value after which you want to insert: ");
    scanf("%d", &value);

    struct node *p = createnewnode();
    struct node *temp = HEAD;

    // Find the node with the given value
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nValue not found in the list.");
        return;
    }

    // Insert the new node after the found node
    p->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = p;
    temp->next = p;
    p->prev = temp;
}

