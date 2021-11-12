/*

Stack using Linked List

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
	int data ;
	struct node *next;
	
} *top =NULL, *avail;


void push();
void pop();
void peek();
void display();

int item;

int main()
{
	int choice;
	
	printf("\n 1. Push the Element");
	printf("\n 2. Pop the element");
	printf("\n 3. Peek the element");
	printf("\n 4. Display the element");
	printf("\n 5. Exit");
	printf("\n ***********************************");
	
	while(1)
	{	
		printf("\n Enter the choice:");
		scanf(" \n %d",&choice);
		switch(choice)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4: display();
			break;
			case 5: printf("Exit");
			break;
			default:printf("\n Please enter correct choice");
			break;
		}
	}
	
  
	getch();
	return 0;
}

void push()
{
/*
Starting of Push function
*/	

	
	node *avail=(struct node*)malloc (sizeof(struct node));
	
	if(avail==NULL) //no space in stack
	{
		printf("\n OverFlow condition");
	}
	else if(top==NULL)
	{
		printf("\n Enter the element:");
		scanf("%d",&item);
		
		avail->data=item;
		avail->next=NULL; //if one element is there in stack
		top=avail;
		printf("\n # The enter element is :%d",item);
	}
	else
	{ printf("\n Enter the element:");
		scanf("%d",&item);
		
		avail->data=item;
		avail->next=top;
		top=avail;
	printf("\n # The enter element is :%d",item);	
	}
}
/* 

Ending of Push Function

*/
void pop()
{
	/*
	
	Starting of pop function
	
	*/
	
	if(top==NULL) //When there is no element
	{
		printf("\n Underflow condition ");
		
	}
	else 
	{	struct node *temp = top;
		temp=top;
		printf("\n Poped element is : %d",temp->data);
		top=temp->next;
		free(temp);
		
	}
}
/*

	Ending of Pop function

*/
void peek()
{
/*
Starting of peek function
*/	
	if(top==NULL)
	{
		printf("\n Stack is empty");
		
	}
	else
	{
	struct node *temp=top;
	temp=top;
	printf("\n  Peek element is:%d",temp->data);
	}
}
/*
Ending of Peek function
*/

void display()
{
	/* 
	
	Starting of display function

	
	*/
	if(top==NULL)
	{
		printf("\n Stack is empty");
		
	}
	else
	{
		struct node *temp = top;
      while(temp->next != NULL)
	  {
	 	printf("%d--->",temp->data);
		 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
	}
}
/*
	
	Ending of Display Function

*/
