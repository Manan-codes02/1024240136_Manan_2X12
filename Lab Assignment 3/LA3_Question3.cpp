// 3. Write a program that checks if an expression has balanced parentheses. 

#include <iostream>
#include <cstring>
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
        return '\0';
    } 
    else {
        return stackArr[top--];
    }
}

bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool areParenthesesBalanced(char arr[]) {
    int len = strlen(arr);
    char ch;

    for (int i = 0; i < len; i++) {
        ch = arr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } 
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {
                return false;
            }
            char popped = pop();
            if (!isMatchingPair(popped, ch)) {
                return false; // mismatched pair
            }
        }
    }

    return (top == -1); // if stack empty => balanced
}

int main() {
    char arr[MAX];

    cout << "Enter expression: ";
    cin >> arr;

    if (areParenthesesBalanced(arr))
        cout << "Parentheses are balanced." << endl;
    else
        cout << "Parentheses are NOT balanced." << endl;

    return 0;
}
