#include<iostream>
#include<stack>
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0; // for '(' or any unknown
}

// Main function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> st; // stack to hold operators
    string postfix = ""; // resulting postfix expression

    for(int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        // 1. If character is operand (A-Z or a-z), add to postfix
        if(isalpha(ch)) {
            postfix += ch;
        }

        // 2. If character is '(', push to stack
        else if(ch == '(') {
            st.push(ch);
        }

        // 3. If character is ')', pop until '('
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // pop '('
        }

        // 4. If operator (+, -, *, /)
        else {
            // While stack is not empty and precedence of current operator
            // <= precedence of stack top (and top is not '(')
            while(!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    // 5. Pop any remaining operators from stack
    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix = "A+B*C";
    string postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;
    return 0;
}
