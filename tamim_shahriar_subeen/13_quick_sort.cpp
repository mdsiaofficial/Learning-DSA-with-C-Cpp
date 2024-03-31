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
//          or 
//  ./temp.exe


// This function takes the last element as pivot, places the pivot 
// element at its correct position in sorted array, 
// and places all smaller (smaller than pivot) to left of 
// pivot and all greater elements to right of pivot.
int partition(int arr[], int low, int high){
    int pivot, i, j, temp;
    pivot = arr[high];
    i=low-1;
    for(j=low; j<high; j++){
        if(arr[j] < pivot) {
            i++;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }

    temp = arr[high];
    arr[high] = arr[i+1];
    arr[i+1] = temp;

    return i+1;
}
// The main function that implements QuickSort
// arr[] --> Array to be sorted, 
// low  --> Starting index, high  --> Ending index
void quickSort(int arr[], int low, int high){
    // If low is smaller than high, then the array is not sorted
    if(low>=high) return;
    int pivot;
    pivot = partition(arr, low, high);

    // Recursively sort elements before partition and after partition
    quickSort(arr, low, pivot-1);
    quickSort(arr, pivot+1, high);
}

int main(){
    fastio;
    

    int n = 11;
    int arr[n]={7,3,6,2,11,24,4,2,17,5,9};
    quickSort(arr, 0, n-1);

    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    nll;

    return 0;
}