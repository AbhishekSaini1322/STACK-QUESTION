#include<iostream>
#include<stack>
using namespace std;


    // void insertsorted(stack<int> &st,int element){

    //     // BASE CASE
    //     if( st.empty() || element > st.top()){
    //         st.push(element);
    //         return;
    //     }

    //     // 1 CASE 

    //     int temp = st.top();
    //     st.pop();

    //     // RECURSION

    //     insertsorted(st,element);

    //     // BACKTRAKING
    //     st.push(temp);


    // }
    
void insertSorted(stack<int> &st, int element) {
  //base case
  if(st.empty() || element > st.top()) {
    st.push(element);
    return;
  }

  //1 case sambhalna h
  int temp = st.top();
  st.pop();
  //recursion sambhalega
  insertSorted(st,element);
  //backtrack
  st.push(temp);
}

// void SortStack(stack<int> &st){

//     // BASE CASE
//     if( st.empty()){
//         return;
//     }

//     // EK CASE
//     int temp = st.top();
//     st.pop();

//     // RECURSION
//     SortStack(st);

//     // BRACKTRAKING
//    insertsorted(st.temp);

// }


void sortStack(stack<int> &st) {
  //base case
  if(st.empty()) {
    return;
  }

  //1 case
  int temp = st.top();
  st.pop();

  //recursion
  sortStack(st);

  //backtrack
  insertSorted(st, temp);
}

int main(){

    stack<int> st;

    st.push(2);
    st.push(6);
    st.push(-1);
    st.push(10);
    st.push(8);

    sortStack(st);

    while( !st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}