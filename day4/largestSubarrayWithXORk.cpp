
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,3, -1 ,4 ,-4};
    int k =3;

vector<int> A = {4, 2, 2, 6, 4}; 
int B = 6;

    int ss = A.size();
    int xr = 0;
    map<int, int> m;
    m[xr]++;
    int count =0 ;
    for(int i =0; i<ss; i++){
        xr = xr^A[i]; //xr
        int x = xr^B;
        if(m.find(x)!=m.end()){
            count+=m[x];
        }
        //finally add curr xr to the map
        m[xr]++;
    }
    
    cout<<count<<endl;
    return count;
}
