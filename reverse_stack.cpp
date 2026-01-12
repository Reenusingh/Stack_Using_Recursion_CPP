#include <iostream>
#include <stack>
using namespace std;


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
void Print_Stack(stack<int>& st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
void Reverse_Stack(stack<int>&st){
    if(st.empty()) return;
    int tp = st.top();
    st.pop();
    Reverse_Stack(st);
    Push_At_Bottom(st, tp);
}
int main() {
    stack <int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
   Reverse_Stack(st);
   Print_Stack(st);

    return 0;
}