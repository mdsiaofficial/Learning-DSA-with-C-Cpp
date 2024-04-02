#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

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


// Define the maximum length of a person's name
#define MAX_NAME 256
// Define the size of the hash table
#define TABLE_SIZE 20

// Define the structure of a person
typedef struct{
    char name[MAX_NAME];
    int age;
    //...other attributes here
}person;

// Initialize the hash table with the size defined above
person *hash_table[TABLE_SIZE];

// Define the hash function for a person's name
ull hash(char *name){
    // Get the length of the name
    int length = strnlen(name, MAX_NAME);
    // Initialize the hash value
    ull hash_value = 0;
    // Iterate over each character in the name
    for(int i=0; i<length; i++){
        // Add the ASCII value of the character to the hash value
        hash_value+=name[i];
    }
    // Modulo the hash value by the size of the hash table
    hash_value = (hash_value)%TABLE_SIZE;
    // Return the hash value
    return hash_value;
}

// Initialize the hash table
void init_hash_table(){
    for(int i=0; i<TABLE_SIZE; i++){
        // Set each entry in the hash table to NULL
        hash_table[i]= NULL;
    }
}

// Insert a person into the hash table
bool hash_table_insert(person *p){
    // If the person is NULL, return false
    if(p == NULL) {
        return false;
    }
    // Get the index in the hash table for the person's name
    int index = hash(p->name);
    // If the entry in the hash table is not NULL, return false
    if(hash_table[index] != NULL){
        return false;
    }
    // Insert the person into the hash table
    hash_table[index] = p;
    // Return true
    return true;
}

// Print the hash table
void print_hash_table(){
    for(int i=0; i<TABLE_SIZE; i++){
        // If the entry in the hash table is NULL, print the index and ---
        if(hash_table[i] == NULL){
            printf("\t%i\t---\n", i);
        }else{
            // If the entry in the hash table is not NULL, print the index and the person's name
            printf("\t%i\t%s\n", i, hash_table[i]->name);
        }
    }
}

// Find a person in the hash table
person *hash_table_find(char *name){
    // Get the index in the hash table for the person's name
    int index = hash(name);
    // If the entry in the hash table is not NULL and the name matches, return the person
    if(hash_table[index] != NULL && strncmp(hash_table[index]->name, name, TABLE_SIZE) == 0){
        return hash_table[index];
    }else{
        // If the person is not found, return NULL
        return NULL;
    }
}
int main(){
    
    char s[MAX_NAME] = "Ashiq";
    printf("Ash => %u\n",hash("Ash"));
    printf("Che => %u\n",hash("Ashiq"));
    printf("Ashiq => %u\n",hash("Ashiq"));
    printf("Chester => %u\n",hash("Chester"));
    printf("Amena => %u\n",hash("Amena"));
    printf("Kabir => %u\n",hash("Kabir"));
    printf("Jannat => %u\n",hash("Jannat"));
    printf("Mosharof => %u\n",hash("Mosharof"));
    printf("Mahi => %u\n",hash("Mahi"));
    printf("Zihad => %u\n",hash("Zihad"));
    printf("Ronaldo => %u\n",hash("Ronaldo"));

    char* ss[] = {"Ash", "Che", "Ashiq", "Chester", "Jannat", "Kabir", "Amena"};

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
    nl;
    init_hash_table();
    // print_hash_table();

    person Ash = {.name = "Ash", .age=24};
    person Che = {.name = "Che", .age=24};
    person Ashiq = {.name = "Ashiq", .age=24};
    person Chester = {.name = "Chester", .age=24};
    person Amena = {.name = "Amena", .age=40};
    person Kabir = {.name = "Kabir", .age=50};
    person Jannat = {.name = "Jannat", .age=16};
    person Mosharof = {.name = "Mosharof", .age=36};
    person Zihad = {.name = "Zihad", .age=36};
    person Mahi = {.name = "Mahi", .age=36};
    person Ronaldo = {.name = "Ronaldo", .age=36};

    hash_table_insert(&Ash);
    hash_table_insert(&Che);
    hash_table_insert(&Ashiq);
    hash_table_insert(&Chester);
    hash_table_insert(&Kabir);
    hash_table_insert(&Amena);
    hash_table_insert(&Jannat);
    hash_table_insert(&Mosharof);;
    hash_table_insert(&Zihad);
    hash_table_insert(&Mahi);
    hash_table_insert(&Ronaldo);

    print_hash_table();

    nl;

    person *find = hash_table_find("Zihad");
    if(find == NULL){
        printf("Not Found\n");
    }else{
        printf("Found %s\n", find->name);
    }
    return 0;
}