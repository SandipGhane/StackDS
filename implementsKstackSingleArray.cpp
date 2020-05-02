#include <iostream>
using namespace std;
class kStacks{
    int *arr;
    int *top;
    int *next;
    int n,k;
    int free;
    public:
        kStacks(int k,int n);
        bool isFull(){
            return (free==-1);
        }

        void push(int item,int sn);
        int pop(int sn);

        bool isEmpty(int sn){
            return (top[sn]==-1);
        }
};

kStacks::kStacks(int k1,int n1){
        k=k1,n=n1;
        arr = new int[n];
        top = new int[k1];
        next = new int[n];

        for(int i=0;i<k;i++){
            top[i]=-1;
        }
        free=0;
        for(int j=0;j<n;j++){
            next[j]=j+1;
        } 
        next[n-1]= -1;
}

void kStacks::push(int item,int sn){
    if(isFull()){
        cout<<"\nStack is Overflow";
        return;
    }
    int i = free;   
    free = next[i];

    next[i] = top[sn];
    top[sn]=i;

    arr[i]=item;

}
int kStacks::pop(int sn){
    if(isEmpty(sn)){
        cout<<"Stack is UnderGrow";
    }
    int i = top[sn];
    top[sn] = next[i];
    next[i] = free;
    free = i;

    return arr[i];
}
int main(){
    int k=3,n=10;
    kStacks ks(k,n);


    ks.push(13,2);
    ks.push(18,2);
    cout<<"poped"<<ks.pop(2)<<"\n";
    cout<<"poped"<<ks.pop(2)<<"\n";
    cout<<"poped"<<ks.pop(2)<<"\n";
}