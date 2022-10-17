#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}link;

link *start=NULL;

link *create_cll(link *start) {
	link *newptr,*ptr;
	int n;
	printf("Enter 0 to exit.\nEnter data:");
	scanf("%d",&n);
	while(n!=0) {
		newptr=(link *)malloc(sizeof(link));
		newptr->data=n;
		if(start==NULL) {
			newptr->next=newptr;
			start=newptr;
		}
		else {
			ptr=start;
			while(ptr->next!=start)
				ptr=ptr->next;
			ptr->next=newptr;
			newptr->next=start;
		}
		printf("Enter data:");
		scanf("%d",&n);
	}
	return start;
}

link *ins_node_at_start(int n) {
	link *newptr,*ptr;
	newptr=(link *)malloc(sizeof(link));
	newptr->data=n;
	ptr=start;
	while(ptr->next!=start)
		ptr=ptr->next;
	newptr->next=start;
	ptr->next=newptr;
	start=newptr;
	return start;
}

link *ins_node_at_end(int n) {
	link *newptr,*ptr;
	newptr=(link *)malloc(sizeof(link));
	newptr->data=n;
	ptr=start;
	while(ptr->next!=start)
		ptr=ptr->next;
	newptr->next=start;
	ptr->next=newptr;
	return start;
}

link *ins_node_after_pos(int n, int pos) {
	link *ptr,*newptr,*nextptr;
	newptr=(link *)malloc(sizeof(link));
	newptr->data=n;
	ptr=start;
	while(ptr->next->data!=pos) {
	    ptr=ptr->next;
	    if(ptr->next==start->next) {
	        printf("Node not found.\n");
	        return start;
	    }
	}
	ptr=ptr->next;
	nextptr=ptr->next;
	ptr->next=newptr;
	newptr->next=nextptr;
	return start;
}

link *ins_node_before_pos(int n, int pos) {
	link *ptr,*newptr,*prevptr;
	newptr=(link *)malloc(sizeof(link));
	newptr->data=n;
	ptr=start;
	while(ptr->next->data!=pos) {
	    ptr=ptr->next;
	    if(ptr->next==start->next) {
	        printf("Node not found.\n");
	        return start;
	    }
	}
	prevptr=ptr;
	ptr=ptr->next;
	prevptr->next=newptr;
	newptr->next=ptr;
	if(pos==start->data)
	    start=newptr;
	return start;
}

link *del_node_at_start() {
	link *ptr;
	if(start==NULL) {
		printf("Empty list.\n");
		return start;
	}
	ptr=start;
	while(ptr->next!=start)
		ptr=ptr->next;
	ptr->next=start->next;
	free(start);
	start=ptr->next;
	printf("Element deleted.\n");
	return start;
}

link *del_node_at_end() {
	link *ptr,*prevptr=NULL;
	ptr=start;
	if(start==NULL) {
		printf("Empty list.\n");
		return start;
	}
	while(ptr->next!=start) {
		prevptr=ptr;
		ptr=ptr->next;
	}
	free(ptr);
	prevptr->next=start;
	printf("Element deleted.\n");
	return start;
}

link *del_cll() {
	link *ptr,*prevptr=NULL;
	if(start==NULL) {
		printf("Empty list.\n");
		return NULL;
	}
	ptr=start;
	while(ptr->next!=start) {
		prevptr=ptr;
		ptr=ptr->next;
		free(prevptr);
	}
	free(ptr);
	start=NULL;
	printf("List deleted.\n");
	return start;
}

void display() {
	link *ptr;
	if(start==NULL) {
		printf("Empty list.\n");
		return;
	}
	printf("Elements are:\n");
	ptr=start;
	while(ptr->next!=start) {
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("%d\n",ptr->data);
}

link *del_node_after_pos(int pos) {
    link *ptr,*prevptr;
    if(start==NULL) {
		printf("Empty list.\n");
		return;
    }
    ptr=start;
    prevptr=ptr;
    while(prevptr->data!=pos) {
        prevptr=ptr;
        ptr=ptr->next;
    }
    prevptr->next=ptr->next;
    if(ptr==start)
        start=prevptr->next;
    free(ptr);
    printf("Element deleted.\n");
    return start;
}

link *del_node_before_pos(int pos) {
    link *ptr,*prevptr;
    if(start==NULL) {
		printf("Empty list.\n");
		return;
    }
    ptr=start;
    prevptr=ptr;
    while(ptr->next->data!=pos) {
        prevptr=ptr;
        ptr=ptr->next;
    }
    prevptr->next=ptr->next;
    if(ptr==start) {
        while(prevptr->next!=start)
            prevptr=prevptr->next;
        start=ptr->next;
        prevptr->next=start;
    }
    free(ptr);
    printf("Element deleted.\n");
    return start;
}

void main() {
	int ch,n,pos;
	printf("1.Create cll\n2.Insert node at start\n3.Insert node at end\n4.Insert node after specific node\n5.Insert node before specific node\n6.Delete node from start\n7.Delete node from end\n8.Delete linked list\n9.Display the list\n10.Delete node after specific node\n11.Delete node before specific node\n0.Exit\n");
	while(1) {
		printf("Enter Choice:");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				start=create_cll(start);
				break;
			case 2:
				printf("Enter data:");
				scanf("%d",&n);
				ins_node_at_start(n);
				break;
			case 3:
				printf("Enter data:");
				scanf("%d",&n);
				ins_node_at_end(n);
				break;
			case 4:
				printf("Enter data:");
				scanf("%d",&n);
				printf("Enter specific node:");
				scanf("%d",&pos);
				ins_node_after_pos(n,pos);
				break;
			case 5:
				printf("Enter data:");
				scanf("%d",&n);
				printf("Enter specific node:");
				scanf("%d",&pos);
				ins_node_before_pos(n,pos);
				break;
			case 6:
				del_node_at_start();
				break;
			case 7:
				del_node_at_end();
				break;
			case 8:
				del_cll();
				break;
			case 9:
				display();
				break;
			case 10:
			    printf("Enter specific node:");
				scanf("%d",&pos);
				del_node_after_pos(pos);
				break;
			case 11:
			    printf("Enter specific node:");
				scanf("%d",&pos);
				del_node_before_pos(pos);
				break;
			case 0:
				return;
			default:
				printf("Invalid input.\n");
		}
	}
}
