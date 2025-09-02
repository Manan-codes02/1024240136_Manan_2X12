// Given a string, reverse it using STACK. For example “DataStructure” should be output as “erutcurtSataD.” 
#include <iostream>
#include <cstring>  // for strlen
using namespace std;

#define MAX 100 

char stackArr[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
    }
    else {
        stackArr[++top] = c;
    }
}

char pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
        return '\0';
    } 
    else {
        return stackArr[top--];
    }
}

int main() {
    char str[MAX];

    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        push(str[i]);
    }

    cout << "Reversed string: ";
    for (int i = 0; i < len; i++) {
        cout << pop();
    }
    cout << endl;

    return 0;
}
