#include <iostream>
#include <stack>
using namespace std;

int main(){
    int a[] = {1, 1, 2, 3, 4, 2, 1}; 
    int len = 7; 
    int max = INT16_MAX; 
    cout<<"max=>"<<max;

    for(int i=0;i<len;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    cout<<"After"<<max;
    int freq[max+1] = {0};
}