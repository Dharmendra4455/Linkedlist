#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *l1=0,*l2=0,*l3=0;
void traverse(struct node* z){
	while(z!=NULL){
		printf(" %d-->",z->data);
		z=z->next;
	}
}
main(){
	struct node *newnode,*temp,*ptr;
	printf("Insert Data in first Linkedlist (Press 0 for exit):-\n");
	int value=1;
	while(value!=0){
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode!=0){
			printf("Enter data:-\n");
			scanf("%d",&value);
			if(value==0)
			break;
			newnode->data=value;
			newnode->next=0;
			if(l1==NULL){
				l1=newnode;
				temp=newnode;
			}
			else{
				temp->next=newnode;
				temp=newnode;
			}
		}
	}
	
	printf("\n Enter data in Second Linkedlist (Press 0 for exit):-\n\n");
		value=1;
	while(value!=0){
		newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode!=0){
			printf("Enter data:-\n");
			scanf("%d",&value);
			if(value==0)
			break;
			newnode->data=value;
			newnode->next=0;
			if(l2==NULL){
				l2=newnode;
				temp=newnode;
			}
			else{
				temp->next=newnode;
				temp=newnode;
			}
		}
	}
	printf("First Linkedlist=\n\n");traverse(l1);
	printf("\n\nSecond Linkedlist=\n\n");traverse(l2);
	int c=0;
	ptr=l3;
	while(l1!=0 && l2!=0){
		int x=(l1->data+l2->data+c);
		c=x/10;
	  newnode=(struct node*)malloc(sizeof(struct node));
	  if(newnode!=0){
		newnode->data=(x%10);
		newnode->next=0;
		if(l3==0){
			l3=newnode;
			ptr=l3;
		}
		else{
			ptr->next=newnode;
			ptr=newnode;
		}
		}
		else{
			printf("Memory allocation Fail!!\n\n");
		}
		l1=l1->next;
		l2=l2->next;
}
while(l2!=0){
		int x=(l2->data+c);
		c=x/10;
	  newnode=(struct node*)malloc(sizeof(struct node));
	  if(newnode!=0){
		newnode->data=(x%10);
		newnode->next=0;
		if(l3==0){
			l3=newnode;
			ptr=l3;
		}
		else{
			ptr->next=newnode;
			ptr=newnode;
		}
		}
		else{
			printf("Memory allocation Fail!!\n\n");
		}
		l2=l2->next;
}
while(l1!=0){
		int x=(l1->data+c);
		c=x/10;
	  newnode=(struct node*)malloc(sizeof(struct node));
	  if(newnode!=0){
		newnode->data=(x%10);
		newnode->next=0;
		if(l3==0){
			l3=newnode;
			ptr=l3;
		}
		else{
			ptr->next=newnode;
			ptr=newnode;
		}
		}
		else{
			printf("Memory allocation Fail!!\n\n");
		}
		l1=l1->next;
}
if(c){
	newnode=(struct node*)malloc(sizeof(struct node));
	  if(newnode!=0){
		newnode->data=(c);
		newnode->next=0;
		if(l3==0){
			l3=newnode;
			ptr=l3;
		}
		else{
			ptr->next=newnode;
			ptr=newnode;
		}
		}
		else{
			printf("Memory allocation Fail!!\n\n");
		}
}

printf("\n\nSum of Two Linked list:-\n\n");
traverse(l3);
}
