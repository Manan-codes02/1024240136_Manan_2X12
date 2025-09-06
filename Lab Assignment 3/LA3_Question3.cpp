// 3. Write a program that checks if an expression has balanced parentheses. 

#include <iostream>
#include <cstring>
#include<stack>
using namespace std;

#define MAX 100

bool isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool areParenthesesBalanced(char arr[]) {
    stack<char> st;
    int len = strlen(arr);
    char ch;

    for (int i = 0; i < len; i++) {
        ch = arr[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) {
                return false;
            }
            char topChar = st.top();
            st.pop();
            if (!isMatchingPair(topChar, ch)) {
                return false; // mismatched pair
            }
        }
    }
    return st.empty(); // if stack empty => balanced
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
