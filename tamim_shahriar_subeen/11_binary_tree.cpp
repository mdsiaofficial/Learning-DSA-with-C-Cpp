#include<bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define nll cout<<endl
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

// #define forn(i, n) for(int i = int(i); i < int(n); i++) 
// not efficient

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe
//          or 
//  ./temp.exe


// Define a new type 'Node' which is a pointer to a structure
typedef struct node Node;

// Define a structure 'node' which contains an 
// integer value and a pointer to the next node
struct node{
    int value;
    Node *left;
    Node *right;
};

// Function to create a new node in the binary tree
Node *treeNode(int item){
    // Allocate memory for the new node
    Node *newNode = (Node *)malloc(sizeof(Node));

    // Check if memory allocation was successful
    if(newNode == NULL){
        // Print error message and exit the program if memory allocation failed
        cout<<"Error creating Node and memory location.\n";
        exit(1);
    }
    // Set the value of the new node
    newNode->value = item;
    // Initialize the left and right child of the new node to NULL
    newNode->left = NULL;
    newNode->right = NULL;

    // Return the new node
    return newNode;
}

// Function to add a left child to a node in the binary tree
void addLeftChild(Node *node, Node *child){
    // Set the left child of the node
    node->left = child;
}

// Function to add a right child to a node in the binary tree
void addRightChild(Node *node, Node *child){
    // Set the right child of the node
    node->right = child;
}

// Function to create a binary tree
Node *createTree(){
    // Create the root node with value 2
    Node *two = treeNode(2);

    // Create the left child of the root node with value 7
    Node *seven = treeNode(7);
    // Create the right child of the root node with value 3
    Node *three = treeNode(3);
    // Add the left and right child to the root node
    addLeftChild(two, seven);
    addRightChild(two, three);

    // Create the left child of the left child of the root node with value 9
    Node *nine = treeNode(9);
    // Create the right child of the left child of the root node with value 96
    Node *nintysix = treeNode(96);
    // Add the left and right child to the left child of the root node
    addLeftChild(seven, nine);
    addRightChild(seven, nintysix);

    // Create the left child of the right child of the root node with value 10
    Node *ten = treeNode(10);
    // Create the right child of the right child of the root node with value 56
    Node *fiftysix = treeNode(56);
    // Add the left and right child to the right child of the root node
    addLeftChild(three, ten);
    addRightChild(three, fiftysix);

    // Create the left child of the right child of the left child of the root node with value 34
    Node *thirtyfour = treeNode(34);
    // Add the left child to the right child of the left child of the root node
    addLeftChild(nintysix, thirtyfour);

    // Create the left child of the left child of the right child of the root node with value 25
    Node *twentyfive = treeNode(25);
    // Create the right child of the left child of the right child of the root node with value 78
    Node *seventyeight = treeNode(78);
    // Add the left and right child to the left child of the right child of the root node
    addLeftChild(ten, twentyfive);
    addRightChild(ten, seventyeight);
    
    // Return the root node of the binary tree
    return two;
}

void preOrder(Node *node){
    cout<<"Node: "<<node->value;
    nll;
    if(node->left != NULL){
        preOrder(node->left);
    }
    if(node->right != NULL){
        preOrder(node->right);
    }
}

void postOrder(Node *node){
    if(node->left != NULL){
        postOrder(node->left);
    }
    if(node->right != NULL){
        postOrder(node->right);
    }
    cout<<"Node: "<<node->value;
    nll;
}

void inOrder(Node *node){
    if(node->left != NULL){
        inOrder(node->left);
    }
    cout<<"Node: "<<node->value;
    nll;
    if(node->right != NULL){
        inOrder(node->right);
    }
}
int main(){
    fastio;
    
    
    Node *root = createTree();
    // cout<<" Root: "<<root->value;
    cout<<"Pre-Order Binary Tree:\n";
    preOrder(root);
    nll;nll;
    cout<<"Post-Order Binary Tree:\n";
    postOrder(root);
    nll;nll;
    cout<<"In-Order Binary Tree:\n";
    inOrder(root);

    return 0;
}