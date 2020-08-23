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

class BinarySearchTraversal{
public:

    //PreOrder:
    //1. Visit the root
    //2. Traverse the left subtree
    //3. Traverse the right subtree

    void preOrderTraversal(Node *root){
        if(root == NULL){
            return;
        }
        cout<<root->getData()<<" ";
        preOrderTraversal(root->leftChild);
        preOrderTraversal(root->rightChild);
    }

    //InOrder:
    //1. Traverse the left subtree
    //2. Visit the root
    //3. Traverse the right subtree

    void inOrderTraversal(Node *root){
        if(root == NULL){
            return;
        }
        inOrderTraversal(root->leftChild);
        cout<<root->getData()<<" ";
        inOrderTraversal(root->rightChild);
    }

    //PostOrder:
    //1. Traverse the left subtree
    //2. Traverse the right subtree
    //3. Visit the root

    void postOrderTraversal(Node *root){
        if(root == NULL){
            return;
        }
        postOrderTraversal(root->leftChild);
        postOrderTraversal(root->rightChild);
        cout<<root->getData()<<" ";

    }

};

int main(){

BST bst;
bst.add(7);
bst.add(1);
bst.add(0);
bst.add(3);
bst.add(2);
bst.add(5);
bst.add(4);
bst.add(6);
bst.add(9);
bst.add(8);
bst.add(10);

BinarySearchTraversal preOrder;
cout<<"Pre ORDER ->  ";
preOrder.preOrderTraversal(bst.root);

cout<<endl;
cout<<endl;
cout<<"In ORDER ->   ";
preOrder.inOrderTraversal(bst.root);

cout<<endl;
cout<<endl;
cout<<"POST ORDER -> ";
preOrder.postOrderTraversal(bst.root);

cout<<endl;
cout<<endl;
return 0;
}
