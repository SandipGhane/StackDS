#include <iostream>
#include <stack>
using namespace std;


bool checkBalParenthesis(string expression){
    stack <char> s;
    char x;
    for(int i=0;i<expression.length();i++){
        if(expression[i] == '(' || expression[i] == '{' || expression[i]=='['){
            s.push(expression[i]);
            continue;
        }
        if(s.empty()){
            return false;
        }

        switch(expression[i]){
            case ')':
                x=s.top();
                s.pop();
                if(x=='{' && x=='['){
                    return false;
                }
                break;
            case '}':
                x=s.top();
                s.pop();
                if(x=='(' && x=='['){
                    return false;
                }
                break;
            case ']':
                x = s.top();
                s.pop();
                if(x=='{' || x=='('){
                    return false;
                }
                break;
        }
        
    }
    return (s.empty());
}
int main(){
    string expr = "{(])}[]";
    if(checkBalParenthesis(expr)){
        cout<<"Balance Parenthesis Expr";
    }
    else{
        cout<<"Not Balance Parenthesis Expr";
    }
}