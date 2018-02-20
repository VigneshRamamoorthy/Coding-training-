
#include<iostream>
#include<stack>
using namespace std;
stack<char> S;          //creating a stack

int prec(char c)        //declaring precedence for operators
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
 

void infixToPostfix(string inf)   //coverting infix to postfix
{
  
    S.push('E');
    int l = inf.length();
    string post;
    for(int i = 0; i < l; i++)
    {
      
        if((inf[i] >= 'a' && inf[i] <= 'z')||(inf[i] >= 'A' && inf[i] <= 'Z'))   // if the character is an operand,add it to string post.
        post+=inf[i];
 
        else if(inf[i] == '(')         // If the character is a ‘(‘, push it to the stack.

         
        S.push('(');
         
       
        
        else if(inf[i] == ')')        // If the character is a ‘)’, pop and add it to string post
        {
            while(S.top() != 'E' && S.top() != '(')
            {
                char c = S.top();
                S.pop();
               post += c;
            }
            if(S.top() == '(')   //if  '(' is encountered pop it
            {
                char c = S.top();
                S.pop();
            }
        }
         
    //If an operator is encountered,check whether stack is not empty and check the precedence of scanned operator and top element
        else{
            while(S.top() != 'E' && prec(inf[i]) <= prec(S.top()))    
            {
                char c = S.top();
                S.pop();
                post += c;
            } 
            S.push(inf[i]);
        }
 
    }
    //Pop all the remaining elements from the stack and add it to string post
    while(S.top() != 'E')
    {
        char c = S.top();
        S.pop();
        post += c;
    }
     
    cout << post << endl; //printing the string post which contains postfix expression
 
}
 

int main()
{
    char exp[100];
    printf("enter the infix expression:");
    scanf("%s",exp);
    infixToPostfix(exp);
    return 0;
}
