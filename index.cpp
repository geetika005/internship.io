#include<bits/stdc++.h>
using namespace std;
struct Queue{
    stack<int> st1,st2;
    void enqueue(int val){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(val);
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    void dequeue(){
       
        cout<<st1.top();
        st1.pop();
    }
} ;
struct DeQueue{
    stack<int> st1,st2;
    void enqueue_front(int val){
        st1.push(val);
    }
     void enqueue_back(int val){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(val);
         while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
    }
    void dequeue_front(){
        cout<<st1.top();
        st1.pop();
    }
     void dequeue_back(){
          while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
        cout<<st2.top();
        st2.pop();
        
         while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
      
    }
} ;
 
int main()
{
  DeQueue q;
q.enqueue_front(1);
q.enqueue_front(2);
q.enqueue_back(3);
q.dequeue_front(); 
q.dequeue_back();
 
 Queue s;
 s.enqueue(4);
 s.enqueue(5);
 s.enqueue(6);
 s.dequeue();

    return 0;
} 

/** Time complexity - 
   Enqueue operation-O(n) 
   Dequeue operation-O(1)
   Enqueue_front operation-O(1) 
   Enqueue_back operation-O(n) 
   dequeue_front operation-O(1)  
   dequeue_back operation-O(n) 
Space Complexity - O(n) **/ 
