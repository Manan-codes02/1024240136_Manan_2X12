// Given a string, reverse it using STACK. For example “DataStructure” should be output as “erutcurtSataD.” 

#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    stack<char> st;
    cout<<"Enter any to reverse: ";
    cin>>str;

    // Push all characters onto the stack
    for (char c : str) {
        st.push(c);
    }

    // Pop characters to build the reversed string
    string reversed = "";
    while (!st.empty()) {
        reversed += st.top();
        st.pop();
    }

    cout << "Original string: " << str << endl;
    cout << "Reversed string: " << reversed << endl;

    return 0;
}