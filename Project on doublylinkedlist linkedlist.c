#include<stdio.h>
#include<stdlib.h>
void search(int);
int insertatlast(int,int);
int insertatbegning(int,int);
int insertafternode(int,int,int);
void Replacing(int,int);
struct node{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=0,*temp=0,*ptr=0,*newnode=0,*trav;
int insertatlast(int value,int n){
	 newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode!=NULL){
		newnode->data=value;
		newnode->prev=0;
		newnode->next=0;
		if(head==0){
			head=newnode;
			temp=newnode;
		}
		else{
			
		   	temp->next=newnode;
		    newnode->prev=temp;
			temp=newnode;
		}
		n+=1;
		return n;
	}
	else
	{
	printf("Memory allocation Fail!!\n\n");
	}
}
void traverse(){
	trav=head;
	if(head==0)
	printf("\nList is Empty!!\n\n");
	else{
     printf("NULL--><--");
	while(trav!=NULL){
		printf(" %d--> <--",trav->data);
		trav=trav->next;
	}
	printf("NULL\n\n");
}}
int insertatbegning(int value,int n){
	 newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode!=NULL){
		newnode->data=value;
		newnode->prev=0;
		newnode->next=0;
		
		if(head==NULL){
			head=newnode;
			ptr=head;
			temp=head;
		}
		else{
		ptr=head;
		ptr->prev=newnode;
		newnode->next=ptr;
		ptr=newnode;
		head=ptr;
		}
		n+=1;
		return n;
	}
	else
	{
	printf("Memory allocation Fail!!\n\n");
	return n;
	}

}
int insertafternode(int value,int nodedata,int n){
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode!=NULL){
		newnode->data=value;
		newnode->prev=0;
		newnode->next=0;
		
		if(head==NULL){
		printf("\n\nList is Empty!!\n\n");
		return n;
		}
		else{
			struct node *p=head;
			while(p->data!=nodedata && p->next!=0)
			p=p->next;
			if(p->data==nodedata){
				if(p==temp){
					temp->next=newnode;
					newnode->prev=temp;
					temp=newnode;
				}
				else if(p==head){
					newnode->next=head;
					head->prev=newnode;
					head=newnode;
				}
				else{
					newnode->next=p->next;
					p->next->prev=newnode;
					newnode->prev=p;
					p->next=newnode;
				}
				n++;
			}
			else{
				printf("\nEntered Data Not Exist In List!!\n\n");
			}
		return n;
	}
	
	return n;
	}

}
void swapping(int node1,int node2){
	struct node *n1=0,*n2=0;
	n1=head;
	n2=head;
	int x;
	if(head!=0){
	
	while(n1->next!=0 && n1->data!=node1 )
	      n1=n1->next;
		if(n1->data!=node1){
		 printf("\n%d  not Found in given List\n\n",node1);
		 printf("Swaping of Data fail!!\n\n");
		 return;}
		
			
	while(n2->next!=0 && n2->data!=node2 )
	      n2=n2->next;
		if(n2->data!=node2){
		 printf("\n%d  not Found in given List\n\n",node2);
		 printf("Swaping of Data fail!!\n\n");
		 return;}
		 
		x=n1->data;
		n1->data=n2->data;
		n2->data=x;
		printf("\n Output:-");
		traverse();
		printf("\nSwaping of Data Successfully Done.\n\n");
	}
	else{
	
	printf("\nList is Empty!!\n\n");
	printf("Swaping of Data fail!!\n\n");
}
}
void Replacing(int nodedata,int value){
	ptr=head;
	while(ptr->data!=nodedata && ptr->next!=NULL){
		ptr=ptr->next;
	}
	if(ptr->data==nodedata){
	ptr->data=value;
	printf("\n Output:-");
		traverse();
	printf("\nReplacing of New Data Successfully Done.\n\n");
	}
	else{
	printf("Entered Data not found in List!\n\n");
	printf("Replacing of New Data fail\n\n");
	}
}
int deletefrombegning(int n){
	if(head==NULL){
		printf("List is Empty!!\n\n");
		return n;
	}
	else if(head->next==0){
		free(head);
		head=0;
		printf("\n Output:-");
		traverse();
		n--;
	  return n;
	}
	else{
	ptr=head;
	head=head->next;
	head->prev=0;
	free(ptr);
	printf("\n Output:-");
		traverse();
		n--;
	return n;
}}
void backwardtraverse(){
		trav=temp;
	if(head==0){
	printf("\nList is Empty!!\n\n");
	}

	else{
		printf("NULL--><--");
		while(trav!=0)
		{
			printf(" %d--> <--",trav->data);
			trav=trav->prev;
		}
		printf("NULL\n\n");
	}
}
int deleteafternode(int nodedata,int n){
	struct node *del=head;
	if(head==0){
	printf("\n!!List is Empty!!\n\n");
	return n;}
	else{
		while(del->data!=nodedata && del->next!=0)
		del=del->next;
		if(del->data==nodedata){
			if(del==head){
				head=head->next;
				free(del);
				if(head!=0)
				head->prev=0;
				else
				head=0;
			}
			else if(del==temp){
				temp=temp->prev;
				free(del);
				temp->next=0;
			}
			else{
			del->prev->next=del->next;
			del->next->prev=del->prev;
			free(del);
			}
		}
		else
		printf("\nEnter Data Not Exist in List!!\n\n");
		n--;
		
	}
	return n;
}
int deletefromlast(int n){
	struct node *del;
	if(head==0){
	printf("!!List is Empty!!\n\n");
	return n;}
	else{
		del=temp;
		temp=temp->prev;
		free(del);
		if(temp!=0)
		temp->next=0;
		else{
		temp=0;
		head=0;}
		n--;
		return n;
	}
}
void search(int value){
	struct node *search=head;
	int k=1;
	if(head==0){
		printf("\nList is Empty!!\n\n");
		printf("\n\nSearching of data fail!!\n\n");
	}
	else{
		while(search->data!=value &&search->next!=0){
		k++;
		search=search->next;}
		if(search->data==value){
			printf("\n%d found in List at Position %d.\n\n",value,k);
			printf("List:-\n\n");
			traverse();
			printf("\n\nSearching of data Successfully Done.\n\n");
		}
		else{
		printf("\n%d not exist in List!!\n\n",value);
		printf("\n\nSearching of data Successfully Done.\n\n");
	}}
}
void arrangeassendingorder(){
	struct node *arr1,*arr2;
	int i,j,k;
	for(arr1=head;arr1!=0;arr1=arr1->next){
	for(arr2=arr1->next;arr2!=0;arr2=arr2->next){
		if((arr1->data)>(arr2->data)){
			k=arr2->data;
			arr2->data=arr1->data;
			arr1->data=k;
		}
	}	
	}
	printf("Arranged List :-\n");
	 traverse();
	 printf("Arrangement of Data Successfully Done.\n\n");
	
}
void arrangedecendingorder(){
		struct node *arr1,*arr2;
	int i,j,k;
	for(arr1=head;arr1!=0;arr1=arr1->next){
	for(arr2=arr1->next;arr2!=0;arr2=arr2->next){
		if((arr1->data)<(arr2->data)){
			k=arr2->data;
			arr2->data=arr1->data;
			arr1->data=k;
		}
	}	
	}
	printf("Arranged List :-\n");
	 traverse();
	 printf("Arrangement of Data Successfully Done.\n\n");
	
}
void min(){
	struct node *min=head->next;
	int k=head->data,x=2,count;
	while(min!=0){
		if((min->data)<k){
	       k=min->data;
	       count=x;
		}
			x++;
		min=min->next;
	
	}
	printf("Minimum data=%d\n",k);
	printf("Position of Data in List=%d\n\n",count);
	printf("List:-\n");
	traverse();
}
void max(){
		struct node *max=head->next;
	int k=head->data,x=2,count;
	while(max!=0){
		if((max->data)>k){
	       k=max->data;
	       count=x;
		}
			x++;
		max=max->next;
	
	}
	printf("Maximum data=%d\n",k);
	printf("Position of Data in List=%d\n\n",count);
	printf("List:-\n");
	traverse();
}
int main(){
	struct node* m1=(struct node*)malloc(sizeof(struct node));
	struct node* m2=(struct node*)malloc(sizeof(struct node));
	struct node* m3=(struct node*)malloc(sizeof(struct node));
	struct node* m4=(struct node*)malloc(sizeof(struct node));
	struct node* m5=(struct node*)malloc(sizeof(struct node));
	head=m1;
	m1->data=4;
	m1->prev=0;
	m1->next=m2;
	m2->data=5;
	m2->prev=m1;
	m2->next=m3;
	m3->data=1;
	m3->prev=m2;
	m3->next=m4;
	m4->data=9;
	m4->next=m5;
	m4->prev=m3;
	m5->data=3;
	m5->next=0;
	m5->prev=m4;
	temp=m5;
	int n=0;
	int choice=1,chance=3,s=0;
    int press,value,nodedata,node1,node2,nodeno;
while(chance>0&&choice!=0){
	printf("\n\n");
    printf(" * * * * O P E R A T I O N S  O F  D O U B L Y  L I N K E D L I S T * * * * *\n\n");
    printf("                       Select the Operation        \n\n");
    printf("  . . . . . . . . . . . . . . . . . . . . . . . . . . .\n\n");
	printf("  .    Press 1 for Inserting new data                 .\n\n");
	printf("  .    Press 2 for Updating data                      .\n\n");
	printf("  .    Press 3 for Deleting a data                    .\n\n");
	printf("  .    Press 4 for Searching a data                   .\n\n");
	printf("  .    Press 5 for Arrange in Ascending Order         .\n\n");
	printf("  .    Press 6 for Arrange in Descending Order        .\n\n");
	printf("  .    Press 7 for Minimum Value of  Linkedlist       .\n\n");
	printf("  .    Press 8 for Maximum Value of  Linkedlist       .\n\n");
	printf("  .    Press 9 for Forward Traversing the Linkedlist  .\n\n");
	printf("  .    Press 10 for Backward Traversing the Linkedlist.\n\n");
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
		   s=n;
   	    n=insertatbegning(value,n);
   		if(n>s){
   		printf("\nOutput:-\n");
            traverse();
			printf("\n\n\n");
			printf("Insertion of Data Successfully Done.\n\n");
			printf("................................................................................");
			break;
               }}
        else if(press==2){
        	printf("Enter Data of node after which new Data Inserted:\n");
        	scanf("%d",&nodedata);
			printf("Enter New Data:-\n");
			scanf("%d",&value);
			s=n;
	       n=insertafternode(value,nodedata,n);
	       if(n>s){
   		printf("\nOutput:-\n");
            traverse();
			printf("\n\n\n");
			printf("Insertion of Data Successfully Done.\n\n");
			printf("................................................................................");
			break;
		}
		 else{
		   	printf("Insertion of Data Fail!!.\n\n");
		   	break;
		   }
		   }
		else if(press==3){
		   printf("Enter New Data:-\n");
		   scanf("%d",&value);
		  s=n; 
   		n=insertatlast(value,n);
   		if(n>s){
   			printf("\nOutput:-\n\n");
             traverse();
			printf("\n\n\n");
			printf("Insertion of Data Successfully Done.\n\n");
			printf("................................................................................");
			break;	
		   }
		   else{
		   	printf("Insertion of Data Fail!!.\n\n");
		   	break;
		   }
          }
          else
          printf("Press a Valid Number!!\n\n");
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
         		printf("\nEnter first node data");
         		scanf("%d",&node1);
         		printf("\nEnter Second node No.s\n\n");
         		scanf("%d",&node2);
             	swapping(node1,node2);
         		break;
			 }
			 else if(press==2){
			 	printf("Enter the node data in which new data going to Replace\n");
			 	scanf("%d",&nodedata);
			 	printf("Enter new data:\n");
			 	scanf("%d",&value);
			 	Replacing(nodedata,value);
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
   			s=n;
   		n=deletefrombegning(n);
   		if(n<s){
   		printf("\nDeletion of Data Successfully Done.\n\n");
		printf("\n\n");
		printf("................................................................................");
   		break;
               }
        else{
          printf("\nDeletion of data Fail!!\n\n");
          printf("................................................................................");
		  break;     	
			   }
			   }
        else if(press==2){
        	printf("Enter node data for Delete:\n");
        	scanf("%d",&nodedata);
        	s=n;
		n=deleteafternode(nodedata,n);
		if(n<s){
		  printf("\n\n Output :-  ");
		  traverse();
		  printf("\n\nDeletion Of Data Successfully Done.");}
		  else{
		  	 printf("\nDeletion of data Fail!!");
		  }
		printf("\n\n");
		printf("................................................................................");
		break;
		}
		else if(press==3){
			s=n;
   		n=deletefromlast(n);
   		if(s>n){
   	    printf("\n\n Output :-  ");
		traverse();
		 printf("\n\nDeletion Of Data Successfully Done.");}
		 else
		  printf("\nDeletion of data Fail!!");
		 
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
		 min();
			break;
		 }		 
		 case 8:{
		 	max();
			break;
		 }
		 case 9:{
		 	traverse();
		 	printf("\n\nTraversing of Linkedlist Successfully Done.\n\n");
			break;
		 }
		  case 10:{
		 	backwardtraverse();
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
return 0;}
	

