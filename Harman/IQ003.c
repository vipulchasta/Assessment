#include <stdio.h>

struct node
{
	int data;
	struct node *next;
};

struct node *HEAD;
struct node *curNode;
struct node *tempNode;

int main(void)
{
	int i;
	int count;

	scanf(" %d",&count);

	HEAD = malloc( sizeof(struct node) );
	curNode = HEAD;

	for( i = 0 ; i < 10 ; i++ )
	{
		curNode->data = i;
		curNode->next = malloc( sizeof(struct node) );
		curNode = curNode->next;
	}
	curNode->next = NULL;

	// Printing Nodes
	curNode = HEAD;
	printf("Start --> ");
	while( curNode->next != NULL )
	{
		printf(" %d --> ",curNode->data);
		curNode = curNode->next;
	}
    printf(" Finish \n",curNode->data);

	
	curNode = HEAD;
	while( curNode->next != NULL )
	{
		tempNode 
		i = 0;
		while( i != count )
		{
		}
		printf(" %d --> ",curNode->data);
		curNode = curNode->next;
	}






	// Printing Nodes
	curNode = HEAD;
	printf("Start --> ");
	while( curNode->next != NULL )
	{
		printf(" %d --> ",curNode->data);
		curNode = curNode->next;
	}
    printf(" Finish \n",curNode->data);


	return 0;
}
