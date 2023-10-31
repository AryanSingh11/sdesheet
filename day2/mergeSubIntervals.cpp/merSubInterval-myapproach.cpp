#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  // vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> intervals = {{1,4},{4,5}};

        int ss= intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i = 1; i<ss; i++){
            int currstart = intervals[i][0];
            int currend = intervals[i][1];
            
            int prevLastval = ans.back()[1];
            cout<<"prevLastval: "<<prevLastval<<endl;

            //if 1,5 mein 1 is less than 3 in 1,3 then merge 1,3 and 1,5 to make 1,5
            if(currstart<=prevLastval){
              cout<<"old end value is " <<ans.back()[1]<<endl;
              ans.back()[1] = max(currend, ans.back()[1]);
              cout<<"new end value is " <<ans.back()[1]<<endl;
            }else{  //like 1,3   &  4,8 couldn't be merged
              ans.push_back({currstart, currend});
            }
        }

        //print
        for(int i =0; i<ss; i++){
          for(int j =0; j<=1; j++){
            cout<<ans[i][j]<<" ";
          }
          cout<<endl;
        }

         return 0;
  return 0;
}