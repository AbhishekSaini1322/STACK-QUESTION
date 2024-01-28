#include<iostream>
#include<Stack>
using namespace std;  

void solve(stack<int> &st,int &pos,int &ans){

    // base case
    if(pos == 1){
    
    ans = st.top();
    return;
        
    }
    // ek case hum krege
    pos--;
    int temp = st.top();
    st.pop();

    // recurison
    solve(st,pos,ans);

    // backtraking
    st.push(temp);

}

int getmiddleelement(stack<int> &st){

    int size = st.size();

    if(st.empty()){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else{

        // odd
        int pos = 0;

        if(size & 1){
            pos = size/2 + 1;
        }
        else{
            // even
            pos = size/2;
        }
        int ans = -1;
        solve(st,pos,ans);
        return ans;
    }
}

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    while(!st.empty()){
        cout<< st.top()<<" ";
        st.pop();
    }

 cout<<endl;
    int mid = getmiddleelement(st);
    cout<<"middle is: "<< mid <<endl;
     
      cout<<endl;

        return 0;

}