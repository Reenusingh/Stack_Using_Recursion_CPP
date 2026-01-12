include <iostream>
#include <stack>
using namespace std;

// Function to push element at bottom of stack
void Push_At_Bottom(stack<int>& st, int value){
    if(st.empty()){
        st.push(value);
        return;
    }
    int tp = st.top();
    st.pop();
    Push_At_Bottom(st,value);
    st.push(tp);
    
}
// Function to print stack
void Print_Stack(stack<int>& st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
// Main Function
int main() {
    stack <int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
   Push_At_Bottom(st, 9);
   Print_Stack(st);

    return 0;
}