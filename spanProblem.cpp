#include <iostream>
using namespace std;
int calculateSpan(int arr[],int length,int result[]){
    result[0] = 1;
    for(int i=1;i<length;i++){
        result[i]=1;

        for(int j=i-1;j>=0 && arr[i]>=arr[j];j--){
            result[i]++;
        }
    }
}

void printArray(int result[],int len){
    for(int i=0;i<len;i++){
        cout<<result[i]<<" ";
    }
}
int main(){
    int price[] = {10,4,5,90,120,80};
    int arrayLength = sizeof(price)/sizeof(price[0]);
    int s[arrayLength];

    calculateSpan(price,arrayLength,s);
    printArray(s,arrayLength);
}