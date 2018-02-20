#include<iostream>
#include<string.h>
#include<stack>
#include<stdio.h>
#include<array>

using namespace std;
stack<char> s;

void checks(char a[],int b){
	int i;
	for(i=0;i<b;i++){
		if(a[i]=='(' || a[i]=='['||a[i]=='{')	{
		s.push(a[i]);
	}
	else if(a[i]==')'&& s.top()=='('){
		s.pop();
		
		
	}
	else if(a[i]==']'&& s.top()=='['){
		s.pop();
		
		
	}
	
	else if(a[i]=='}'&& s.top()=='{'){
		s.pop();
		}
		
	}
	

   if(s.empty()==true){
		printf("YES");
	}else{
		printf("NO");
	}
	
   
}


int main(){
	int n;
	char exp[20];
	cout<<"Enter the expression:";
	cin>>exp;
	n=strlen(exp);
	checks(exp,n);
}
    
