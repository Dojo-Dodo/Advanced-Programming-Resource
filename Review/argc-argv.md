# Argc & Argv
    We have seen these strange parameters on the main function like this...
```C++
int main(int argc, char* argv[]){
    /* Do something */
    return 0;
}
```

**argc** = The number of arguments passed to the program.

**argv** = The array(vector) of string which holding each argument

## Then, what is argument???
```
./a.out Hello World 1 2 3 4 5
```
An argument is an value that you pass to a program on the command line.

## How to get those value?
```C++
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    for(int i=0; i<argc; i++){
        cout << argv[i] << endl; 
    }
    return 0;
}
```
**input**
```
    g++ main.cpp
    ./a.out Hello World 1 2 3 4 5
```
**output**
```
    ./a.out
    Hello
    World
    1
    2
    3
    4
    5
```

**REMINDER** The first element of argv is always the name of executable file (./a.out)

## atoi()
**atoi()** is a function that input ASCII and return int .
Before using those argument numbers, we need to cast them with **atoi()** first!

```C++
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int sum = 0;
    for(int i=0; i<argc; i++){
        sum += atoi(argv[i]);
    }
    cout << sum << endl;
    return 0;
}
```
input
```
g++ main.cpp
./a.out 10 20 30 40
```
output
```
100
```