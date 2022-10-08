/*  menu driven to implement stack using array
    push, pop, display */

#include<stdio.h>

int top=-1;
int max=10;
int stack[10];

void push()
{
    if(top==max-1)
        printf("Stack Overflow.\n");
    else
    {
        top++;
        printf("Enter the value : ");
        scanf("%d",&stack[top]);
    }
}   

void pop()
{
        if(top==-1)
            printf("Stack Underflow.\n");
        else
        {
            printf("%d\n",stack[top]);
            top--;
        }
}

void display()
{
    if(top==-1)
        printf("Stack Empty.\n");
    else
    {
        printf("The stack is : ");
        for(int i=top;i>=0;i--)
            printf("%d ",stack[i]);
        printf("\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("Enter 1 for push, 2 for pop, 3 for display or 4 to exit : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Wrong Input\n");
        }
    } while (choice!=4);
}