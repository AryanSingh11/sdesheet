//https://leetcode.com/problems/next-permutation/
//https://youtu.be/JDOXKqF60RQ?si=o23JTA8KoFop6T7h


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3};
    int n = nums.size();
        //step1: find peak
        int index = -1;
        for(int i = (n-2); i>=0; i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
        cout<<"index: "<<index<<endl;

        //if no peak that means array is max
        if(index == -1 ){
            reverse(nums.begin(), nums.end());
            return 0;
        }

        //swap with the smallest elem (> nums[index]) to right side of
        //the peak
        for(int i =n-1 ; i>index; i--){
            if(nums[i]>nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }

        //print
        cout<<"after swap: "<<endl;
        for(int x: nums){
            cout<<x<<" ";
        }
        cout<<endl;

        //reverse the elems to right side of the peak
        reverse(nums.begin()+index+1, nums.end());

        //print
        cout<<"after reverse: "<<endl;
        for(int x: nums){
            cout<<x<<" ";
        }
        cout<<endl;

        return 0;

}