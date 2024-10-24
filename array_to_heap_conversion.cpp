#include<bits/stdc++.h>
using namespace std;
         
          void downHeapify(int lastLeafNode ,  vector<int> &v, int size){
                   int parIdx = lastLeafNode;
                       int lastIdx = size;
                      while (true)
                      {
                            int leftIdx = (parIdx*2)+1;
                              int rightIdx = (parIdx*2)+2;
                                  if(lastIdx > leftIdx && lastIdx > rightIdx){
                                      if(v[leftIdx] >= v[rightIdx] && v[leftIdx] > v[parIdx]){
                                           swap(v[leftIdx] , v[parIdx]);
                                             parIdx = leftIdx;
                                      }else if(v[rightIdx] >= v[leftIdx] && v[rightIdx] > v[parIdx]){
                                           swap(v[rightIdx],v[parIdx]);
                                           parIdx  = rightIdx;
                                      }else{
                                         break;
                                      }
                                  }else if(lastIdx>=leftIdx){ 
                                         if(v[leftIdx] > v[parIdx]){
                                             swap(v[leftIdx],v[parIdx]);
                                               parIdx = leftIdx;
                                         }
                                  }else if(lastIdx >= rightIdx ){
                                       if(v[rightIdx] > v[parIdx]){
                                         swap(v[rightIdx],v[parIdx]);
                                          parIdx =  rightIdx;
                                       }                                    
                                  }else{
                                     break;
                                  }
                              
                      };
                      
          };
           

      void array_to_heap_convert( vector<int> &v){
               int size =  v.size();
                int lastLeafNode = (size/2)-1;
               for(int i  = lastLeafNode ;  i>=0; i--){
                      downHeapify(i,v,size);
               }
                    
      };
       
 int main(){
          
           int n;
             cin>>n;
                vector<int> v(n);
            for(int i = 0; i<n; i++){
                  cin>>v[i];
            };

       array_to_heap_convert(v);

      for(int i = 0; i<n; i++){
           cout<<v[i]<<" ";
      };

     return 0;
 }