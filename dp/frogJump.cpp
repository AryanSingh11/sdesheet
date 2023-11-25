//https://www.codingninjas.com/studio/problems/frog-jump_3621012
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solve( int index, vector<int>& heights, vector<int> & dp){
    if(index==0) return 0;
    if(dp[index]!=-1) return dp[index];
    int left = solve(index-1, heights, dp) + abs(heights[index]-heights[index-1]);
    int right = INT_MAX;
    if(index>1){
        right = solve(index-2, heights, dp) + abs(heights[index]-heights[index-2]);
    }
    return dp[index]=min(left, right);
}


int main(){
    int n =4 ; 
    vector<int> heights = {10, 20 ,30 ,10} ;

    vector<int> dp(n+1, -1);
    int ans = solve(n-1, heights, dp);

    cout<<ans<<endl;
    return 0;
}