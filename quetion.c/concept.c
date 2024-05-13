
Example 1: Dangling Pointer After Deallocation
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  // Allocating memory for an integer
    *ptr = 10;  // Assigning a value

    free(ptr);  // Freeing the allocated memory

    // Now, ptr becomes a dangling pointer
    printf("Value: %d\n", *ptr);  // Dereferencing a dangling pointer

    return 0;
}
In this example:

We allocate memory for an integer using malloc.
We assign a value 10 to the memory location pointed by ptr.
Then, we free the allocated memory using free(ptr).
After free, ptr is now a dangling pointer because it still holds the address of the memory that has been deallocated.
Dereferencing ptr (using *ptr) after it has been freed results in undefined behavior. This can crash the program or give unexpected results.
Example 2: Dangling Pointer After Scope Ends
#include <stdio.h>

int *createInt() {
    int num = 25;
    int *ptr = &num;
    return ptr;  // Returning the address of a local variable
}

int main() {
    int *danglingPtr;

    danglingPtr = createInt();  // Assigning the address of a local variable

    // num goes out of scope, leaving danglingPtr pointing to an invalid memory location
    printf("Value: %d\n", *danglingPtr);  // Dereferencing a dangling pointer

    return 0;
}
In this example:

The createInt function creates an integer num with a value of 25 and returns the address of num.
In main, danglingPtr is assigned the address returned by createInt().
However, num in createInt is a local variable and goes out of scope when createInt returns.
This leaves danglingPtr pointing to an invalid memory location (the address of num which is no longer valid).
Dereferencing danglingPtr in main results in undefined behavior.
These examples demonstrate situations where pointers become dangling pointers, leading to undefined behavior when they are dereferenced. It's important to avoid using dangling pointers in your code to prevent such issues.