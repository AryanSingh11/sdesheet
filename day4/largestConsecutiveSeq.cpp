#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {};
    unordered_set<int> s;
        int ss = nums.size();

        //base case
        if(ss==0) return 0;

        //inserted all into un set
        for(int i =0; i<ss ; i++){
            s.insert(nums[i]);
        }

        int longestcount = 1 ;
        for(int it: s){
            if(s.find(it-1)==s.end()){ 
                //we are at starting pt of that particular sequence
                int cnt = 0;
                int x = it;
                while(s.find(x)!=s.end()){
                    //next elem of seq mila
                    cnt++;
                    x = x+1; //inc x
                }
                longestcount = max(longestcount, cnt);
            }
        }

    return 0;
    
    
}