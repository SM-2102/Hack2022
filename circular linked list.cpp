#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node* create(struct node*head){
	struct node*ptr,*newnode;
	int num;
	printf("enter -1 to exit");
	printf("enter the data");
	scanf("%d", &num);
	while(num!=-1){
		struct node* newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=num;
		if(head==NULL){
		head=ptr=newnode;
	}
	else{
		ptr->next=newnode;
		ptr=newnode;
	}
	ptr->next=head;
	printf("enterb the data");
	scanf("%d", &num);
	}
	return head; 
}

struct node* inseratbegin(struct node*head, int data){
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=head;
	return ptr;
}

struct node* insertatend(struct node*head, int data){
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	struct node *p;
	ptr->data=data;
	p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	return head;
}

struct node *insertatnodeno(struct node* head, int data,int val){
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	struct node*p=head->next;
	while(p->data!=val){
		p=p->next;
	}
	p->next=ptr->next;
	ptr->data=data;
	p->next=ptr;
	return head;
}

struct node*display(struct node*head){
struct node*ptr;
ptr=head->next;
while(ptr!=head){
printf(" %d",ptr->data);
ptr=ptr->next;
}
return head;
}

int main(){
	struct node*head= NULL;
	int ch,n ,d ,e;
	head=create(head);
	printf("enter the data");
	scanf("%d", &e);
	while(1){
		printf("\n1.insert at begin \n2.insert at end \n3.insert at node no \n4.display\\ \n5.exit\n");
		printf("enter the choice");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("enter the data");
				scanf("%d", &d);
				head=inseratbegin(head,d);
					head=display(head);
				break;
				case 2:
						printf("enter the data");
				scanf("%d", &d);
				head=insertatend(head,d);
					head=display(head);
				break;
					case 3:
							printf("enter the data");
				scanf("%d", &d);
					printf("enter the data after to be searched");
				scanf("%d", &e);
				head=insertatnodeno(head,d,n);
					head=display(head);
				break;
						case 4:
							head=display(head);
							break;
							case 5:
								return 0;
								break;
								default:
									printf("not selected");
		}
	}
	return 0;
}
