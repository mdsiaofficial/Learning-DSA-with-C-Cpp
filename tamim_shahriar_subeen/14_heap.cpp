#include<bits/stdc++.h>
#include <stdlib.h>
#include <algorithm>
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

#define forn(i, n) for(int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed<<setprecision(int(n))
#define s(n) setprecision(int(n))


#define fastio std::ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe


// Function to get the left child index of a node in a heap
int leftIndex(int i){
    return i*2;
}
// Function to get the right child index of a node in a heap
int rightIndex(int i){
    return i*2+1;
}
// Function to get the parent index of a node in a heap
int parentIndex(int i){
    return i/2;
}

// Function to maintain the max heap property
void maxHeap(int heap[], int size, int i){
    int left, right, large, temp;
    left = leftIndex(i);
    right = rightIndex(i);
    if(left <= size and heap[left] > heap[i]){ 
        large = left;
    }else {
        large = i;
    }
    if(right <= size and heap[right] > heap[i]){
        large = right;
    }
    if(large != i){
        temp = heap[i];
        heap[i] = heap[large];
        heap[large] = temp;

        maxHeap(heap, size, large);
    }
}

// Function to maintain the min heap property
void minHeap(int heap[], int size, int i){
    int left, right, small, temp;
    left = leftIndex(i);
    right = rightIndex(i);
    if(left <= size and heap[left] < heap[i]){ 
        small = left;
    }else {
        small = i;
    }
    if(right <= size and heap[right] < heap[i]){
        small = right;
    }
    if(small != i){
        temp = heap[i];
        heap[i] = heap[small];
        heap[small] = temp;

        minHeap(heap, size, small);
    }
}

// Function to build a max heap
void buildMaxHeap(int heap[], int size){
    for(int i=size/2; i >= 1; i--){
        maxHeap(heap, size, i);
    }
}

// Function to perform heap sort
void heapSort(int heap[], int size){
    int temp;
    for(int i = size; i>1; i--){
        temp = heap[1];
        heap[1] = heap[i];
        heap[i] = temp;
        size--;
        maxHeap(heap, size, 1);
    }
}
int main(){
    fastio;
    nll;

    int heap[] = {0, 4, 10, 3, 5, 1};
    int size = 5;

    buildMaxHeap(heap, size);

    cout<<"Build Heap Called: ";
    for(int i=1; i<=size; i++){
        cout << heap[i] << " ";
    }
    cout << endl;
    nll;

    heapSort(heap, size);
    cout<<"Heap Sort Called: ";
    for(int i=1; i<=size; i++){
        cout << heap[i] << " ";
    }
    cout << endl;

    return 0;
}