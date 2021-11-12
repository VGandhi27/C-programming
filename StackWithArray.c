/*
		Stack implementation using array
	*/
	
	#include<stdio.h>
	#include<conio.h>
	
	void push();
	void pop();
	void peek();
	void display();
	int arr[50];
	int top;
	int item;
	
	int main()
	{
		int choice;
		top=-1;
		printf("1. Push the element \n");
		printf("2. Pop the element \n");
		printf("3. Peek the element \n");
		printf("4. Display the element\n");
		printf("5. Exit");
		printf("\n ********************* \n");
		
		while(1)
		{
			printf("\n Enter our choice: \n");
			scanf("%d",&choice);
			
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
				case 5:
				{ 	
					printf("Exit");
					break;
				}
				default: printf(" Please enter right choice");
				
			}
		}
		
		
		getch();
		return 0;		
	}
	
	void push()
	{
		/*
		
		Starting of Push operation
		
		*/
		
		if(top>50) // Stack is full
		{
			printf("Overflow condition");
		}
		else 
		{	
			printf(" \n Enter the element in stack: ");
			scanf("%d",&item);
			top+=1;
			arr[top]=item;
			
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
		 if(top<=-1)
		 {
		 	printf(" Underflow condition");
		 	
		 }
		 else
		 {
		 	printf("\n The element to be poped: %d",arr[top]);
		 	top--;
		 }
		 
	}
	/*
	
	Ending of pop function
	
	*/
	
	void peek()
	{
		/*
		
		Starting of Peek function
		
		*/
		
		if(top>=0)
		{
			printf("\n The top element in stack is %d", arr[top]);
		}
		else
		{
			printf("\n The Stack is empty.");
			
		}
	
	}
	/*
	
	Ending of peek function
	
	*/
	
	void display()
	{
		/*
		Starting of display function
		
		*/
		
		if (top>=0)
		{	printf("\n The elements are:");
		
			for(int i=0;i<=top;i++)
			{
				printf("\t %d ",arr[i]);	
			}
		}
		
		else
		{
			printf("\n The Stack is empty");
		}
	}
	/*
	Ending of Display function
	*/
