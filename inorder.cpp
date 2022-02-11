#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

};

struct Node *createNode(int val){
    struct Node *temp =(struct Node *)malloc(sizeof(struct Node));
    temp->data=val;
    temp->left=temp->right=NULL;
    return temp;

};

void inorder(struct Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<"";
        inorder(root->right);

    }
}

struct Node* insertNode(struct Node* Node,int val){
    if(Node==NULL)
        return createNode(val);
    
    if(val<Node->data)
        Node->left=insertNode(Node->left,val);


    
    else if(val>Node->data)
        Node->right=insertNode(Node->right, val);

    return Node;


    


}

int main(){
    struct Node *root=NULL;
    root=insertNode(root,4);
    insertNode(root,5);
    insertNode(root,2);
    insertNode(root,9);
    insertNode(root,1);
    insertNode(root,3);
    cout<<"In-order traversal of the binary search tree is:";
    inorder(root);

    return 0;


}