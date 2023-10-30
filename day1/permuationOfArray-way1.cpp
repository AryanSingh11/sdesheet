//original: https://youtu.be/YK78FU5Ffjw
//article: https://takeuforward.org/data-structure/print-all-permutations-of-a-string-array/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void recurPermute(
      vector<int>& ds,
      vector<int>& nums,
      vector<vector<int>>& ans,
      vector<int>& freq,
      int& ss
){
      if(ds.size()==ss){
        ans.push_back(ds);
        return;
      }

      //iterate pointer through all the elems
      //use freq arr to determine if element's already been used
      for(int i =0; i<ss; i++){
        if(!freq[i]){
          ds.push_back(nums[i]);
          freq[i]=1;
          recurPermute(ds, nums, ans, freq, ss);
          ds.pop_back();
          freq[i]=0;
        }
      }
}

int main() {
  vector<int> nums = {1,2,3,4,5};
  int ss = nums.size();
  vector<int> freq(ss, 0);
  vector<int> ds;

  vector<vector<int>> ans;

  recurPermute(ds, nums, ans, freq, ss);



//print
for(int i=0; i<ans.size(); i++){
  for(int j=0; j<ans[i].size(); j++){
    cout<<ans[i][j]<<" ";
  }
  cout<<endl;
}

 cout<<endl;



// sort(ans.begin(), ans.end());
// //print
// for(int i=0; i<ans.size(); i++){
//   for(int j=0; j<ans[i].size(); j++){
//     cout<<ans[i][j]<<" ";
//   }
//   cout<<endl;
// }
   

  return 0;
}