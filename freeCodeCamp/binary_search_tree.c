#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ll long long
#define ld long double
#define ull unsigned long long

#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for(int i = 0; i < int(n); i++)
#define mod9 90000007

//  // +++ way 1 +++
// typedef struct Node Node;
// struct Node{
//     int data;
//     Node *left;
//     Node *right;
// };


//  // +++ way 2 +++
typedef struct {
    int data;
    Node *left;
    Node *right;
} Node;


Node* get_new_node(int data){
    // Node *new_node = new Node(); // this works in cpp
    Node *new_node = malloc(sizeof(Node));
    new_node->data = data;
}

int main(int argc, char **argv) {
    
    Node *root; // pointer of root
    root = NULL; // assign NULL;

    Insert(root, 15);

    return 0;
}