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


int main(){
    fastio;
    nll;

    int n=5;
    // scanf("%d", &n);
    if (n%2==0){
        printf("%d is even", n);

    } else {
        printf("%d is odd", n);
    }
    nll;
    cout<<"Size of n: "<<sizeof(n);
    // n takes only 4 bytes

    nll;

    int e[100];
    forn(i, 100){
        e[i]=0;
    }
    cout<<sizeof(e);
    nll;

    int r[100];
    forn(i, 100){
        i++;
        r[i]=0;
    }
    cout<<sizeof(r);
    nll;


    
    // reversing an array.
    int nu[7] = {1,2,3,4,5,6,7};
    reverse(begin(nu), end(nu));
    // begin(array), end(array)
    cout<<nu[0];
    nll;

    reverse(nu, nu+7);
    // arr, arr+len
    cout<<nu[0];
    nll;

    vector<int>nu2 = {1,2,3,4,5,6,7};
    reverse(nu2.begin(), nu2.end());
    // arr.begin(), arr.end()
    cout<<nu2[0];


    return 0;
}