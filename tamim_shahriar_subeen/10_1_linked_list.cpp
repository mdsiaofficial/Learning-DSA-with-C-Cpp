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


// Define a new type 'Node' which is a pointer to a structure
typedef struct node Node;

// Define a structure 'node' which contains an 
// integer value and a pointer to the next node
struct node{
    int value;
    Node *next;
};

// Function to create a new node
Node *createNode (int item, Node *next){
    // Allocate memory for a new Node
    Node *newNode = (Node *) malloc (sizeof(Node));

    // Check if memory allocation was successful
    if(newNode == NULL){
        cout<<"Error! Could not create a new Node\n";
        exit(1);
    }

    // Set the value and next pointer of the new node
    newNode->value = item;
    newNode->next = next;

    // Return the new node
    return newNode;
}

// Function to remove a node from the linked list
// It takes the head of the linked list and the node to be removed as input
// It returns the head of the linked list after the removal
Node *removeNode (Node *head, Node *node){

    // If the node to be removed is the head of the linked list
    if(node == head){
        // Update the head to the next node
        head = node->next;
        // Free the memory of the removed node
        free(node);
        // Return the updated head
        return head;
    }

    // If the node to be removed is not the head, traverse the linked list
    Node *currentNode = head;
    while (currentNode != NULL){
        // If the next node of the current node is the node to be removed, break the loop
        if(currentNode->next == node) break;

        // Move to the next node
        currentNode = currentNode->next;
    }

    // If the current node is NULL, the node to be removed is not in the linked list
    if(currentNode == NULL) return head;
    
    // Update the next pointer of the current node to skip the node to be removed
    currentNode->next = node->next;
    // Free the memory of the removed node
    free(node);

    // Return the head of the updated linked list
    return head;
}

// Function to prepend a node to the linked list
// It takes the head of the linked list and the item to be added as input
// It returns the head of the linked list after the addition
Node *prepend (Node *head, int item){
    // Create a new node with the given item and the current head as the next node
    Node *newNode = createNode(item, head);
    // Return the new node
    return newNode;
}

// Function to append a node to the linked list
// It takes the head of the linked list and the item to be added as input
// It returns the head of the linked list after the addition
Node *append (Node *head, int item){
    // Create a new node with the given item and NULL as the next node
    Node *newNode = createNode(item, NULL);
    // If the linked list is empty, the new node becomes the head
    if(head == NULL){
        return newNode;
    }
    // If the linked list is not empty, traverse it to the last node
    Node *currentNode = head;
    while(currentNode->next != NULL){
        currentNode = currentNode->next;
    }
    // Add the new node to the end of the linked list
    currentNode->next = newNode;
    // Return the head of the updated linked list
    return head;
}

// This function inserts a new node with the given item after the given node in the linked list.
// It takes the node after which the new node is to be inserted and the item to be inserted as input.
// It does not return anything as the linked list is updated in place.
void insert(Node *node, int item){
    // Create a new node with the given item and the next node of the given node as the next node
    Node *newNode = createNode(item, node->next);
    // Update the next pointer of the given node to point to the new node
    node->next = newNode;
}

void printLinkedList(Node *head){
    Node *currentNode = head;
    while (currentNode != NULL){
        cout<<"Data: "<<currentNode->value<<nl;
        cout<<"Next: "<<currentNode->next<<nl;

        currentNode = currentNode->next;
    }
    
}

int main(){
    fastio;
    
    // Node *n;

    // n = createNode(1, NULL);
    // cout<<"Data = "<<n->value<<nl<<"Next = "<<n->next;

    // Create the first node with value 1 and set its next pointer to NULL
    Node *head = createNode(1, NULL);
    // Create a pointer to traverse the linked list, starting from the head
    Node *current = head;
    // Print the data and next pointer of the current node
    // cout<<"Data = "<<current->value<<nl<<"Next = "<<current->next;
    nll;

    // Create the second node with value 2 and set its next pointer to NULL
    current->next = createNode(2, NULL);
    // Move the current pointer to the next node
    current = current->next;
    // Print the data and next pointer of the current node
    // cout<<"Data = "<<current->value<<nl<<"Next = "<<current->next;
    nll;

    // Create the third node with value 3 and set its next pointer to NULL
    current->next = createNode(3, NULL);
    // Move the current pointer to the next node
    current = current->next;
    // Print the data and next pointer of the current node
    // cout<<"Data = "<<current->value<<nl<<"Next = "<<current->next;
    nll;

    // Create the fourth node with value 4 and set its next pointer to NULL
    current->next = createNode(4, NULL);
    // Move the current pointer to the next node
    current = current->next;
    // Print the data and next pointer of the current node
    // cout<<"Data = "<<current->value<<nl<<"Next = "<<current->next;
    nll;

    // Create the fifth node with value 5 and set its next pointer to NULL
    current->next = createNode(5, NULL);
    // Move the current pointer to the next node
    current = current->next;
    // Print the data and next pointer of the current node
    // cout<<"Data = "<<current->value<<nl<<"Next = "<<current->next;
    nll;

    // Create the sixth node with value 6 and set its next pointer to NULL
    current->next = createNode(6, NULL);
    // Move the current pointer to the next node
    current = current->next;
    // Print the data and next pointer of the current node
    // cout<<"Data = "<<current->value<<nl<<"Next = "<<current->next;
    nll;

    // Check if all the nodes are connected
    // Reset the current pointer to the head
    current = head;
    // Iterate over the linked list
    while(current != NULL){
        // Print the data and next pointer of the current node
        cout<<"Data = "<<current->value<<nl<<"Next = "<<current->next;
        nll;
        // Move the current pointer to the next node
        current = current->next;
    }

    return 0;
}