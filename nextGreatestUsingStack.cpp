#include <iostream>
#include <stack>
using namespace std;

void printNGE(int array[],int len){
    stack <int> s;
    s.push(array[0]);

    for(int i=1;i<len;i++){

        /*if(s.empty()){
            s.push(array[i]);
            continue;
        }
        */

        while(s.empty()==false && s.top() < array[i]){
            cout<<s.top()<<"--->"<<array[i]<<"\n";
            s.pop();
        }
    
        s.push(array[i]);
        
    }
    
    while (s.empty() == false) { 
    cout << s.top() << " --> " << -1 << endl; 
    s.pop(); 
  } 
}
int main(){
    int arr[] = {1,1,1,1,1,1,1,1,1,1,1,1};
    int arraySize = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr,arraySize);
}