#include<stdio.h>

void insert();

void delete();

void display();

int Q[50],n,choice,rear=-1,front=-1;

int main()

 {

printf("enter no. of elements of QUEUE:");

scanf("%d",&n);

  printf("select any option given below:");

  while(1)

  {

  printf("\n1.INSERT an element in QUEUE \n2.DELETE an elementin QUEUE \n3.DISPALY an element in QUEUE  \n4.EXIT\n");

  printf("enter choice :");

  scanf("%d",&choice);

  switch(choice)

  {

  case 1:

  insert();

  break;

  case 2:

  delete();

  break;

  case 3:

  display();

  break;

  case 4:

  return 0;

  default:

  printf("Wrong Choice");

  }

  }

  return 0;

 }

 void delete()

 {

  int value;

  if(front==-1||front>rear)

  printf("QUEUE UNDERFLOW");

  else

  {

  value=Q[front];

  printf("Delete element:%d\n",value);

  front++;

  }

 }

 void insert()

 {

  int element;

  if(rear==n-1)

printf("QUEUE OVERFLOW");

  else

  {

  if(front==-1)

  front=0;

  printf("Insert an element:");

  scanf("%d",&element);

  rear++;

  Q[rear]=element;

  }

 }

 void display()

 {

  int  i;

  if(front==-1||front>rear)

  printf("QUEUE is empty");

  else

  {

  printf("QUEUE is:\n");

  for(i=front;i<=rear;i++)

  printf("%d ",Q[i]);

  printf("\n");

  }

 }
