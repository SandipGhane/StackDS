#include <iostream>
using namespace std;
#define MAX 1000

class Stack{
     int top;
    public:
        int arr[MAX];
    Stack(){
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};

 bool Stack :: push(int x){
        if(top>=(MAX-1)){
            cout<<"Stack OverFlow";
            return false;
        }
        else{
            arr[++top] = x;
            cout<<x<<" pushed into stack";
            return true;
        }
    }
    int Stack :: pop(){
        if(top<0){
            cout<<"Stack underGrow";
            return 0;
        }
        else{
            int x = arr[top--];
            return x;
        }
    }
    int Stack :: peek(){
        if(top<0){
            cout<<"Stack is empty";
            return 0;
        }
        else{
             int x = arr[top];
             return x;
        }
       
    }
    bool Stack :: isEmpty(){
        return (top<0);
    }

int main(){
    class Stack s;
    //Stack s = new Stack();
    s.push(12);
    int x=s.peek();
    cout<<x;
}