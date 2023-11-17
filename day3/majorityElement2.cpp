#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,2,3};
    vector<int> ls;
        int ss = nums.size();

        //max 2 elements could be the answer

        int cnt1 = 0;
        int cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;
        for( int i =0; i<ss; i++){
            if(cnt1==0 && nums[i]!=el2){
                cnt1 = 1;
                el1 = nums[i];
            }else if (cnt2==0 && nums[i]!=el1){
                cnt2=1;
                el2 = nums[i];
            }else if ( nums[i]==el1){
                cnt1++;
            }else if(nums[i]==el2){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1=0; 
        cnt2=0;
        //manual check
        for(int i =0; i<ss; i++){
            if(nums[i]==el1) cnt1++;
            if(nums[i]==el2) cnt2++;
        }

        int limit = (int)ss/3+1;
        if(cnt1>=limit) ls.push_back(el1);
        if(cnt2>=limit) ls.push_back(el2);

        sort(ls.begin(), ls.end());

        for(int x: ls){
            cout<<x<<" ";
        }
        cout<<endl;

return 0;
}