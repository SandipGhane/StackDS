#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char c){
    switch(c){
        case '+':
        case '-':
        case '*':
        case '/':
        return true;
    }
    return false;
}

string prefixToInfix(string prefix_str){
    stack <string> infStack;
    int str_length = prefix_str.length();

    for(int i = str_length; i >= 0; i--){
        if(isOperator(prefix_str[i])){

            string op1 = infStack.top();
            infStack.pop();
            string op2 = infStack.top();
            infStack.pop();

            string temp = "(" + op1 + prefix_str[i] + op2 + ")";
            infStack.push(temp);
        }
        else{
            infStack.push(string(1,prefix_str[i]));
        }
    }
    return infStack.top();    
}

int main(){
    string prefix = "*A/BC-/AKL";
    cout<<"Infix Expression"<<prefixToInfix(prefix);
}