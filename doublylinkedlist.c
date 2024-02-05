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


void main()
{
	
	
}

struct node *createnewnode()
{
	struct node *p=(struct node *)malloc (size of (struct node ));
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
