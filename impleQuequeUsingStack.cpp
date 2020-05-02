#include <iostream>
using namespace std;
#include <stack>

struct impleQuequeUsingStack{
    stack <int> s1,s2;

    void enQueque(int x){

        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void deQueque(){
       if(s1.empty()){
           cout<<"Empty Queque";
       }
       int x = s1.top();
       s1.pop();
       cout<<"Dequeue Element:"<<x<<"\n";
    }
};
int main(){
    impleQuequeUsingStack q;
    q.enQueque(1);
    q.enQueque(2);
    q.enQueque(3);
    q.deQueque();
    q.deQueque();
    q.deQueque();   
}