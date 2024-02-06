//Doubly Linkedlist
#include <stdio.h>
#include <conio.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

struct node*createnewnode();
void insertfront();
void insertend();
void list();



struct node *HEAD=NULL;


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
            case 1:insertfront(); break;
            case 2:insertafter();break;
            case 3:break;insertend();break;
            case 4:displayall();
            case 5: deletefront();break;
            case 6:deleteend();break;
			case 7:list();break;
           
            default:printf("\nInvalid Choice! Please try again.");
        }
        getch();
    } while (1);
}


struct node *createnewnode()
{
	struct node *p=(struct node *)malloc (sizeof (struct node ));
	printf("\nEnter Data:\n");
	scanf("%d",&p->data);
	p->prev=NULL;
	p->next=NULL;
	return p;
}

void insertfront()
{	//emptylist
	struct node *p;
	p=createnewnode();
	if (HEAD==NULL)
	{
		HEAD=p;
		return;
	}
	//non-empty list
	p->next=HEAD;
	HEAD=p;
}

void insertafter()
{	//emptylist
	struct node *p,*q;
	p=createnewnode();
	if (HEAD==NULL)
	{
		HEAD=p;
		return;
	}
	//non-empty list
	p->next=HEAD;
	HEAD=p;
}
