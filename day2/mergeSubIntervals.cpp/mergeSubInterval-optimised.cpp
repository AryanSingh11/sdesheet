// https://leetcode.com/problems/merge-intervals/
// https://youtu.be/IexN60k62jo?si=5Gc5eCWJaRKuwri1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
        int ss= intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for(int i = 0; i<ss; i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }
            for(int j = i+1; j<ss; j++){
                if(intervals[j][0]<=end){
                    end  = max(end, intervals[j][1]);
                }else{
                    break;
                }
            }
            ans.push_back({start, end});
        }

         return 0;
}