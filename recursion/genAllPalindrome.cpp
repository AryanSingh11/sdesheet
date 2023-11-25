#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end){
  while(start<=end){
    if(s[start++]!=s[end--]){
      return false;
    }
  }
  return true;
}

void solve(int index, string s, int& n, vector<string>& v, vector<vector<string>>& ans){
  if(index>=n){
    ans.push_back(v);
    return;
  }

  for(int i = index; i<n; i++){
    if(isPalindrome(s, index, i)){
      v.push_back(s.substr(index, i-index+1));
      solve(i+1, s, n, v, ans);
      //backtrack
      v.pop_back();
    }
  }

}

int main() {
  string s = "aaaa";
  vector<vector<string>> ans;
  vector<string> v;
  int n = s.length();
  solve(0, s, n, v, ans);



  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}