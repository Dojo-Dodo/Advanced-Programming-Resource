# Pointer

## Understanding the pointer
![alt text](Assets/pointer-intro.png)

## The concept of the pointer
A pointer is a variable that stores the memory address of another variable. Instead of holding a direct value, it holds the address where the value is stored in memory.

## The syntax of the pointer
```C++
// declear pointer
int *a;
int x = 100;
// set the pointer to point to the variable
a = &x;

//print out address of the pointer
std::cout << &a <<std::endl

//print out the address which pointer is holding
std::cout << a << std::endl;

//print out the variable that it's pointing to
std::cout << *a << std::endl;
```

## COMMON MISTAKE
``` C++
int* x,y;
```
**x** variable is pointer which pointing to integer.
BUT, **y** is just an integer...

**If you want to declear 2 pointer in single line**
``` C++
int *x,*y;
```
## pointer point to the pointer???
You may have seen this type of pointer before...
``` C++
int** p;
```
This is a pointer, which points to the integer pointer...
**I know you might confused**
``` C++
#include <iostream>
using namespace std;

int main(){
    int **x, *y;
    int z = 25;
    
    y = &z;
    x = &y;
    
    //print out x address
    cout << &x << endl;
    //print out the address that pointer x points to...
    cout << x << endl;
    //print out the variable of the address that pointer x points to.. (It is address of z)
    cout << *x << endl;
    //print out the value of z
    cout << **x << endl;
}
```
