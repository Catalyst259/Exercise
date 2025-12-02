#include <stdio.h>


// Pointer basics: Change the value of a variable using a pointer
int Tutor1(){
    int x = 42;
    int *p = &x; // p is a pointer to an integer, initialized to the address of x
    printf("x=%d\n",x); // 42
    printf("&x=%p  p=%p\n", (void*)&x, (void*)p); // address of x
    printf("*p=%d\n", *p); // Dequote p to get the value of x, 42
    *p = 100; // Change the value of x through the pointer p
    printf("x=%d\n",x); // 100
    return 0;
}


// Pointer with const qualifier
int Tutor2(){
    int a = 10, b = 20;
    const int *p1 = &a; // p1 is a pointer to a constant integer, *p1=30 not allowed, but p1=&b allowed
    int * const p2 = &b; // p2 is a constant pointer to an integer, *p2=30 allowed, but p2=&a not allowed
    printf("%d %d\n", *p1, *p2); // 10 20
    // *p1 = 30; // Error: cannot change the value of a constant
    p1 = &b; // Allowed: can change the address p1 points to
    *p2 = 30; // Allowed: can change the value of b through p2
    // p2 = &a; // Error: cannot change the address of a constant pointer
    printf("%d %d\n", *p1, *p2); // 20 30
    return 0;
}

// Pointer arithmetic
int Tutor3(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // p points to the first element of arr
    printf("%p -> %d\n", (void*)p, *p); // address of arr[0] -> 10
    p++; // Move to the next integer (4 bytes ahead)
    printf("%p -> %d\n", (void*)p, *p); // address of arr[1] -> 20
    p += 2; // Move 2 integers ahead
    printf("%p -> %d\n", (void*)p, *p); // address of arr[3] -> 40
    p--; // Move back to the previous integer
    printf("%p -> %d\n", (void*)p, *p); // address of arr[2] -> 30
    p -= 2; // Move back 2 integers
    printf("%p -> %d\n", (void*)p, *p); // address of arr[0] -> 10
    return 0;
}
int main(){
    Tutor3();
    return 0;
}