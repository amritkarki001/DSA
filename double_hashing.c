//double hashing 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct dataitem
{
    int key;
    int value;
};

struct dataitem htable[13];
void insert(struct dataitem);
int tablesize();
int search();
void displayall();


void main()
{
	int k;
	    int choice;
    do {
        system("cls");
        printf("\n1. Insert ");
        printf("\n2. Search");
        printf("\n3. Display All");
        printf("\n4. Exit");
        printf("\n\nWhich Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertfront();
                break;
            case 2:
                search();
                break;
            case 3:
                displayall();
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("\nInvalid Choice! Please try again.");
       				 }
        getch();
    } while (1);
}

void insert() {
				if ()
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


	
	

