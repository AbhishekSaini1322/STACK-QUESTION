#include<iostream>
#include<stack>
using namespace std;


    
//     void insertatbottom(stack<int> &st,int &element){

//         if( st.empty()){
//             st.push(element);
//             return;
//         }

//         // ek case 
//         int temp = st.top();
//         st.top();

//         // RECURSION
//         insertatbottom(st,element);

//         // BACKTRACKING
//         st.push(temp);
//     }

//     void ReverseStack(stack<int> &st){

//         // BASE CASE
//         if( st.empty()){
//             return;
//         }

//         // EK CASE 
//         int temp = st.top();
//         st.pop();

//         // RECURCIVE CALL
//         ReverseStack(st);

//         // backtraking
//         insertatbottom(st,temp);
//     }



// int main(){
     
//      stack<int> st;

//      st.push(10);
//      st.push(20);
//      st.push(30);
//      st.push(40);

//         // int element = 200;
//         // insertatbottom(st,element);
//     //      cout<<"Before reverse"<<endl;

//     //  while( !st.empty()){
       
//     //     cout<< st.top() <<" ";
//     //     st.pop();
//     //  }

//       ReverseStack(st);

    
//      while( !st.empty()){
//         cout<<"After reverse"<<" ";
//         cout<< st.top() <<" ";
//         st.pop();
//      }


// }


void insertAtBottom(stack<int> &st, int &element) {
  //base case
  if(st.empty()) {
    st.push(element);
    return;
  }

  //1 case main solve karunga
  int temp = st.top();
  st.pop();

  //baaaki recursion
  insertAtBottom(st, element);

  //backTrack
  st.push(temp);
}

void reverseStack(stack<int> &st) {
  //base case
  if(st.empty()) {
    return;
  }
  //1 case main solve krega
  int temp = st.top();
  st.pop();
  //refcursion
  reverseStack(st);
  //backtrack
  insertAtBottom(st,temp);
}


int main() {

  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  // int element = 400;
  // insertAtBottom(st,element);

// without reverse: 
// 30 20 10 

  reverseStack(st);
//   with reverse: 
//   10 20 30
  
  cout << "with reverse: " << endl;
// insertSorted(st,35);
  // sortStack(st);
  while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }


  return 0;
}