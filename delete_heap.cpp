#include<bits/stdc++.h>
using namespace std;

     void  insert(vector<int> &v, int x){
            v.push_back(x);
             int curIdx =  v.size()-1;
              while (curIdx!=0)
              {
                 int parIdx =  (curIdx-1)/2;
                  if(v[parIdx] < v[curIdx]){
                     swap(v[parIdx],v[curIdx]);
                  }else{
                     break;
                  };
                     curIdx = parIdx;
              }
              
     };

   void delele(vector<int> &v){
            v[0] = v[v.size()-1];
            v.pop_back();
            int curIdx = 0;
             int lastIdx = v.size()-1;
              int leftIdx = (curIdx*2)+1;
               int rightIdx  = (curIdx*2)+2;
                  while (true)
                  { 
                        if(v[leftIdx] >=  v[rightIdx] && v[leftIdx] > v[curIdx]){
                               swap(v[leftIdx] , v[curIdx]);
                                 curIdx = leftIdx;
                        }else if(v[rightIdx] >= v[leftIdx] && v[rightIdx] > v[curIdx]){
                               swap(v[rightIdx], v[curIdx]);
                               curIdx =  rightIdx;
                        }else{
                             break;
                        };

                           if(v[lastIdx] >= v[leftIdx]){
                                if(v[leftIdx] > v[curIdx]){
                                       swap(v[leftIdx],v[curIdx]);
                                       curIdx = leftIdx;
                                }
                           }else if(v[lastIdx] >= v[rightIdx]){
                                  if(v[rightIdx] > v[curIdx]){
                                       swap(v[rightIdx], v[curIdx]);
                                       curIdx = rightIdx;
                                  }                             
                           }else{
                             break;
                           }
                   };

                  
   };
    
      
 int main(){
       vector<int> v;
        int n;
         cin>>n;
           for(int i = 0; i<n;i++){
             int x; 
             cin>>x;
                insert(v,x);
           };
                    delele(v);
                    
             for(int i = 0; i<v.size() ; i++){
                   cout<<v[i]<<" ";   
             };

     return 0;
 }