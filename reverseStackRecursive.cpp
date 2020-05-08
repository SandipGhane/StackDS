#include<iostream>
#include<stack>
using namespace std;
stack <char> s;
string ns;

char insertAtBottom(char c){
    if(s.size()==0){
        s.push(c);
    }
    else{
        char a = s.top();
        s.pop();
        insertAtBottom(c);
       // cout<<a<<"\n";
        s.push(a);
        //cout<<a<<"\n";
    }
}
char reverse(){
    if(s.size()>0){

        char x = s.top();
        s.pop();
        reverse();

        insertAtBottom(x);
    }
}

int main(){
    s.push('1');
    s.push('2');
    s.push('3');
    s.push('4');

    reverse();
    while(!s.empty()) 
    { 
        char p=s.top(); 
        s.pop(); 
        ns+=p; 
    } 
      
    //display of reversed stack 
    cout<<ns[3]<<" "<<ns[2]<<" "
        <<ns[1]<<" "<<ns[0]<<endl; 
    return 0;
}