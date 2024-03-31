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

void merge(int arr[], int left, int mid, int right){

    int indexA=left, indexL=0, indexR=0;
    int sizeLeft, sizeRight;

    sizeLeft = mid - left + 1;
    sizeRight = right - mid;

    int L[sizeLeft], R[sizeRight];

    for(int i=0; i<sizeLeft; i++){
        L[i]=arr[left+i];
    }
    for(int i=0; i<sizeRight; i++){
        R[i]=arr[mid+1+i];
    }

    while(indexL<sizeLeft && indexR<sizeRight){
        if(L[indexL]<=R[indexR]){
            arr[indexA]=L[indexL]; indexL++;
        }else{
            arr[indexA]=R[indexR]; indexR++;
        }
        indexA++;
    }
    while (indexL<sizeLeft){
        arr[indexA] = L[indexL];
        indexL++;
        indexA++;
    }
    while (indexR<sizeRight){
        arr[indexA] = R[indexR];
        indexR++;
        indexA++;
    }
    
}
void mergeSort(int arr[], int left, int right){
    if(left>=right) return;

    int mid = left + (right - left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
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