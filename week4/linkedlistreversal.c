#include <stdio.h>
#include<stdlib.h>
//Compiler version gcc 6.3.0

struct node{
int data;
struct node* next;
};	
struct node* head=NULL;
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
void print(){
struct node* temp=head;
while(temp!= NULL){
printf("%d",temp->data);
temp=temp->next;

}printf("\n");
}

void reverse(){
	struct node *current,*prev,*next;
	current=head;
	prev=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
int main()
{
int i, n, x;
//head = NULL;
printf("Enter number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nEnter element %d:\n",i+1);
scanf("%d",&x);
insert(x);



}
printf("\nOriginal list\n");
print();
reverse();
printf("\nReversed list\n");
print();
return 0;
}
