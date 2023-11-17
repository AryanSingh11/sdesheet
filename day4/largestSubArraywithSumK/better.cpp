// https://youtu.be/frf7qxiN2qU?si=hb-BRX_juUttlc7R

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,3, -1 ,4 ,-4};
    // vector<int> arr = {1,2,1,2,1};

    int ss = arr.size();
  int target=0;
  // Write your code here
  map<long long, int> m;
  int longest = 0;

  //store commutative sum
  long long sum =0;
  
  for(int i =0; i<ss; i++){
    sum+=arr[i];
    if(sum==target){
      longest = max(longest, i+1);
    }

    long long rem = sum-target;
    if(m.find(rem)!=m.end()){
      int len = i-m[rem];
      longest = max(longest, len);
    }

    if(m.find(sum)==m.end()){
      m[sum]=i;
    }
  }

  cout<<longest<<endl;

return 0;
}




// int ss = nums.size();
//         int target=k;
//         // Write your code here
//         map<long long, int> m;
//         int longest = 0;
//         int count =0;

//         //store commutative sum
//         long long sum =0;
        
//         for(int i =0; i<ss; i++){
//             sum+=nums[i];

//             if(sum==target){
//                 longest = max(longest, i+1);
//                 count+=1;
//             }

//             long long rem = sum-target;
//             if(m.find(rem)!=m.end()){
//                 int len = i-m[rem];
//                 longest = max(longest, len);
//                 count+=1;
//             }

//             if(m.find(sum)==m.end()){
//                 m[sum]=i;
//             }
//         }

//         cout<<longest<<endl;

//         return count;

