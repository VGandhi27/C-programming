/*
	To implement Queue with Linked List
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
} *front, *rear, *avail, *temp, *front1;

void enqueue();
void dequeue();
void display();


int main()
{	int choice;
	
	while(choice!=4)
	{ 
	
	printf("\n Program to implement Queue with Linked List");
	printf("\n Menu \n  1.Insert the value \n 2.Delete the value \n 3.Display \n 4.Exit");
	printf("\n Enter your choice:");
	scanf("%d",&choice);

		switch(choice)
		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: printf("\n exit");
			break;
			default: printf("\n Wrong Choice");
			break;
		}
		
	}
		
	return 0;
	
}
void enqueue()
{
	/*
	Starting of enqueue function
	*/
	int item;
	avail=(struct node *)malloc(sizeof(struct node));
	if(avail==NULL)		//If the Queue is full
	{ 
		printf("\n Overflow condition");
		
	}
	else
	{
		
		printf("\n Enter the value to be inserted:");
		scanf("\n %d",&item);
		avail->data=item;
		
		if(front==NULL) //If the Queue is empty
		{
			front=avail;
			rear=avail;
			front->next=NULL;
			rear->next=NULL;
			
		}
		
		else
		{
			rear->next=avail; //If more than one element is present
			rear=avail;
			rear->next=NULL;
		}
	}
}
/*
Ending of Dequeue function
*/
void dequeue()
{	
	/* 
	starting of dequeue function
	*/
	int item;
	if(front==NULL)
	{
		printf("\n Uderflow condition");
	}
	else
	{
		struct node *temp;
		temp=front;
		printf("\n The deleted element is %d",front->data);
		item=temp->data;
		front=temp->next;
		temp->next=avail;
		avail=temp;
		free(temp);
		printf("\n The deletion is successful");
		
		
	}
}
/* 
Ending of Delete function
*/
void display()
{
	/*
	Starting of display function
	*/
	temp=front;
	
	if(temp==NULL)
    {
        printf("Queue is empty");
        
    }
    else
    {
    	printf("\n Printing values:");
    	while(temp!=NULL)
    	{
    		printf("\n %d \n ",temp->data);
    		temp=temp->next;
		}
	}

}
/*
 Ending of Display Function
*/
