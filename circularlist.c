#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// declare the structure representing a node
struct node {
    int data;
    struct node *NEXT;
};

void insertfront();
void insertend();
void deletefront();
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
        printf("\n7. List");
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
            	deletefront();break;
            	
            case 5: 
            	deleteend();break;
            case 6:
            		insertafter();break;
			case 7:
            		list();break;
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
    scanf("%d", &p->data);fflush(stdin);
    p->NEXT = NULL;
    return p;
}

void insertfront()
{
	struct node *p,*q;
	p=createnewnode();
	if(HEAD==NULL)
	{
		p->NEXT=p;
		HEAD=p;
		return;
	}
	q=HEAD;
	while(q->NEXT!=HEAD)
	{
		q=q->NEXT;		
	}
	q->NEXT=p;
	p->NEXT=HEAD;
	HEAD=p;
}

void insertend() {
   struct node*p,*q;
   p=createnewnode();
   if(HEAD==NULL)
   {
   	p->NEXT=p;
   	HEAD=p;
   	return;
   }
   q=HEAD;
   while(q->NEXT!=HEAD)
   {
   	q=q->NEXT;
   }
   q->NEXT=p;
   p->NEXT=HEAD;

}

void displayall() {
    struct node *p = HEAD;
    if (p == NULL) {
        printf("\nEmpty");
        return;
    }

    while (p->NEXT != NULL) {
        printf("%d\t", p->data);
        p = p->NEXT;
    }
    printf("%d", p->data);
}
void deletefront()
{
	struct node*tmp;
	if (HEAD==NULL)
	{
		printf("\nEmpty List!\n");
		getch();
		return;
	}
	tmp=HEAD;
	HEAD=HEAD->NEXT;
	free(tmp);
}

void deleteend()
{
	struct node*p;
	if (HEAD==NULL)
	{
		printf("\nEmpty List!\n");
		getch();
		return;
	}else if(HEAD->NEXT==NULL)
	{free(HEAD);
	HEAD=NULL;
	return;
	}
	else{
	p=HEAD;
	while(p->NEXT->NEXT != NULL)
	{
	p=p->NEXT;
	}
	free (p->NEXT);
	p->NEXT=NULL;
	}
	
}

void insertafter(int k){
	struct node *tmp,*tmp1;
	struct node *p = createnewnode();
	
	if(HEAD==NULL){
		HEAD = p;
		return;
	}
	tmp = HEAD;
	while (tmp!=NULL){
		if(tmp->data == k){
			p->NEXT = tmp->NEXT;
			tmp->NEXT = p;
			return;
		}
		tmp1 = tmp;
		tmp = tmp->NEXT;
	}
	tmp1->NEXT = p;
}

void list()
{
	struct node *p;
	if(HEAD==NULL)
	{
		printf("\nEmpty list");
		return;
	}
	p=HEAD;
	while(p->NEXT!=HEAD)
	{	
		printf("%d\t",p->data);
		p=p->NEXT
	}
	printf("%d\t",p->data);
}