#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> Getnextelement(int *arr,int size,vector<int> &ans){

   stack<int> st;
   st.push(-1);

   for(int i = size-1; i>=0; i--){
        int curr = arr[i];

        while(st.top() >= curr){
            st.pop();
        }
        ans[i] = st.top();

        st.push(curr);

   }
   return ans;
}

int main(){

    int arr[5] = {1,3,5,3,6};
    int size = 5;

     vector<int>ans(size);

     ans = Getnextelement(arr,size,ans);

     for(auto i: ans){
        cout<<i<<" ";
     }
     cout<<endl;

     return 0;
}