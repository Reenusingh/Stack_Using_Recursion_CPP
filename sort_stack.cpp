#include <iostream>
#include <stack>
using namespace std;


void Sort_Push(stack<int>& st, int value){
    if(st.empty() || value>st.top()){
        st.push(value);
        return;
    }
    int tp = st.top();
    st.pop();
    Sort_Push(st,value);
    st.push(tp);
    
}
void Sort_Stack(stack<int>&st){
    if(st.empty()) return;
    int tp = st.top();
    st.pop();
    Sort_Stack(st);
    Sort_Push(st, tp);
}
void Print_Stack(stack<int>& st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main() {
    stack <int> st;
    st.push(2);
    st.push(5);
    st.push(3);
    st.push(4);
    
   Sort_Stack(st);
   Print_Stack(st);

    return 0;
}