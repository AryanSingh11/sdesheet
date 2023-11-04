// https://youtu.be/eD95WRfh81c?si=8B-4hBjbJKOThJtQ
//https://leetcode.com/problems/4sum/description/

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums={1,0,-1,0,-2,2}; 
    int target=0;
    set<vector<int>> s;
        sort(nums.begin(), nums.end());

        //print
        // for(int x: nums) cout<<x<<" ";
        // cout<<endl;

        int ss = nums.size();
        for(int i =0; i<ss; i++){
            for(int j=(i+1); j<ss; j++){
            int start = j+1;
            int end = ss-1;
            while(start<end){
                //cout<<"entered while loop"<<endl;
                long long sum = nums[i];
                sum+=+nums[j];
                sum+=nums[start];
                sum+=nums[end];

                // cout<<"i: "<<nums[i]<<endl;
                // cout<<"j: "<<nums[j]<<endl;
                // cout<<"k: "<<nums[start]<<endl;
                // cout<<"l: "<<nums[end]<<endl;
                // cout<<"total sum: "<<sum <<endl;
                // cout<<endl;

                if(sum==(long long)target){
                    //cout<<"equaled "<<endl;
                    vector<int> temp = {nums[i],
                                        nums[j],
                                        nums[start],
                                        nums[end]};
                    sort(temp.begin(), temp.end());
                    //cout<<"pushing "<<endl;
                    s.insert(temp);
                    start++;
                    end--;
                }else if (sum > target){
                    end--;
                }else if (sum < target){
                    start++;
                }
                }
            }
        }
        vector<vector<int>> ans(s.begin(), s.end());
        

    

    return 0;
}