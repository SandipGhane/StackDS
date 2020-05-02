#include <iostream>
#include <stack>
using namespace std;

struct Queque{
    stack <int> s;

    void enQueque(int x){
        s.push(x);
    }

    int deQueque(){
        if(s.empty()){
            cout<<"Queque Is Empty";
            exit(0);
        }
        int x=s.top();
        s.pop();

        if(s.empty()){
            return x;
        }

        int item = deQueque();
        s.push(x);
        return item;
    }
};

int main(){
    Queque q;
    q.enQueque(1);
    q.enQueque(2);
    q.enQueque(3);
    cout<<q.deQueque()<<"\n";
    cout<<q.deQueque()<<"\n";
    cout<<q.deQueque()<<"\n";
    cout<<q.deQueque()<<"\n";
}