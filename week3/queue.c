#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int front=-1,rear=-1;
int a[100];
bool isempty(){
	if(front==-1&&rear==-1)
	   return true;
	 else
	 return false;  
}
void enqueue(int x){
	if(isempty()==true){
		front++;
	    rear++;
		a[rear]=x;
	}
	else if(rear==(sizeof(a)-1)){
			printf("\nqueue is full");
	}else{
			rear++;
			a[rear]=x;
		}
}
int dequeue(){
	int temp;
	temp=a[front];
	front++;
	return temp;
}
void print(){
	int i;

	printf("\nQueue:\t");
	for(i=front;i<=rear;i++)
	printf("%d\t",a[i]);
	printf("\n");

}
int frontelement(){
	int fro;
	fro= a[front];
	return fro;
}




void main(){
	int ch,element;
	printf("1.Insert element to queue.\n2.Delete element from queue.\n3.Display front of the queue.\n4.Display all elements of queue.\n5.Exit\n");
	do{
	
	printf("enter your choice:");
	scanf("%d",&ch);

	
	switch(ch){
		case 1:  printf("element to insert: ");
		         scanf("%d",&element);
		 		 enqueue(element);
		 	     break;
		case 2:   printf("\nDeleted: %d\n",dequeue());
		          break;
		case 3:
			     printf("\nFront of the Queue:\t%d\n",frontelement());
				 break;
	    case 4: 	print();
	                break;
		default:  break;
	
    }
}while(ch>0 && ch<=4);


}
