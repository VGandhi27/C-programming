/* 
Code to implement Queue with Array
*/
 # include<stdio.h>
# include<conio.h>

void enqueue();
void dequeue();
void display();
int arr[50];
int front=-1;
int rear=-1;

int main()
{
	int choice ;
	while(1)
	{	printf("1.Enter the element \n");
		printf("2.Delete the element \n");
		printf("3.Display the element \n");
		printf("4.exit \n");
		printf("Enter your choice: \n");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3: display();
			break;
			case 4:
			break;
			default:
				printf("wrong choice");
				
			
		}	
	}
	
	
getch();
return 0;
	
}

void enqueue()
{
		int item =0;
		if(rear==49)//Queue is full
		{
			printf("Overflow condition /n");
		}
		if(front==-1) //when queue is empty
		{
			front=0;
			printf("Enter the value to be entered:");
			scanf("%d",&item);
			rear+=1;
			arr[rear]=item;
		}	
		else 
		if(front==0)
		{
			front=0;
			printf("Enter the value to be entered:");
			scanf("%d",&item);
			rear+=1;
			arr[rear]=item;
		
		}	
}
		
//end of enqueue function
void dequeue()
{	
	// defining dequeue function
	int item[50];
	if(front==-1)
	{
		printf("Underflow condition \n");
		
	}
	else
	if(front==0)
	{
		printf(" dequeue or deleted element is : %d \n",arr[front]);
		
		item[front]=arr[front];
			front+=1;
		if(front>rear)
		front=rear=-1;
		
	}

}
//end of dequeue function

void display()
{
	//defining display function
	int i=0;
	if(front==-1)
		{
			printf("The Queue is empty");
		}	
		else
		{	printf("The Queue is:");
			for(int i=front;i<rear+1;i++)
				{
					printf("%d ",arr[i]);
					printf(" \n");
					
				}
		
		}
}
//end of display function
	
