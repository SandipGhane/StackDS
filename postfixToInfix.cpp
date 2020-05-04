#include <iostream>
#include <stack>
using namespace std;

bool isOperand(char c){
    return (c >= 'a' && c <= 'z') || 
          (c >= 'A' && c <= 'Z');
}

string postfixToInfix(string postfixStr){
    stack <string> postfixStack;
    int len = postfixStr.size();

    for(int i=0;i<len;i++){
        if(isOperand(postfixStr[i])){
           // postfixStack.push(string(1,postfixStr[i]));
           string op(1,postfixStr[i]);
           postfixStack.push(op);
        }
        else{
            string op1 = postfixStack.top();
                postfixStack.pop();
            string op2 = postfixStack.top();
                postfixStack.pop();

             postfixStack.push("(" + op2 + postfixStr[i] + op1 + ")"); 
        }

    }
    return postfixStack.top();
}
int main(){
    string postfix = "ab*c+";
    cout<<"Infix String"<<postfixToInfix(postfix);
}