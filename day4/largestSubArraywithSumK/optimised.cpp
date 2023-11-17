// https://youtu.be/frf7qxiN2qU?si=hb-BRX_juUttlc7R

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,3, -1 ,4 ,-4};
    int k =3;

        int left =0; 
        int right =0; 
        long long sum = nums[0];
        int ss = nums.size();

        int longest =0;
        int count = 0;

        while(right<ss){
            while(left<right && sum>k){
                sum -= nums[left];
                left++;
            }

            if(sum==k){
                int len = right - left +1; //left++ k karam diff got reduced
                longest = max(longest, len);
                count++;
            }
            
            right++;
            if(right<ss){
                sum+=nums[right];
            }
        }

        cout<<"count: "<<count<<endl;
        cout<<"longest: "<<longest<<endl;

        return 0;
    }