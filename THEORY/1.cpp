#include<bits/stdc++.h>
using namespace std; 
int main(){
    // Int Array
    int a[] = {1,2,3,4};
    for ( int i =0; i< sizeof(a)/sizeof(a[0]); i++){
        cout<<a[i];
    }
    cout<<endl;

    // Char Array
    char b[] = {'a','b','c'};
    for ( int i =0; i< sizeof(b)/sizeof(b[0]); i++){
        cout<<b[i];
    }
    cout<<endl;

    // Sizes
    printf("\nSizes:\n");
    printf("sizeof(int)  = %zu bytes\n", sizeof(int));
    printf("sizeof(char) = %zu bytes\n", sizeof(char));

    // Pointers
    int arr[3] = {10, 20, 30};
    int *ptr =arr; 
    printf("Base element: %d\n",*ptr); 
    printf("\nPointer addresses (each jump = sizeof(int))\n");
    printf("arr[0] address: %p\n", (void*)ptr);
    printf("arr[1] address: %p\n", (void*)(ptr + 1));
    printf("arr[2] address: %p\n", (void*)(ptr + 2));

   
    return 0;
}

// 1234
// abc

// Sizes:
// sizeof(int)  = 4 bytes
// sizeof(char) = 1 bytes
// Base element: 10

// Pointer addresses (each jump = sizeof(int))
// arr[0] address: 0x7ffd27837f14
// arr[1] address: 0x7ffd27837f18
// arr[2] address: 0x7ffd27837f1c
