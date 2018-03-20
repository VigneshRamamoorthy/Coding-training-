
#include <stdio.h>
#include<stdlib.h>
 //Compiler version gcc 6.3.0
 
 struct node{
 	int data;
 	struct node* next;
 };	
struct node* head=NULL;
struct node* revhead=NULL;
struct node* h=NULL;
void insert(int x){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
 struct node* temp1=(struct node*)malloc(sizeof(struct node));
 if(head==NULL){
 	
 
 temp->data =x;
 temp->next=NULL;
 head =temp;
 h=head;

 }
 else
 {
 	temp1->data=x;
 	temp1->next=NULL;
 	while(h->next!=NULL)
 	 h=h->next;
 h->next=temp1;	 
 }
	
}
void print(struct node *temp1){
	struct node *temp=temp1;
	while(temp!= NULL){
		printf("%d ",temp->data);
		temp=temp->next;
		
	}printf("\n");
	
}

struct node* reverse(){
	
	struct node *current,*prev,*next;
	current=head;
	prev=NULL;
	
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		
	}
	//head=prev;
	revhead=prev;
	return revhead;
	
}
void ispalindrome(struct node *a,struct node *b,int n){
	while(a!=NULL && b!=NULL){
		if(a->data==b->data){
			//printf("\n%d %d",a->data,b->data);
			a=a->next;
			b=b->next;
			n--;
			//if(n==0)
			 printf("Yes,it is a palindrome!!");
		}else{
			printf("OOOOOPSSS,it is not a palindrome!!");
			break;
		}
	}
}

 int main(void)
 {
 	int i, n, x;
 
 	printf("Enter number of elements:");
 	scanf("%d",&n);
 	for(i=0;i<n;i++){
 		printf("\nEnter element %d:\n",i+1);
 		scanf("%d",&x);
 		insert(x);
 		
 		
 	}
  printf("\n original list:\n");
 print(head);
 struct node *rev=reverse();
 printf("\nReversed list:\n")	;
 print(rev);
 ispalindrome(head,rev, n);
 	return 0;
 }
    
    
