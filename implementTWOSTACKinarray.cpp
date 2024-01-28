#include<iostream>
#include<stack>
using namespace std;
 
class Stack{
     public:

  int*arr;
  int size;
  int top1;
  int top2;

  Stack(int size){

    arr = new int[size];
    this->size=size;
    top1=-1;
    top2=size;
  }

  
  void push1(int data){
   
   if(top1-top2 == 1){
     cout<<"OVERFLOW"<<" ";
   }
   else{
        top1++;
        arr[top1]=data;
   }

  }

  void push2(int data){

    if(top1-top2 == 1){
        cout<<"OVERFLOW"<<" ";
    }
    else{
        top2--;
        arr[top2]=data;
    }
  }

  void pop1(){

    if(top1==-1){
        cout<<"UNDERFLOW"<<" ";
    }
    else{

        arr[top1]=0;
        top1--;
    }
  }

  void pop2(){
        if(top2 == size){
            cout<<"UNDERFLOW"<<" ";

        }
        else{
            arr[top2]=0;
            top2++;
        }
  }

  void print(){
    cout<<endl;
    cout<<"Top1 "<<top1<<" ";
    cout<<"Top2 "<<top2<<" ";

    for(int i=0; i<size; i++ ){
        cout<<arr[i]<<" ";
        
    }

   
  }

};


int main(){

    Stack st(4);
    st.print();

    st.push1(40);
    st.print();

    
    return 0;
}