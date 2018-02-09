#include<stdio.h>
#include<stdlib.h>

struct person{
	int age;
	float weight;
	char first_name[20];
	char last_name[20];
	int lucky_numbers[5];
	
}person1;

void main(){
	
	int i;
	printf("Enter age of person1:");
	scanf("%d",&person1.age);
	printf("\nEnter the weight of person1:");
	scanf("%f",&person1.weight);
	printf("\nEnter the first name:");
	scanf("%s",person1.first_name);
	printf("\nEnter the last name:");
	scanf("%s",person1.last_name);
	printf("\nEnter lucky numbers:");
	for(i=0;i<5;i++)
	 scanf("%d",&person1.lucky_numbers[i]);
	printf("\n%d\t%.2fkg\t%s %s",person1.age,person1.weight,person1.first_name,person1.last_name);
	for(i=0;i<5;i++)
	printf(" %d",person1.lucky_numbers[i]);
	
}