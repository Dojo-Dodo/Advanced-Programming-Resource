# Function-Call Stack
    Before we get into the code, it is important to understand how does the program works.

## What is Stack?
    Stack is a linear data structure that follows the Last In, First Out (LIFO) principle.
    MEANING that the recently added element to the stack is the one will be removed first.

![alt text](https://logicmojo.com/assets/dist/new_pages/images/stack-in-data-structure.webp "Stack Example")

## On the program side.
    Let say we have 3 of these functions to
```C++

#include <iostream>
#include <cmath>

using namespace std;

int pow(int a){
    return a*a;
}

float distance(int x1, int y1, int x2, int y2){
    return sqrt((pow(x2-x1)) + (pow(y2-y1)));
}

int main(void){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    cout << distance(x1, y1, x2, y2) << endl;
    return 0;
}
```

## Visualization
![alt text](https://github.com/Dojo-Dodo/Advanced-Programming-Resource/blob/main/Assets/Diagram-of-stack.png?raw=true "diagram of my program")

The program runs the most recently called function. When that function finishes, it’s destroyed and control returns to the previous one.