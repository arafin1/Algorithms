#include<iostream>
using namespace std;

class Node{
public:

    Node *leftChild;
    Node *rightChild;
    int data;

    Node(){
        leftChild = NULL;
        rightChild = NULL;
        data = 0;
    }

    Node(int data){
        leftChild = NULL;
        rightChild = NULL;
        this->data = data;
    }
    void setData(int data){
        this->data = data;
    }
    int getData(){
        return data;
    }
};

class BST{
public:

    Node *root;
    BST(){
        root = NULL;
    }
    bool isEmpty(){
        return root == NULL;
    }
    void add(int value){
        root = adds(root, value);
    }

    Node *adds(Node *root,int value){
        if(root == NULL){
            root = new Node(value);
        }else if( root ->getData() > value){
            root->leftChild = adds(root->leftChild, value);
        }else if( root ->getData() < value){
            root->rightChild = adds(root->rightChild, value);
        }

        return root;
    }

    bool search(int x){
        return searches(root,x);
    }

    bool searches(Node * root, int x){
        bool found = false;
        while((root != NULL) && !found ){
            if(root->getData() > x){
                root = root -> leftChild;
            }else if(root->getData() < x){
                root = root -> rightChild;
            }else{
                found = true;
                break;
            }
            found = searches(root,x);
        }
        return found;
    }
};


int main(){

BST bst;
bst.add(33);
bst.add(3);
bst.add(93);
bst.add(73);
bst.add(30);

if(bst.search(300)){
    cout<<"TRUE"<<endl;
}else{
    cout<<"False"<<endl;
}
return 0;
}
