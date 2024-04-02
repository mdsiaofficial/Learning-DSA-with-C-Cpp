#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define nl printf("\n");

#define ll long long
#define ld long double
#define ull unsigned long long


#define ff first
#define ss second
#define PLL pair<ll,ll>
#define pii pair<int,int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

// #define forn(i, n) for(int i = int(i); i < int(n); i++) 
// not efficient

#define mod9 90000007



//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe


#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct{
    char name[MAX_NAME];
    int age;
    //...others here
}person;

person *hash_table[TABLE_SIZE];

ull hash(char *name){
    int length = strnlen(name, MAX_NAME);
    ull hash_value = 0;
    for(int i=0; i<length; i++){
        hash_value+=name[i]*19;
        hash_value =(1+((hash_value/20) * name[i]) + MAX_NAME )%TABLE_SIZE;
    }
    return hash_value;
}

void init_hash_table(){
    for(int i=0; i<TABLE_SIZE; i++){
        hash_table[i]= NULL;
    }
    // 
}

int main(){
    
    // char s[MAX_NAME] = "Ashiq";
    char* ss[] = {"ash", "che", "ashiq", "chester"};
    int length = sizeof(ss)/sizeof(ss[0]);
    int sizeofarray = sizeof(ss);
    // printf("length: %d\n", length);
    // printf("Size of array: %d\n", sizeofarray);
    
    // The size of the [ss] array is 32 
    // because it's an array of pointers to characters (i.e., strings). 
    // In C, the size of a pointer is typically 4 or 8 bytes, 
    // depending on the architecture (32-bit or 64-bit). 

    // In your case, it seems like you're running this code on a 64-bit system, 
    // where the size of a pointer is 8 bytes. The ss array has 3 elements, 
    // each of which is a pointer to a string. 
    // So, the total size of the ss array is 3 8 = 24 bytes. 
    // This is why sizeof(ss) is 24. The sizeof operator in 
    // C returns the size of the object or type in bytes
    
    for(int i=0; i<length; i++){
        printf("%s\n", ss[i]);
    }

    return 0;
}