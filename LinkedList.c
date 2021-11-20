/*
	Program to implement single Linked List
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node snode;
snode *temp, *avail, *ptr ,*loc_pre,*loc;
snode *first=NULL, *last=NULL;

snode* create_node(int item);
void inatbeg();
void display();
void inatlast();
void inatspec();
void deatbeg();
void deatlas();
void deatspec();

/*
	code for main function
*/
int main()
{	printf("\n Program for Linked List");
	int choice;
	char ch;
	printf("\n enter Y or y to continue:");
	scanf("%c",&ch);
	
	while(ch==y||ch==Y)
	{
	printf("\n The options are:");
	printf("\n 1.Insertion at Begining");
	printf("\n 2.Display");
	printf("\n 3.Insertion at Last");
	printf("\n 4.Insertion at Specific position");
	printf("\n 5.Deletion at Begining");
	printf("\n 6.Deletion at Specific position");
	printf("\n 7.Exit");
	printf("\n Please enter your choice:");
	scanf("\n %d",&choice);

	switch(choice)
		{
			
			case 1:
			{	
				printf("\n Insertion at Begining");
				inatbeg();
			}	break;
			case 2: 
			{
				printf("\n Display");
				display();
			}	break;
			case 3:
				{
					printf("Insertion at last");
					inatlast();
				}break;
			case 4:
				{
					printf("Insertion at specific position");
					inatspec();	
				}break;
			case 5:
			{	
				printf("\n Deletion at Begining");
				deatbeg();
			}	break;
			case 6:
				{
					printf("\n Deletion at specific position");
					deatspec();	
				}break;
			case 7: 
				{
					printf("\n Exit");
					
				}	break;
			
			default:printf("\n Wrong choice");
		}	
	}
	return 0;
}

/*
	Create new node
*/
snode* create_node(int item)
{
	avail=(snode*)malloc(sizeof(snode));
	if(avail==NULL)
	{
		printf("\n OverFlow condition");
		return 0;
	}
	else 
	{
		avail->data=item;
		avail->next=NULL;
		return avail;
	}
}
/*
	Function for insertion at beginning
*/
void inatbeg()
{	
	int item;
	printf("\n Enter the number");
	scanf("%d",&item);
	avail=create_node(item);
	if(first==NULL&& first==last)
	{
		first=last=avail;
		first->next=NULL;
		last->next=NULL;
		}
	else
	{
		temp=first;
		first=avail;
		first->next=temp;
	}
	printf("\n ---Successful Insertion---");
	
}

/*
	Function for display
*/
void display()
{
	if(first == NULL && first == last)
	{
		printf("\n Underflow Condition");
	}
	else
	{
		for(ptr= first;ptr!=NULL;ptr=ptr->next)
		{
			printf("\t -->%d",
			ptr->data);
			
		}
	}
}
 
/*
	insertion at last location
*/ 		
void inatlast()
{	
	int item;
	printf("\n Enter the element:");
	scanf("%d",&item);
	avail=create_node(item);
	if(first==NULL && first==last)
	{
		first=last=avail;
		first->next=NULL;
		last->next=NULL;
		
	}
	else 
	{
		last->next=avail;
		last=avail;
		last->next=NULL;
	}
	printf("\n ---Inserted----");
}
/*
* insertion at specific position
*/
void inatspec()
{	int locate,count=0,item;
	printf("\n Enter the location where you want to insert:");
	scanf("%d",&locate);
	printf("\n Enter the number");
	scanf("%d",&item);
	
	//search the loc node
	if(locate==1)
	{
		inatbeg();
	}
	else
	{	ptr=first;
		while(ptr !=NULL)
		{	count+=1;
			ptr=ptr->next;	
		}
		if(locate=0 && locate<=count)
		{
			ptr=first;
			for(int i=1;i<locate;i++)
			{
				loc=ptr;
				ptr = ptr->next;	
			}	
			avail=create_node(item);
			avail->next=loc->next;
			loc->next=avail;
			printf("\n ---Inserted---");	
		}
		else
            {
                printf("Position is out of range");
            }
        free(ptr);
        
	}	
	
}
/*
	Deletion at begining
*/
void deatbeg()
{
	if(first==last && first==NULL)
	{
		printf("\n Underflow condition");
	}
	else
	{
		temp=first;
		first=first->next;
		free(temp);
		printf("\n Deletion Successful");
	}
}
/*
	Deletion at Specific position
*/
void deatspec()
{
	int count, loca;
	printf("\n Enter the location:");
	scanf("%d",&loca);
	if(loca==1)
	{
		temp=first;
		first=first->next;
		free(temp);
		printf("\n Deletion Successful");		
	}
	else
	{	ptr=first;
		while(ptr !=NULL)
		{	count+=1;
			ptr=ptr->next;	
		}
		if(loca=0 && loca<=count)
		{
			ptr=first;
			for(int i=1;i<loca;i++)
			{
				loc_pre=ptr;
				ptr = ptr->next;	
			}	
			loc_pre->next=ptr->next;	
		}
		else
            {
                printf("Position is out of range");
            }
        free(ptr);
        printf("\nElement deleted");

	}

}
