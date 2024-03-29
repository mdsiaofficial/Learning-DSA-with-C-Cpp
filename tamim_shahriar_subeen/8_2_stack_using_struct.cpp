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

// learning struct //
// struct Player{
//     char name[50];
//     int score;
// };

// learning typedef
// typedef char user[25]; 
//giving a nickname of char is user which is 25 size

// example of casual stuct
// struct User{
//     char name[25];
//     char pass[16];
//     int id;
// };

// typedef struct
// typedef struct{
//     char nameStu[25];
//     int idStu;
// } InfoStu;

// making my stack using struct
#define maxStack 1000

struct Stack {
    int top;
    int data[maxStack];
};

// pushing the value at the top of the stack
void push(struct Stack *stack, int item) {
    if (stack->top < maxStack) {
        stack->data[stack->top] = item;
        stack->top++;
    } else {
        printf("Stack is full!\n");
    }
}

// returning the last value of stack
int pop(struct Stack *stack) {
    int item;
    if (stack->top <= 0) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        stack->top--;
        item = stack->data[stack->top];
    }
    return item;
}

void printStack(struct Stack *stack){
    nll;
    if(stack->top==0){
        cout<<"Stack Out.\n";
        return;
    }
    for(int i=stack->top-1; i>=0; i--){
        cout<<i<<" : "<<stack->data[i]<<nl;
    }
    nll;
}



int main(){
    fastio;

    // STRUCT EXAMPLE
    // struct Player p1;
    // struct Player p2;
    // strcpy(p1.name, "Ashiq");
    // p1.score = 45;

    // strcpy(p2.name, "Chester");
    // p2.score = 34;

    // printf("%s\n", p1.name);
    // printf("%d\n", p1.score);


    // I'm using the struct keyword to define a new user u1 with name "Ashiq", password "pass1" and id 123.
    // struct User u1 = {"Ashiq", "pass1", 123};
    // struct User u2 = {"Chester", "pass2", 234};
    // cout<<u1.id<<" : "<<u1.name<<nl;
    // cout<<u2.id<<" : "<<u2.name<<nl;


    // InfoStu i1 = {"Ashiq", 123};
    // InfoStu i2 = {"Chester", 234};
    // cout<<i1.idStu<<" : "<<i1.nameStu<<nl;
    // cout<<i2.idStu<<" : "<<i2.nameStu<<nl;
    
    struct Stack newStack;
    newStack.top=0;
    push(&newStack, 1);
    push(&newStack, 2);
    push(&newStack, 3);

    printStack(&newStack);

    int popItem = pop(&newStack);
    cout<<"pop item: "<<popItem<<nl;
    nll;
    printStack(&newStack);

    return 0;
}