#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static void dp(int index, vector<int> nums, vector<vector<int>>& ans){
  if(index>=nums.size()){
    ans.push_back(nums);
  }

  for(int i = index; i<nums.size() ; i++){
    // ds = nums; //ds should be what was passed from prev recursion
    swap(nums[index],nums[i]);
    dp(index+1, nums, ans);
    //back to prev state
    swap(nums[i],nums[index]);
    // nums=ds;
  }

}

int main() {
  // cout << "Hello world!" << endl;
  vector<int> nums = {1,2,3};
  vector<int> ds;
  vector<vector<int>> ans;
  dp(0, nums, ans);



  for(int i =0; i<ans.size(); i++){
    for(int j =0; j<ans[i].size(); j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}