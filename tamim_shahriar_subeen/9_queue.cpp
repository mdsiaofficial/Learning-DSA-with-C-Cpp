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


#define qSize 10

typedef struct{
    int arr[qSize+1];
    int head;
    int tail;
}Queue;

bool enqueue(Queue *myqueue, int item){
    if((myqueue->tail +1) % (qSize+1) == myqueue->head){
        cout<<"Queue is full\n";
        return false;
    }
    myqueue->arr[myqueue->tail] = item;
    myqueue->tail = (myqueue->tail+1) % (qSize+1);
    return true; // Return true to indicate success
}

int dequeue(Queue *myqueue){
    int item;
    if(myqueue->tail == myqueue->head){
        cout<<"Queue is empty\n";
        return -1;
    }
    item = myqueue->arr[myqueue->head];
    myqueue->head = (myqueue->head+1)%(qSize+1);
    return item;
}

int main(){
    fastio;
    
    int item;
    Queue myq;
    myq.head = 0;
    myq.tail = 0;

    enqueue(&myq, 1);
    cout<<"Tail = "<<myq.tail<<nl;

    nll;
    enqueue(&myq, 54);
    cout<<"Tail = "<<myq.tail<<nl;
    
    nll;

    enqueue(&myq, 4);
    cout<<"Tail = "<<myq.tail<<nl;
    
    nll;

    enqueue(&myq, 5);
    cout<<"Tail = "<<myq.tail<<nl;
    
    nll;

    enqueue(&myq, 58);
    cout<<"Tail = "<<myq.tail<<nl;
    
    nll;

    enqueue(&myq, 8);
    cout<<"Tail = "<<myq.tail<<nl;
    
    nll;

    cout<<"Head: "<<myq.head<<nl;
    
    nll;

    item = dequeue(&myq);
    cout<<"Item: "<<item<<nl;
    cout<<"Tail = "<<myq.tail<<nl;
    
    nll;
    

    

    return 0;
}