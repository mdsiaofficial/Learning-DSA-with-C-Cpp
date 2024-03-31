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

// Function to merge two subarrays of arr[]
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(int arr[], int left, int mid, int right){

    // Initialize variables
    int indexA=left, indexL=0, indexR=0;
    int sizeLeft, sizeRight;

    // Calculate sizes of two subarrays
    sizeLeft = mid - left + 1;
    sizeRight = right - mid;

    // Create temporary arrays
    int L[sizeLeft], R[sizeRight]; 

    // Copy data to temporary arrays L[] and R[]
    for(int i=0; i<sizeLeft; i++){
        L[i]=arr[left+i];
    }
    for(int i=0; i<sizeRight; i++){
        R[i]=arr[mid+1+i];
    }

    // Merge the temporary arrays back into arr[left..right]
    while(indexL<sizeLeft && indexR<sizeRight){
        if(L[indexL]<=R[indexR]){
            arr[indexA]=L[indexL]; indexL++;
        }else{
            arr[indexA]=R[indexR]; indexR++;
        }
        indexA++;
    }

    // Copy the remaining elements of L[], if there are any
    while (indexL<sizeLeft){
        arr[indexA] = L[indexL];
        indexL++;
        indexA++;
    }

    // Copy the remaining elements of R[], if there are any
    while (indexR<sizeRight){
        arr[indexA] = R[indexR];
        indexR++;
        indexA++;
    }
    
}

// Main function that sorts arr[left..right] using merge()
void mergeSort(int arr[], int left, int right){
    // Base case: If left is greater than or equal to right
    if(left>=right) return;

    // Find the middle point
    int mid = left + (right - left)/2;

    // Sort first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);

}



int main(){
    fastio;
    

    int n = 11;
    int arr[n]={7,3,6,2,11,24,4,2,17,5,9};
    mergeSort(arr, 0, n-1);

    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    nll;

    return 0;
}