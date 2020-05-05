# include <iostream>
#include <stack>
using namespace std;
void spanProblemUsingStack(int arr[],int len,int result[]){
    stack <int> s;
    s.push(0);

    result[0] = 1;

    for(int i=1;i<len;i++){

        while(!s.empty() && arr[s.top()]<=arr[i]){
            s.pop();
        }

        result[i] = (s.empty()) ? i+1 : (i-s.top());

        s.push(i);
    }
}
void printArray(int resultArr[],int size){
    for(int i=0;i<size;i++){
        cout<<resultArr[i]<<" ";
    }
}
int main(){
    int price[] = {10,4,5,90,120,80};
    int arrayLength = sizeof(price)/sizeof(price[0]);
    int s[arrayLength];
    spanProblemUsingStack(price,arrayLength,s);
    printArray(s,arrayLength);
}