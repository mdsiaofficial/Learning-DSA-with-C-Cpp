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
typedef struct Node Node;
// struct Node{
//     int data;
//     Node *left;
//     Node *right;
// };


//  // +++ way 2 +++
typedef struct Node{
    int data;
    Node *left;
    Node *right;
} Node;


Node* get_new_node(int data){
    // Node *new_node = new Node(); // this works in cpp
    Node *new_node = malloc(sizeof(Node));
    
    if(new_node!=NULL){
        new_node->data = data;
        new_node->right = NULL;
        new_node->left = NULL;
    }
    return new_node;
}


void print_tree(Node *root){
    if(root== NULL){
        printf("Empty Tree\n");
        return;
    }

    printf("value = %d\n", root->data);
    printf("left\n");
    print_tree(root->left);
    printf("right\n");
    print_tree(root->right);

    // printf("\n\n");
}
int main(int argc, char **argv) {

    Node *n1 = get_new_node(15);
    Node *n2 = get_new_node(7);
    Node *n3 = get_new_node(4);
    Node *n4 = get_new_node(12);
    Node *n5 = get_new_node(23);

    n1->left = n2;
    n1->right = n3;

    n3->left = n4;
    n3->right = n5;

    print_tree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);


    return 0;
}