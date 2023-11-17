//https://leetcode.com/problems/majority-element/description/

//for moore's voting algo, see this yt video
//https://www.youtube.com/watch?v=nP_ns3uSh80

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {6,6,6,7,7};

    int ss = nums.size();
        int count =1;
        int currmajority = nums[0];
        for(int i =1; i<ss; i++){
            if(count==0){
                count=1; //initialising new count for the new section
                currmajority = nums[i];
            }else if (nums[i]==currmajority){
                count++;
            }else if (nums[i]!=currmajority){
                count--;
            }
        }
        cout<<currmajority<<endl;

    return 0;
}