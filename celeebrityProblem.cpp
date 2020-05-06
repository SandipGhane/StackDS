#include<iostream>
using namespace std;
#define N 4

bool MATRIX[4][4]={ {0, 0, 1, 0}, 
                    {0, 0, 1, 0}, 
                    {0, 0, 0, 0}, 
                    {0, 0, 1, 0} 
                };

bool known(int r,int c){
    return(MATRIX[r][c]);
}
int findCelebrity(int rc){
    int a = 0;
    int b = rc-1;
    while(a<b){
        if(known(a,b)){
            a++;
        }
        else{
            b--;
        }
    }
    for(int i=0;i<rc;i++){
        if((i != a) && (known(a,i) || !known(i,a))){
            return -1;
        }
    }

    return a;
}

int main(){
    int n=4;
    int id = findCelebrity(n);
    id == -1 ? cout<<"No Celebrity" : cout<<"Celebrity =>"<<id;
}