#include<stdio.h>
#include<stdlib.h>
int top=-1;
int MAX=10;
int stack_arr[10];

int isfull()
{
	if(top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int element)
{
	if(isfull())
	{
		printf("Stack Overflow\n");
		return;
	}
	top=top+1;
	stack_arr[top]=element;
}
int pop()
{
	int element;
	if(isempty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	element=stack_arr[top];
	top=top-1;
	return element;
}
int peek()
{
        if( isempty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}
void display()
{
	if(isempty())
	{
		printf("No stack\n");
		return;
	}
	else
	{
		printf("\nThe stack is:\n\n");
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",stack_arr[i]);
		}
	}
}
int main()
{
		int choice,element;
		while(1)
			{
			printf("1.For Push\n2.For Pop\n3.For peek\n4.For display\n5.For exit\n");
			printf("Enter your choice\n");
			scanf("%d",&choice);
			switch(choice)
			{
			case 1:
					printf("\nenter the element to be pushed: ");
					scanf("%d",&element);
					push(element);
					break;
			case 2:
					element=pop();
					printf("the popped element is %d\n",element);
					break;
			case 3:
					printf("\nItem at the top is : %d\n", peek() );
                    break;
			case 4:
					display();
					break;
			case 5:
					break;
			default:
					printf("Wrong choice\n");
		}
		
	}
}
