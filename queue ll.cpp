#include<stdio.h>
#include<stdlib.h>
struct q{
	int data;
	struct q*next;
};
struct q*f=NULL;
struct q*r=NULL;

//insert
void insert(){
	struct q*ptr=(struct q*)malloc(sizeof(struct q));
   int d;
   printf("enter the data to be inserted");
   scanf("%d", &d);
   ptr->data=d;
	if(f==NULL||r==NULL){
		ptr->next=NULL;
		f=ptr;
		r=ptr;
	}
	else{
		r->next=ptr;
		ptr->next=NULL;
		r=ptr;
	}
}

void del(){
	struct q*p;
	int v=f->data;
	printf("%d", v);
	p=f;
	f=f->next;
	free(p);
}

void display(){
	struct q*p=f;
	if(f==r||f==NULL||r==NULL){
		printf("stack is empty");
	}
	else{
		while(p->next!=NULL){
			printf(" %d",p->data);
			p=p->next;
			
		}
		printf(" %d",r->data);
		return ;
	}
}

int main(){
	int c;
	while(1){
		printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
		printf("enter the choice");
		scanf("%d",&c);
		switch(c){
			case 1:
				insert();
				break;
				case 2:
					del();
					break;
					case 3:
						display();
						break;
						case 4:
							return 0;
							break;
							default:
								printf("not selected");
							}
						}
		
}
