#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *ptr=0,*temp=0,*head=0;

void traverse(){
	ptr=head;
	if(head==0){
		printf("List is Empty\n\n");
		return;
	}
	else{
	
	while(ptr!=NULL){
		printf(" %d ->",ptr->data);
		ptr=ptr->next;
	}}
	
}
int insertatbegning(int value,int n){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL){
	printf("Memory Allocation Fail!!\n\n");
	printf("Insertion of Data Fail!!\n");}
	else{
		newnode->data=value;
		newnode->next=0;
		if(head==0)
		head=newnode;
		else{
			newnode->next=head;
			head=newnode;
			
		}
        return n++;	
	}
}
int insertatlast(int value,int n){
	struct node *newnode,*temp=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==0)
	{
	printf("Memory Allocation Fail!!\n\n");
	printf("Insertion of Data Fail!!\n");
	return;}	
	
	else{
	newnode->data=value;
	newnode->next=0;
	if(head==0)
	head=newnode;
	else{
		while(temp->next!=0){
		temp=temp->next;}
		
		temp->next=newnode;
		printf("\nOutput:- ");
		traverse();
		printf("\n\n");
	printf("Insertion of Data Successfully Done.\n\n");
	printf("................................................................................\n");
	return n++;
}
}}
int insertafternode(int value,int nodedata,int n){
	ptr=head;
	while(ptr->data!=nodedata){
		ptr=ptr->next;
		if(ptr==0)
		break;
	}
	
	if(ptr==0){
		printf("\n%d not found in list\n\n",nodedata);
		printf("List:- ");
		traverse();
		printf("\n\n");
		printf("Insertion of data Fail!!\n\n\n");
		printf("................................................................................");
		return;
	}
	else{
		struct node*newnode=(struct node*)malloc(sizeof(struct node));
		if(newnode==0){
		printf("Memory Allocation Fail!!\n\n");
        printf("Insertion of Data Fail!!\n");
        printf("................................................................................");
        return;
		}
		else{
			newnode->data=value;
			newnode->next=ptr->next;
			ptr->next=newnode;
			printf("\n\n");
			printf("Output:-");
			traverse();
			printf("\n\nInsertion of Data Successfully Done.\n\n");
			printf("................................................................................\n");
			return n++;
		}
	}
}
void swaping(int node1,int node2,int n){
	struct node *pt1=head,*pt2=head;
	int x;
	if(head!=0){
	
	if(n>1){
		
	if((n>=node1>=1 && n>=node2<=1)){
		while(node1!=1){
			pt1=pt1->next;
			node1--;
		}
			while(node2!=1){
			pt2=pt2->next;
			node2--;
		}
		x=pt1->data;
		pt1->data=pt2->data;
		pt2->data=x;
		printf("\n\n Output :-  ");
		traverse();
		printf("\n\n");
		printf("Swaping of Data Successfully Done.\n\n");
		printf("................................................................................\n");
	}
	else{
		printf("Please enter Valid Node No.s\n\n");
		printf("Swaping of Data Fail!!\n\n");
		printf("................................................................................\n");
		return;
	}}
else{
		printf(" Present Nodes are not Sufficiant for Swaping\n\n");
		printf("Swaping of Data Fail!!\n\n");
		printf("................................................................................\n");
		return;
	}}
	else{
		printf("List is Empty\n\n");
		printf("Swaping of Data Fail!!\n\n");
		printf("................................................................................\n");
	}
	
}
void replacing(int nodedata,int value){
	struct node*ptr=head;
	if(head!=0){
	
	while(ptr->data!=nodedata){
		ptr=ptr->next;
		if(ptr==0)
		break;
	}
	if(ptr==0){
		printf("\nEntered Data not found in List\n\n");
		printf("Replacing by new Data Fail !!\n\n");
		printf("................................................................................\n");
		return;
	}
	else{
		ptr->data=value;
		printf("\n\n Output :-  ");
		traverse();
		printf("\n\n");
		printf("Replacing by new Data Successfully Done.\n\n");
		printf("................................................................................\n");
	}}
	else{
		printf("\n\n List :-  ");
		traverse();
		printf("\n\n");
		printf("List is Empty\n\n");
		printf("Replacing of Data Fail !!\n\n");
		printf("................................................................................");
	}
}
int deletefrombegning(int n){
	struct node*ptr=head;
	if(head!=0){
	head=head->next;
	free(ptr);
	printf("Deletion of Data Successfully Done.\n\n");
	printf("................................................................................");
	return n--;
	
}
else{
	printf("List is Empty\n\n");
	printf("Deletion of Data Fail!!\n\n");
	printf("................................................................................");
	return;
}
}
int deleteafternode(int nodedata,int n){
	struct node *ptr2=0;
	ptr=head;
	if(head==0){
	printf("List is Empty\n\n");
	printf("Deletion of Data Fail!!\n\n");
	printf("................................................................................");
	return;
	}
	else{
		while(ptr->data!=nodedata){
			ptr2=ptr;
			ptr=ptr->next;
			if(ptr==0)
			break;
		}
		if(ptr==0){
			printf("Entered Data not Found in the List\n\n");
			printf("Deletion of Data Fail!!\n\n");
			printf("................................................................................");
			return;
		}
		else if(ptr==head){
			head=head->next;
			free(ptr);
			printf("Deletion of Data Successfully Done.\n\n");
			printf("................................................................................");
			return n--;
		}
		else{
			ptr2->next=ptr->next;
			free(ptr);
			printf("Deletion of Data Successfully Done.\n\n");
			printf("................................................................................");
			return n--;
		}
	}
}
int deletefromlast(int n){
	struct node *ptr2=0;//ptr2 to assign Null at last node.
	ptr=head;
	if(head==0){
	printf("\nList is Empty\n\n");
	printf("Deletion of Data Fail!!\n\n");
	printf("................................................................................");
	return;
	}	 
	else
	 {
		while(ptr->next!=0){
			ptr2=ptr;
			ptr=ptr->next;
		}
		if(ptr2==0){
		free(ptr);
		head=0;
		printf("\nDeletion of Data Successfully Done.\n\n");
		printf("................................................................................");
		return n--;}
		else{
		free(ptr);
		ptr2->next=0;
		printf("Deletion of Data Successfully Done.\n\n");
		printf("................................................................................");
		return n--;}
	}
	
}
void search(int value){
	ptr=head;
	int count=1;
	if(head==0){
	printf("\nList is Empty\n\n");
	printf("Searching of Data Fail!!\n\n");
	printf("................................................................................");
	return;	
	}
	else{
	while(ptr->data!=value){
		count++;
	    ptr=ptr->next;
		if(ptr==0)
		break;
	}
	
	if(ptr==0){
			printf("\nEntered Data not Found in the List\n\n");
			printf("  List:-  ");
			traverse();
			printf("\n\nSearching of Data Fail!!\n\n");
			printf("................................................................................");
			return;
	}
	else{
		printf("Entered Data Found in the List at %d Position\n\n",count);
		printf("  List:-  ");
		traverse();
		printf("\n\nSearching of Data Successfully Done.\n\n");
	}
	}
	printf("................................................................................");
}
void arrangeassendingorder(){
	
struct node *ptr1=head,*ptr2=head->next;
	int min;
	if(head!=0){
	
	for(ptr1=head;ptr1!=0;ptr1=ptr1->next){
		for(ptr2=ptr1->next;ptr2!=0;ptr2=ptr2->next){
		if(ptr1->data>ptr2->data){
		   min=ptr1->data;
		   ptr1->data=ptr2->data;
		   ptr2->data=min;}
		   
	}
	}
	printf("\nArrangement of Data In Descending Order Successfully Done.\n\n");
	printf("\n\nOutput:-  ");
  traverse();
  printf("\n\n");
  return;
}
else{
    printf("List is Empty\n\n");
	printf("Arrangement of Data In Descending Order Fail!!\n\n");
}
printf("................................................................................");
}
void arrangedecendingorder(){
struct node *ptr1=head,*ptr2=head->next;
	int min;
	if(head!=0){
	for(ptr1=head;ptr1!=0;ptr1=ptr1->next){
		for(ptr2=ptr1;ptr2!=0;ptr2=ptr2->next){
		if(ptr1->data<ptr2->data){
		   min=ptr1->data;
		   ptr1->data=ptr2->data;
		   ptr2->data=min;}	   	
	}
	
	}
	printf("Arrangement of Data In Descending Order Successfully Done.\n\n");
	printf("\n\nOutput:-  ");
	traverse();
	printf("\n\n");
	printf("................................................................................");
}
else{
    printf("List is Empty\n\n");
	printf("Arrangement of Data In Descending Order Fail!!\n\n");}
	printf("................................................................................");
}
void reverse(){//XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxx
	struct node *one=0,*two=head,*three=head->next;
	while(two!=NULL){
	two->next=one;
	one=two;
	two=three;
	if(three!=0)
	three=three->next;
	
	}
	head=one;
	printf("\n\n Output:-  ");
	traverse("Reverse Operation Successfully Done.\n\n");
	printf("\n................................................................................");
}
void min(){
	if(head==NULL){
	printf("List is Empty\n\n");
	printf("Searching of Minimum Data Operation Fail!!\n\n");
	printf("................................................................................");
	return;}
	else{
	ptr=head;
		int min=head->data;
		while(ptr!=0){
			if(ptr->data<min)
			min=ptr->data;
			
			ptr=ptr->next;
		}
		printf("Minimum Data: %d\n\n",min);
		printf("Searching of Minimum Data Operation Successfully Done.\n\n");	
	}
	printf("................................................................................");
}
void max(){
	if(head==NULL){
	printf("List is Empty\n\n");
	printf("Searching of Maximum Data Operation Fail!!\n\n");
	printf("................................................................................");
	return;
	}
	else{
	ptr=head;
		int max=head->data;
		while(ptr!=0){
			if(ptr->data>max)
			max=ptr->data;
			
			ptr=ptr->next;
		}
		printf("Maximum Data: %d\n\n",max);
		printf("Searching of Maximum Data Operation Successfully Done.\n\n");	
	}
	printf("................................................................................");
}
main(){
int choice=1,chance=3,n=5;
    int press,value,nodedata,node1,node2,nodeno;
	struct node *n1,*n2,*n3,*n4,*n5;
	n1=(struct node*)malloc(sizeof(struct node));
	n2=(struct node*)malloc(sizeof(struct node));
	n3=(struct node*)malloc(sizeof(struct node));
	n4=(struct node*)malloc(sizeof(struct node));
	n5=(struct node*)malloc(sizeof(struct node));
	n1->data=1;
	n1->next=n2;
	n2->data=3;
	n2->next=n3;
	n3->data=2;
	n3->next=n4;
	n4->data=5;
	n4->next=n5;
	n5->data=4;
	n5->next=NULL;
	head=n1;
while(chance>0&&choice!=0){
	printf("\n\n");
    printf(" * * * * O P E R A T I O N S  O F  S I N G L Y  L I N K E D L I S T * * * * *\n\n");
    printf("                       Select the Operation        \n\n");
    printf("  . . . . . . . . . . . . . . . . . . . . . . . . . . .\n\n");
	printf("  .    Press 1 for Inserting new data                 .\n\n");
	printf("  .    Press 2 for Updating data                      .\n\n");
	printf("  .    Press 3 for Deleting a data                    .\n\n");
	printf("  .    Press 4 for Searching a data                   .\n\n");
	printf("  .    Press 5 for Arrange in Ascending Order         .\n\n");
	printf("  .    Press 6 for Arrange in Descending Order        .\n\n");
	printf("  .    Press 7 for Reverse the Linkedlist             .\n\n");
	printf("  .    Press 8 for Minimum Value of  Linkedlist       .\n\n");
	printf("  .    Press 9 for Maximum Value of  Linkedlist       .\n\n");
	printf("  .    Press 10 for Traversing the Linkedlist         .\n\n");
	printf("  . . . . . . . . . . . . . . . . . . . . . . . . . . .\n\n");
    printf("      Press 0 for Exit                                  MADE BY:DHARMENDRA PATEL\n");
   scanf("%d",&choice); 
   printf("................................................................................\n");
   if(choice==0)
   break;
   switch(choice){
   	case 1:{ int c=3;
   	while(c>0){
   		printf("Press 1 to Insert at Begning Position\n\n");
   		printf("Press 2 to Insert after any node\n\n");
   		printf("Press 3 to Insert at End Position\n\n");
   		scanf("%d",&press);
   		if(press==1){
		   printf("Enter New Data:-\n");
		   scanf("%d",&value);
   		n=insertatbegning(value,n);
   		printf("\nOutput:-\n");
            traverse();
			printf("\n\n\n");
			printf("Insertion of Data Successfully Done.\n\n");
			printf("................................................................................");
			break;
               }
        else if(press==2){
        	printf("Enter Data of node after which new Data Inserted:\n");
        	scanf("%d",&nodedata);
			printf("Enter New Data:-\n");
			scanf("%d",&value);
		 n=insertafternode(value,nodedata,n);
			break;
		}
		else if(press==3){
		   printf("Enter New Data:-\n");
		   scanf("%d",&value);
   		n=insertatlast(value,n);
   		break;
          }
          else
          printf("Press Enter a Valid Number!!\n\n");
          c--;
		 }
		 if(c==0)
		 printf("No more tries!!");
          break;
         }
         case 2:{
		 int c=3;
         while(c>0){
         	printf("Press 1 for swaping data of two nodes\n\n");
         	printf("Press 2 for Replacing data of nodes with new data\n\n");
         	scanf("%d",&press);
         	if(press==1){
         		printf("\nEnter first node No.s");
         		scanf("%d",&node1);
         		printf("\nEnter Second node No.s\n\n");
         		printf("Enter first node No.s");
         		scanf("%d",&node2);
         		swaping(node1,node2,n);
         		break;
			 }
			 else if(press==2){
			 	printf("Enter the node data in which new data going to Replace\n");
			 	scanf("%d",&nodedata);
			 	printf("Enter new data:\n");
			 	scanf("%d",&value);
			 	replacing(nodedata,value);
			 	break;
			 }
			else{
				printf("Press a valid Number!!\n\n");
				c--;
			}
		 }
		 if(c==0)
		 printf("No more tries!!\n\n");
		 break;
		 }
        case 3:{
        	int c=3;
        	while(c>0){
			
   		printf("Press 1 to Delete from Begning Position\n\n");
   		printf("Press 2 to Delete after any given node\n\n");
   		printf("Press 3 to Delete End Position\n\n\n");
   		scanf("%d",&press);
   		if(press==1){
   		n=deletefrombegning(n);
   		printf("\n\n Output :-  ");
		traverse();
		printf("\n\n");
		printf("................................................................................");
   		break;
               }
        else if(press==2){
        	printf("Enter node data for Delete:\n");
        	scanf("%d",&nodedata);
			n=deleteafternode(nodedata,n);
			printf("\n\n Output :-  ");
		traverse();
		printf("\n\n");
		printf("................................................................................");
		break;
		}
		else if(press==3){
   		n=deletefromlast(n);
   	printf("\n\n Output :-  ");
		traverse();
		printf("\n\n");
		printf("................................................................................");
		break;
          }
          else
          printf("Press Valid Number!\n\n");
		       c--;
          
         }
         if(c==0)
         printf("No more tries!!\n\n");
         break;
		 }
		 case 4:{
		 	printf("Enter Data for Search:");
		 	scanf("%d",&value);
		 	search(value);
			break;
		 }
		 case 5:{
		 	arrangeassendingorder();
			break;
		 }
		 case 6:{
		 	arrangedecendingorder();
			break;
		 }
		 case 7:{
		 	reverse();
			break;
		 }
		 case 8:{
		 	min();
			break;
		 }		 
		 case 9:{
		 	max();
			break;
		 }
		 case 10:{
		 	traverse();
		 	printf("\n\nTraversing of Linkedlist Successfully Done.\n\n");
			break;
		 }
		 
		 default:{
		 	if(chance>1)
		 	printf("please Select a Valid Number!\n\n");
		 	chance--;
			break;
		 }		 		 
}
}
if(choice!=0)
printf("  No more tries!!\n\n");
printf("* * * * * * * * T H A N K S Y O U * * * * * * * * * * * *\n\n\n");
}
