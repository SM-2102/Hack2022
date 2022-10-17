#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}link;

link *start=NULL;

link *create_list(struct node *start) {
	link *newptr,*ptr;
	int n;
	printf("Enter 0 to exit.\n");
	printf("Enter data:");
	scanf("%d",&n);
	while(n!=0) {
		newptr=(link *)malloc(sizeof(link));
		newptr->data=n;
		if(start==NULL) {
			newptr->next=NULL;
			start=newptr;
		}
		else {
			ptr=start;
			while(ptr->next!=NULL) {
				ptr=ptr->next;
			}
			ptr->next=newptr;
			newptr->next=NULL;
		}
		printf("Enter data:");
		scanf("%d",&n);
	}
	return start;
}

link *add_node_at_start(int n) {
	link *ptr,*newptr;
	newptr=(link *)malloc(sizeof(link));
	newptr->data=n;
	ptr=start;
	newptr->next=ptr;
	start=newptr;
	return start;
}

link *add_node_at_end(int n) {
	link *ptr,*newptr;
	newptr=(link *)malloc(sizeof(link));
	newptr->data=n;
	newptr->next=NULL;
	ptr=start;
	while(ptr->next!=NULL)
		ptr=ptr->next;
	ptr->next=newptr;
	return start;
}

int number_of_nodes() {
	link *ptr;
	int c=0;
	ptr=start;
	while(ptr->next!=NULL) {
		ptr=ptr->next;
		c++;
	}
	return ++c;
}

link *add_node_at_middle(int n,int pos) {
	link *ptr,*newptr,*nextptr;
	int c=0;
	if(pos<0||pos>number_of_nodes()) {
		printf("Invalid position.\n");
	}
	else if(pos==number_of_nodes()) {
		add_node_at_end(n);
	}
	else if(pos==0) {
		add_node_at_start(n);
	}
	else {
		newptr=(link *)malloc(sizeof(link));
		newptr->data=n;
		ptr=start;
		while(++c<pos) 
			ptr=ptr->next;
		nextptr=ptr->next;
		ptr->next=newptr;
		newptr->next=nextptr;
	}
	return start;
}

link *display(link *start) {
	link  *ptr;
	ptr=start;
	while(ptr!=NULL) {
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
	return start;
}

void main() {
	int ch,n,pos;
	start=create_list(start);
	printf("1.Add node at start\n2.Add node at end\n3.Calculate no. of nodes\n4.Add node at custom place\n5.Display contents\n6.Exit\n");
	while(1) {
		printf("Enter Choice:");
		scanf("%d",&ch);
		switch(ch) {
		case 1:
			printf("Enter data:");
			scanf("%d",&n);
			add_node_at_start(n);
			break;
		case 2:
			printf("Enter data:");
			scanf("%d",&n);
			add_node_at_end(n);
			break;
		case 3:
			printf("Number of nodes present: %d\n",number_of_nodes());
			break;
		case 4:
			printf("Enter data:");
			scanf("%d",&n);
			printf("Enter position:");
			scanf("%d",&pos);
			add_node_at_middle(n,pos);
			break;
		case 5:
		    printf("Elements are:\n");
			display(start);
			break;
		case 6:
			return;
		default:
			printf("Please enter valid input.\n");
		}
	}
}
