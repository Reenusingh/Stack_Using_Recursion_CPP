#include <iostream>
using namespace std;
#include <stack>

void TOH(int n, stack<int>& s, stack<int>& des, stack<int>& temp){
    if(n==0){
        return;
    }
    TOH(n-1, s, temp, des);
    int disk = s.top();
    s.pop();
    des.push(disk);
    TOH(n-1, temp, des, s);
}

void Print_Stack(stack<int>& st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main(){
    int n;
    cout<<"Enter Number of Disks: ";
    cin>>n;
    stack<int> s, des, temp;
    for(int i=n; i>=1;i--){
        s.push(i);
    }
    TOH(n,s,des,temp);
    Print_Stack(des);
    return 0;
}