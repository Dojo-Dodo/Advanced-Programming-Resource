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
x = &a;

//print out address of the pointer
std::cout << &a <<std::endl

//print out the address which pointer is holding
std::cout << a << std::endl;

//print out the variable that it's pointing to
std::cout << *a << std::endl;
```