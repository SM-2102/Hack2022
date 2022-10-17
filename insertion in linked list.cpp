#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};

//creation
struct node*create(struct node*start){
struct node*ptr,*newnode;
int num;
printf("enter -1 to exit");
printf("\nenter the data");
scanf("%d",&num);
while(num!=-1){
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=num;
if(start==NULL){
newnode->next=NULL;
start=newnode;
}
else{
ptr=start;
while(ptr->next!=NULL){
ptr=ptr->next;
}
ptr->next=newnode;
newnode->next=NULL;
}
printf("enter the data");
scanf("%d",&num);
}
return start ;
}

//insert in begin
struct node*insertatbegin(struct node*start,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=data;
ptr->next=start;
return ptr;
}

//insert at end
struct node*insertAtEnd(struct node*start,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*p=start;
while(p->next!=NULL){
p=p->next;}
p->next=ptr;
ptr->data=data;
ptr->next=NULL;
return start;
}

//count nodes
void count(struct node*start){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr=start;
int i=0;
while(ptr!=NULL){
ptr=ptr->next;
i++;
}
printf("there are %d nodes in the linked list",i);
return ;
}

//insert at node
struct node* insertAtNode(struct node*start,int index,int data){
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*p;
p=start;
int i=0;
while(i!=index){
p=p->next;
i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
return start;
}

//display
struct node*display(struct node*start){
struct node*ptr;
ptr=start;
while(ptr!=NULL){
printf(" %d",ptr->data);
ptr=ptr->next;
}
return start;
}

//main
int main(){
struct node*start=NULL;
int ch ,d,n,e;
start=create(start);
printf("enter the data");
scanf("%d",&e);
while(1){
printf("\n1.add a new node at begin\n2.add a node at the end\n3.add a node after specified node\n4.calculate the number of node\n5.display the linked list\n6.exit\n");
printf("enter the choice");
scanf("%d",&ch);
switch(ch){
case 1:
printf("enter the data");
scanf("%d",&d);
start=insertatbegin(start,d);
start=display(start);
break;
case 2:
printf("enter the data");
scanf("%d",&d);
start=insertAtEnd(start,d);
start=display(start);
break;
case 3:
printf("enter the node after which to be inserted");
scanf("%d", &n);
printf("enter the data");
scanf("%d",&d);
start=insertAtNode(start,n,d);
start=display(start);
break;
case 4:
count(start);
break;
case 5:
start=display(start);
break;
case 6:
return 0;
break;
default:
printf("not selected");
}
}
return 0;
}
