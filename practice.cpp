#include<bits/stdc++.h>
using namespace std;

//very good 
class Node{

    public:

    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }


};


//CREATING THE TREE

Node* createTree(Node* root){

    int data;

    cout << "Enter data: ";
    cin >> data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);

    cout << "Enter data for the left of " << data << endl;
    root -> left = createTree(root -> left);

    cout << "Enter data for the right of " << data << endl;
    root -> right = createTree(root -> right);


    return root;
}

void levelOrderTraversal(Node* root){

    queue<Node*>q;
    
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }

        else{

            cout << temp -> data << " ";

            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }

        }
    }
}

void inorderTraversal(Node* root){

    if(root == NULL){
        return ;
    }

    inorderTraversal(root-> left);
    cout << root -> data << " ";
    inorderTraversal(root -> right);

}

void preOrder(Node* root){

    if(root == NULL){
        return ;
    }

    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);


}

void postOrder(Node * root ){

    if(root == NULL){
        return ;
    }

    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}
int main(){
    //12 13 19 -1 -1 15 -1 -1 17 -1 -1
    Node* root = NULL;

    root = createTree(root);
    cout << endl;

    levelOrderTraversal(root);

    cout << endl;

    cout << "Inorder : "; inorderTraversal(root);
    cout << endl << "postOrder : " ; postOrder(root);
    cout << endl << "preOrder: " ; preOrder(root);
    return 0;


    //15 6 13 19 -1 -1 -1 16 -1 -1 7 27 -1 -1 28 25 -1 -1 30 -1 -1
}