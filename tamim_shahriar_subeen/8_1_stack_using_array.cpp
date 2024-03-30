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


// This code defines a stack using an array.
// The maximum size of the stack is defined by the constant MAX.
#define MAX 10
int arrStack[MAX];
int top = -1;

// This function pushes a new value to the top of the stack.
// If the stack is already full, it prints "Stack Overflow" and returns.
void push(int data){
    if(top==(MAX-1)) {
        cout<<"Stack Overflow.\n";
        return; 
        // The return statement in a void function will exit the
        // function and return control to the calling function.
    }
    top++;
    arrStack[top]=data;
}

// This function pops the top value from the stack and returns it.
// If the stack is empty, it prints "Stack Empty" and exits the program.
int pop(){
    if(top==-1){
        cout<<"Stack Empty.\n";
        exit(1);
        // The exit() function is used to terminate the program. 
        // The argument passed to exit() is a status code, 
        // which is returned to the operating system. 
        // A status code of 0 indicates a successful termination, 
        // while a non-zero status code indicates an error.
    }
    int item;
    item = arrStack[top];
    top--;
    return item;
}

// This function prints the current state of the stack.
// If the stack is empty, it prints "Stack Out".
void printStack(){
    nll;
    if(top==-1){
        cout<<"Stack Out.\n";
        return;
    }
    for(int i=top; i>=0; i--){
        cout<<i<<" : "<<arrStack[i]<<nl;
    }
    nll;
}


int main(){
    fastio;

    push(4);
    push(6);
    push(7);
    push(11);
    push(52);
    push(76);
    push(11);
    push(52);
    push(76);
    push(11); // 10th
    push(52); // will return "Stack Overflow" for this.
    push(76); // will return "Stack Overflow" for this.

    printStack();

    int outt = pop();
    cout<<"POP: "<<outt<<nl;
    outt = pop();
    cout<<"POP: "<<outt<<nl;
    outt = pop();
    cout<<"POP: "<<outt<<nl;

    printStack();
 
    return 0;
}