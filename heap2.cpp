#include<bits/stdc++.h>
using namespace std;
   class MaxHeap{
       vector<int>  v;
       public:
          MaxHeap(){
             
          };

           void upHeap(int curIdx){
                  while (curIdx!=0)
                  {
                       int parIdx = (curIdx-1)/2;
                        if(v[parIdx] < v[curIdx]){
                                swap(v[parIdx] , v[curIdx]);
                                
                        }else{
                             break;
                        };
                        curIdx =  parIdx;
                  };
                  
           };
            
           void push(int val){
                 v.push_back(val);
                   int curIdx = v.size()-1;
                  upHeap(curIdx);
           };

           void print(){ 
                     for(int i = 0; i<v.size();i++){
                         cout<<v[i]<<" ";
                     }
           };
            
           
   };
  
 int main(){
            MaxHeap heap;
              int n;
                 cin>>n;
                 while (0<n)
                 {
                         int x;
                         cin>>x;
                            heap.push(x);
                        n--;
                 };

                 
            //  heap.push(10);
            //  heap.push(20);
            //   heap.push(30);
            //   heap.push(50);
                heap.print();
     return 0;
 }