#include<stdio.h>
#include<stdlib.h>

// for c
#define nl printf("\n");

#define ll long long
#define ld long double
#define ull unsigned long long


#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

// #define forn(i, n) for(int i = int(i); i < int(n); i++) 
// not efficient

#define mod9 90000007



//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe


// Define a new type 'Node' which is a pointer to a structure
typedef struct node Node;

struct node{
    int value;
    Node *next;
} *top = NULL;


void pushNode(int data){
    Node *newNode;
    newNode = malloc(sizeof(Node));

    if(newNode == NULL){
        printf("Null");
        exit(1);
    }
    newNode->value = data;
    newNode->next = NULL;

    newNode->next = top;
    top = newNode;
}

void printLinkedList(){
    Node *currentNode = top;
    while (currentNode != NULL){
        printf("Data: %d\n", currentNode->value);
        // The (void *) is added before the currentNode->next to cast the pointer to a generic pointer type (void *).
        // This is done to avoid any potential warnings or errors related to pointer type mismatch.
        printf("Next: %p\n", (void *)currentNode->next);
        currentNode = currentNode->next;
    }
    nl;
    
}

int main(){
    
    int inp, data;
    while (1){
        printf("1. Push Node\t2. Print Node\t3. Quit\n");
        printf("Enter your choice(1-3): ");
        scanf("%d", &inp);
        nl;
        switch (inp){
        case 1:
            printf("Enter the element to push: ");
            scanf("%d", &data);
            pushNode(data);
            nl;
            break;
        case 2:
            printLinkedList();
            nl;
            break;
        case 3:
            nl;
            exit(1);
        default:
            printf("Wrong Input\n");
            break;
        }
    }
    

    return 0;
}