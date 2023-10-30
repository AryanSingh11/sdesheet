#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
        vector<int> nums = {2,0,2,1,1,0};

        int l=0,m = 0;
        int h = nums.size()-1;
        while(m<=h){
            if(nums[m]==0){   //0 is supposed to be at low
                swap(nums[l], nums[m]);
                m++;
                l++;
            }else if(nums[m]==1) { //1 is supposed to be at m
                m++;
            }else if (nums[m]==2){  //2 is supposed to be at h
                swap(nums[h], nums[m]);
                h--;
            }
        }

        //print
        for(int x: nums){
            cout<<x<<" ";
        }
        cout<<endl;
}