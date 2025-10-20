#include <iostream>
#include <string>
using namespace std;

void isPalindrome(int number){
    string s = to_string(number);
    int length = s.length();

    char* left = &s[0];
    char* right = &s[length-1];

    bool isPalin = true;

    if(number < 0) isPalin = false;
    if(number >= 0 && number < 10) isPalin = true;

    while(left < right){
        if(*left != *right){
            isPalin = false;
            break;
        }
        left++;
        right--;
    }
    isPalin ? cout << s << " is a palindrome" << endl : cout << s << " is not a palindrome" << endl;
}

int main(int argc, char* argv[]){
    isPalindrome(atoi(argv[1]));
    return 0;
}