#include <iostream>
#include <stack>
using namespace std;
bool isOperator(char c){
    switch(c){
        case '*':
        case '+':
        case '-':
        case '/':
        return true;
    }
    return false;
}

string prefixToPostfix(string prefix_str){
    stack <string> posfixStack;
    int length = prefix_str.size();

    for(int i=length-1;i>=0;i--){
        if(isOperator(prefix_str[i])){

            string op1 = posfixStack.top();
                posfixStack.pop();
            string op2 = posfixStack.top();
                posfixStack.pop();
            string temp = op1 + op2 + prefix_str[i];

            posfixStack.push(temp);
        }
        else{
            posfixStack.push(string(1,prefix_str[i]));
        }
    }
    return posfixStack.top();
}
int main(){
    string prefix = "*-A/BC-/AKL";
    cout<<"Postfix Expression:"<<prefixToPostfix(prefix);
}

/*

Postfix Expression>>    ABC/-AK/L-*

*/