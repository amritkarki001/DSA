#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *NEXT;
};

void insertfront();
void insertend();
void deletefront();
void deleteend();
void insertafter();
void displayall();
void search();

struct node *HEAD = NULL;

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
        printf("\n7. Search");
        printf("\n0. Exit");
        printf("\n\nWhich Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertfront();
                break;
            case 2:
                insertend();
                break;
            case 3:
                displayall();
                break;
            case 4:
                deletefront();
                break;
            case 5:
                deleteend();
                break;
            case 6:
                insertafter();
                break;
            case 7:
                search();
                break;
            case 0:
                exit(0);
            default:
                printf("\nInvalid Choice! Please try again.");
        }
        getch();
    } while (1);
}

struct node *createnewnode() {
    struct node *p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data: ");
    scanf("%d", &p->data);
    fflush(stdin);
    p->NEXT = NULL;
    return p;
}

void insertfront() {
    struct node *p;
    p = createnewnode();
    if (HEAD == NULL) {
        p->NEXT = HEAD;
        HEAD = p;
        return;
    }
    p->NEXT = HEAD;
    HEAD = p;
}

void insertend() {
    struct node *p = createnewnode();
    if (HEAD == NULL) {
        HEAD = p;
        HEAD->NEXT = HEAD;  // Make it circular
        return;
    }

    struct node *temp = HEAD;
    while (temp->NEXT != HEAD) {
        temp = temp->NEXT;
    }
    temp->NEXT = p;
    p->NEXT = HEAD;  // Make it circular
}

void displayall() {
    struct node *p = HEAD;
    if (p == NULL) {
        printf("\nEmpty");
        return;
    }

    do {
        printf("%d\t", p->data);
        p = p->NEXT;
    } while (p != HEAD);
}

void deletefront() {
    struct node *tmp;
    if (HEAD == NULL) {
        printf("\nEmpty List!\n");
        getch();
        return;
    }
    tmp = HEAD;
    HEAD = HEAD->NEXT;
    free(tmp);
}

void deleteend() {
    struct node *p, *prev;
    if (HEAD == NULL) {
        printf("\nEmpty List!\n");
        getch();
        return;
    } else if (HEAD->NEXT == HEAD) {
        free(HEAD);
        HEAD = NULL;
        return;
    } else {
        p = HEAD;
        do {
            prev = p;
            p = p->NEXT;
        } while (p->NEXT != HEAD);

        free(p);
        prev->NEXT = HEAD;
    }
}

void insertafter() {
    int k;
    printf("\nEnter the key after which you want to insert: ");
    scanf("%d", &k);

    struct node *tmp, *tmp1;
    struct node *p = createnewnode();

    if (HEAD == NULL) {
        HEAD = p;
        HEAD->NEXT = HEAD;  // Make it circular
        return;
    }
    tmp = HEAD;
    do {
        if (tmp->data == k) {
            p->NEXT = tmp->NEXT;
            tmp->NEXT = p;
            return;
        }
        tmp1 = tmp;
        tmp = tmp->NEXT;
    } while (tmp != HEAD);
    tmp1->NEXT = p;
}

void search() {
    if (HEAD == NULL) {
        printf("\nEmpty List!\n");
        getch();
        return;
    }

    int key;
    printf("\nEnter the key to search: ");
    scanf("%d", &key);

    struct node *p = HEAD;
    int found = 0;

    do {
        if (p->data == key) {
            printf("\n%d found in the list.", key);
            found = 1;
            break;
        }
        p = p->NEXT;
    } while (p != HEAD);

    if (!found)
        printf("\n%d not found in the list.", key);
}

