#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c){
    switch(c){
        case '/':
        case '*':
        case '+':
        case '-':
        return true;
    }
    return false;
}
string postfixToPrefix(string postfixStr){
    stack <string> postfixStack;
    int length = postfixStr.size();

    for(int i=0;i<length;i++){
        if(isOperator(postfixStr[i])){
            string op1 = postfixStack.top();
                postfixStack.pop();
            string op2 = postfixStack.top();
                postfixStack.pop();
            string temp = postfixStr[i] + op2 + op1;

            postfixStack.push(temp);
        }
        else{
            postfixStack.push(string(1,postfixStr[i]));
        }
    }

    return postfixStack.top();
}

int main(){
    string postfix = "ABC/-AK/L-*";
    cout<<"Prefix String>>"<<postfixToPrefix(postfix);
    return 0;

}