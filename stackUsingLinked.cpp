#include <iostream>
using namespace std;

class stackNode{
    public:
        int data;
        stackNode* next;
};
bool isEmpty(stackNode* root){
    return !root;
}
void push(stackNode** root , int data){
    stackNode* new_node = new stackNode();
    new_node->data = data;
    new_node->next = *root;
    *root = new_node;
}
int peek(stackNode* root){
    if(isEmpty(root)){
        return INT32_MIN;
    }
    else{
        return root->data;
    }
}
int pop(stackNode** root){
    if(isEmpty(*root)){
        return 0;
    }
    stackNode* temp = *root;
    *root = (*root)->next;
    cout<<"Poped"<<temp->data;
    free(temp);
    return (*root)->data;
}
void printStack(stackNode* root){
    while(root!=NULL){
        cout<<"----"<<"\n";
        cout<<root->data<<"\n";
        root=root->next;
    }
    cout<<"----"<<"\n";
}
int main(){
    stackNode* root = NULL;

    push(&root,2);
    push(&root,7);
    push(&root,87);
    push(&root,78);
    printStack(root);
    cout<<"Peek Element"<<peek(root)<<"\n";
    pop(&root);
      cout<<"After Poped Element\n";
      printStack(root);
}