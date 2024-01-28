#include<iostream>
#include<stack>
using namespace std ;

    void insertatbottom(stack<int> &st,int &element){

        if( st.empty()){
            st.push(element);
            return;
        }

        // ek case 
        int temp = st.top();
        st.top();

        // RECURSION
        insertatbottom(st,element);

        // BACKTRACKING
        st.push(temp);
    }

int main(){

    stack<int> st;
    st.push(30);
    st.push(20);
    st.push(10);



    while( !st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    
     int element = 300;

     insertatbottom(st,element);

     
    while( !st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}