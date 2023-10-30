// https://leetcode.com/problems/rotate-image/
// solution: https://takeuforward.org/data-structure/rotate-image-by-90-degree/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  // int n = matrix.size();
        // //transpose
        // for(int i =0; i<n; i++){
        //     for( int j=0; j<i; j++){
        //         swap(matrix[i][j], matrix[j][i]);
        //     }
        // }
        // //swap cols
        // for(int i  =0; i<n/2; i++){
        //     for( int j=0; j < n; j++){
        //         swap(matrix[j][i], matrix[j][n-i-1]);
        //     }
        // }

  vector<vector<int>> matrix = {{1,2,3}, {4,5,6},{7,8,9}};
  int cols = matrix[0].size();
  int rows = matrix.size();
  vector<vector<int>> ans(rows, vector<int>(cols, 1));
  //keep cols constant and vary row
  for(int j=0; j<cols; j++){
    for(int i = (rows-1); i>=0; i--){
      ans[j][rows-1-i] = matrix[i][j]  ;
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<endl;

  //printing ans array
  for(int i =0; i<ans.size(); i++){
    for(int j =0; j<ans[0].size(); j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
   

  return 0;
}


//optimised approach is
//take transpose of matrix then reverese each row 

