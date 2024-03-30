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


// This function implements the selection sort algorithm.
// It takes an array 'arr' and its size 'n' as input.
// The function sorts the array in non-decreasing order.
void selectionSort(int arr[], int n){
    // Initialize variables for the minimum index and a temporary variable for swapping.
    int minIndex, temp;
    // Iterate over the array from the first element to the second last.
    for(int i=0; i<n-1; i++){
        // Assume the current index is the minimum.
        minIndex = i;
        
        // Iterate over the array from the next element to the last.
        for(int j=i+1; j<n; j++){
            // If the current element is less than the assumed minimum, update the minimum index.
            if(arr[j]< arr[minIndex]){
                minIndex = j;
            }
        }
        // If the minimum index is not the current index, swap the elements.
        if(minIndex!=i){
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
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
    selectionSort(arr, len);
    // O(n^2);

    return 0;
}