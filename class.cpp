#include <iostream>
#include<string>
using namespace std;
 //Compiler version g++ 6.3.0
class person{
	string name;
	int age;
	float weight;
	public:
	person(){
		name="Jon Snow";
		age=30;
		weight=79;
	}
	
	void setvalue(){
		cout<<"Enter name:"<<endl;
		cin>>name;
		cout<<"Enter age:";
		cin>>age;
		cout<<endl<<"Enter weight:";
		cin>>weight;
	}
	void display(){
		cout<<endl<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Weight:"<<weight<<endl;		
	}
	protected:
	   string king="RAFA";
};


class derived:public person
{
	public:
	void protectedvalue(){
		cout<<endl<<king;
	}
};
 int main()
 {
 	person();
 	
 	person p1;derived d;
 	cout<<"default values:"<<endl;
 	p1.display();
 	p1.setvalue();
    p1.display();
    d.protectedvalue();
    
 }