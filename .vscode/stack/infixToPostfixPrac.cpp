#include<iostream>
#include<stack>
using namespace std;

int precedence(char op){
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

string infixToPostfix(string infix){
    stack<char> st;
    string postfix = "";

    for(int i = 0; i < infix.length(); i++){
        char ch = infix[i];

        if(isalpha(ch)){
            postfix += ch;
        }
        else if(ch == '('){
            st.push(ch);
        }
        else if(ch == ')'){6
            while(!st.empty() && st.top() != '('){
                postfix += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }
        else { // operator
            while(!st.empty() && precedence(st.top()) >= precedence(ch)){
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    // Pop remaining operators
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix = "(A+B)*C";
    string postfix = infixToPostfix(infix);
    cout << "Postfix: " << postfix << endl;
    return 0;
}
