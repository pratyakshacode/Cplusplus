#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node * left;
    Node * right;

    Node(int d){

        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* levelTraversalTree(Node * root){

    int data;
    queue<Node*> q;

    cout << "Enter data for the root Node: " << endl;
    cin >> data;

    root = new Node(data);

    q.push(root);

    while(!q.empty()){

        Node * temp = q.front();
        q.pop();

        int leftData;
        int rightData;

        cout << "Enter data for the left of " << temp -> data << endl;
        cin >> leftData;

        if(leftData != -1){
            temp -> left = new Node(leftData);
            q.push(temp -> left);
        }

        cout << "Enter data for the right of " << temp -> data << endl;
        cin >> rightData;

        if(rightData != -1){
            temp -> right = new Node(rightData);
            q.push(temp -> right);
        }

    }
    
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

//program to find the total no of leaf Nodes in the tree
void leafNode(Node* root, int & count){

    if(root == NULL){
        return;
    }

    leafNode(root -> left,count);

    if(root -> left == NULL || root -> right == NULL){
        count ++;
    }

    leafNode(root -> right, count);
}

// to find the height of the tree

int heightOfTree(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftHeight = heightOfTree(root -> left);
    int rightHeight = heightOfTree(root -> right);

    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}



//FINDING THE DIAMETER OF THE TREE
int diameterByHeight(Node* root){

    if(root == NULL){
        return 0;
    }

    int left = diameterByHeight(root -> left);
    int right = diameterByHeight(root -> right);
    int both = heightOfTree(root -> left) + heightOfTree(root -> right) + 1;

    int ans = max(left,max(right, both));

    return ans;
}

pair<int,int> optimalDiameter(Node* root){

    // pair === first -> diameter & second -> height

    if(root == NULL){
       return make_pair(0,0);
    }

    pair<int,int> left = optimalDiameter(root -> left);
    pair<int,int> right = optimalDiameter(root -> right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;

    ans.first = max(op1, max(op2,op3));
    ans.second = max(left.second, right.second) + 1;

    return ans; 

}


//CHECKING FOR THE BALANCED TREE

pair<int, bool> checkForBalance(Node* root){
    
    // pair -> int = height & pair -> bool = balance or not
    //h(l)- h(r) <= 1

    if(root == NULL){
        return make_pair(0,true);
    }

    pair<int, bool> left = checkForBalance(root -> left);
    pair<int, bool> right = checkForBalance(root -> right);

    int leftheight = left.first;
    int rightheight = right.first;

    pair<int, bool> ans;

    if(leftheight - rightheight <= 1){
        
        ans.second = true;
    }
    else{
        ans.second = false;
    }

    ans.first = max(left.first, right.first) + 1;

    return ans;

    
}


//CHECKING FOR THE TWO TREES ARE IDENTICAL OR NOT

bool identical(Node* root1, Node* root2){

    if(root1 == NULL && root2 == NULL) return true;
    else if(root1 == NULL && root2 != NULL) return false;
    else if(root1 != NULL && root2 == NULL) return false;

    bool left = identical(root1-> left, root2-> left);
    bool right = identical(root1-> right, root2 -> right);

    bool val = root1 -> data == root2 -> data;

    if(left && right && val) return true;
    else return false;
   
}


//VERTICAL ORDER TRAVERSAL

// vector<int, int>verticalOrderTraversal(Node* root){

// }

void depthFirstSearch(Node* root){

    if(root == NULL){
        return;
    }
    stack<Node*> s;
    s.push(root);

    while(!s.empty()){

        Node* temp = s.top();
        s.pop();

        cout << temp -> data << " ";

         if(temp->right){
            s.push(temp -> right);
        }

        if(temp -> left){
            s.push(temp -> left);
        }
       
    }

}

void inorderByIteration(Node* root){

    Node* curr = root;
    stack<Node*> s;

    while(curr != NULL || !s.empty()){

        while(curr != NULL){

            s.push(curr);
            curr = curr -> left;
        }
        curr = s.top();
        s.pop();

        cout << curr -> data << " ";
        curr = curr -> right;

       
    }
}
int main(){

//12 13 17 19 15 25 24 3 -1 -1 -1 -1 -1 -1 -1 -1 -1
Node* root = NULL;
Node* root2 = NULL;

root = levelTraversalTree(root);
cout << endl ; levelOrderTraversal(root);

cout << endl << "Inorder : " ;inorderTraversal(root);
cout << endl << "preOrder: " ; preOrder(root);
cout << endl << "PostOrder : "; postOrder(root);

int count = 0;

leafNode(root, count);
cout << endl << "There are total " << count << "(leaf Nodes) In Tree" << endl;

cout << endl << "Height of your tree is " << heightOfTree(root) << endl;
cout << "Diameter of the tree is : " << diameterByHeight(root) << endl;

cout << "Diameter by the optimal method: " << optimalDiameter(root).first << " and height is << " << optimalDiameter(root).second << endl;
if(checkForBalance(root).second){
    cout << "Your Tree is Balanced" << endl;
}
else{
    cout << "Your Tree is not Balanced" << endl;
}

cout << endl;
// root2 = levelTraversalTree(root2);

// if(identical(root, root2)){
//     cout << "Both trees are identical" << endl;
// }
// else{
//     cout << "They are not identical" << endl;
// }

cout << "Depth first Search: "; depthFirstSearch(root); cout << endl;
cout << "Inorder by iteration: "; inorderByIteration(root);
    return 0;
}