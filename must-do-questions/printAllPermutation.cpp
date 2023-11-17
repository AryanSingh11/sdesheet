#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//try to revise everydat 
//https://youtu.be/YK78FU5Ffjw?si=A_gZ5qCT0nTCQwXt

void dp(vector<int>& v, vector<int>& ds, vector<vector<int>>& ans, vector<int>& freq){
  if(ds.size()==v.size()){
    ans.push_back(ds);
    return;
  }
  for(int i=0; i<v.size(); i++){
    if(freq[i]!=1){//not used
      //now do pick not pick
      //pick
      ds.push_back(v[i]);
      freq[i]=1; //used
      dp(v, ds, ans, freq);
      //not pick
      ds.pop_back();
      freq[i]=0;
    }
  }
}

int main() {
  vector<int> v = {1,2,3};
  vector<vector<int>> ans;
  vector<int> ds;
  vector<int> freq(v.size(), 0); //stores if the elem corresponding to index has been already used or not

  dp(v, ds, ans, freq);


//printing part 
  for(int i =0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}