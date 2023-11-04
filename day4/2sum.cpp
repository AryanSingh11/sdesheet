#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums ={2,7,11,15};
    int target = 9;


    map<int, int> m;
        int ss = nums.size();
        for(int i =0; i<ss; i++){
            int a = nums[i];
            int moreneeded = target - a;
            //seee if it exists in the map
            if(m.find(moreneeded)!=m.end()){
                cout<<m[moreneeded]<<" "<<i<<endl;
                break;
            }
            //else add it to the map
            m[a] = i;
        }
        
    

    return 0;
}