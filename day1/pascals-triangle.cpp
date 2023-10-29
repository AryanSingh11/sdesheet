#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int numRows = 10;
  //maxcolumnsize will also be 5


  vector<vector<int>> ans;
  for(int i = 0; i<numRows; i++){
    vector<int> temp(numRows, 1);
    //resize
    temp.resize(i+1);
    //then push
    ans.push_back(temp);

    //we will exclude the first and the last element of temp array 
    //from getting altered since we need tehn to be 1 only
    //calculation is needed only when numRows>=3
    if(numRows>=3){
      for(int j =1 ; j<i; j++){
            //temp[currow][currcolumn] = temp[prevROW][prevCOL]+temp[prevROW][sameCOL];
            ans[i][j] = ans[i-1][j-1]+ans[i-1][j];
      }
    }
    // ans.push_back(temp);
    
  }


//print
for(int i =0; i<ans.size(); i++){
  for(int j=0; j<ans[i].size(); j++){
    cout<<ans[i][j]<<" ";
  }
  cout<<endl;
}

  return 0;
}