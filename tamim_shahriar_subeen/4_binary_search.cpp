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


int binarySearch(int arr[], int len, int key){
    int low = 0; 
    int high = len-1;
    int mid;
    while (low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==key) return mid;

        if(arr[mid]<key) low = mid+1;
        else high = mid-2;
    }
    return -1;
}
int main(){
    fastio;
    nll;

    int key = 8;
    // sorting array.
    int numbers[] = {1,9,2,6,2,3,4,8,1,5,3,9,5,6,7};
    int len = sizeof(numbers)/sizeof(numbers[0]);
    sort(begin(numbers),end(numbers));
    // sort(numbers.begin(), numbers.end()); // not work for array


    for(int x: numbers){
        cout<<x<<" ";
    }
    nll;


    // sorting vector
    vector<int> numbers2 = {1,9,2,6,2,3,4,8,1,5,3,9,5,6,7};
    // sort(begin(numbers2),end(numbers2)); // work for vector
    sort(numbers2.begin(), numbers2.end()); // work for vector
    
    
 
    for(int x: numbers2){
        cout<<x<<" ";
    }
    nll;

    int arr[] = {1,2,3,4,5,6,7,8,9,11,3,14,16,17};
    int index = binarySearch(arr, len, key);

    if(index>=0){
        cout<<"found at index: "<<index;
    }else{
        cout<<"Not found";
    }
    nll;

    
    return 0;
}