#include<iostream>
using namespace std;


// This traversal is inorder traversal
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){ // constructor
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};
node* buildTree(node* root){

    cout<< "Enter the data for Node:  "<<endl;
    int data ;
    cin>>data;
    root = new node(data);

    if(data ==-1){
        return NULL;
    }

    cout<< " Enter data for the inserting in left : "<<data<< endl;
    root-> left = buildTree(root->left);
    cout<< " Enter data for the inserting in right : "<<data<<endl;
    root-> right = buildTree(root->right);
    return root;



}

int main(){

    node* root= NULL;  

    //creating a tree

    root = buildTree(root);


    return 0;
}
