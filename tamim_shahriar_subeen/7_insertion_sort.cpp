#include <bits/stdc++.h>
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


// This function implements the insertion sort algorithm.
// It takes an array 'arr' and its size 'n' as input.
// The function sorts the array in non-decreasing order.
void insertionSort(int arr[], int n){
    // Iterate over the array from the second element to the last.
    for(int i=1; i<n; i++){
        
        // Store the current element in a temporary variable.
        int temp = arr[i];
        // Initialize a variable to traverse the sorted part of the array.
        int j = i-1;

        // Move the elements of the sorted part of the array that are greater than the current element to one position ahead of their current position.
        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        // Insert the current element at its correct position in the sorted part of the array.
        arr[j+1]=temp;

    }

    // Print the sorted array.
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    nll;
}
int main(){
    fastio;
    
    int arr[17] = {6,8,1,9,2,6,2,3,4,8,1,5,3,9,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"Casual/Unsorted array: \n";
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    nll;
    

    cout<<"Sorted array: \n";
    insertionSort(arr, len);
    // O(n^2) in the worst case, but O(n) in the best case.

    return 0;
}