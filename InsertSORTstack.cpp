#include<iostream>
#include<stack>
using namespace std;


    void insertsorted(stack<int> &st,int element){

        // BASE CASE
        if( st.empty() || element > st.top()){
            st.push(element);
            return;
        }

        // 1 CASE 

        int temp = st.top();
        st.pop();

        // RECURSION

        insertsorted(st,element);

        // BACKTRAKING
        st.push(temp);


    }

int main(){

        stack<int> st;

        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);

        insertsorted(st,15);

        while( !st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }



}