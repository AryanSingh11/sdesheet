//link:= https://leetcode.com/problems/search-a-2d-matrix/
// https://youtu.be/l0YC3876qxg?si=URZ3QJSsp3-j5ulR


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = -1.00000;
    int n = 2147483647;
     if(x==1.0 || x==0){
            return x;
        }
        
        double ans = 1.0;
        long long nn = n;
        if(n<0) nn = abs(n)*1LL;
        while(nn){
            if(nn%2)//nn is odd
            {
                ans = ans*x;
                --nn;
            }else{ //nn is even
                x = x*x;
                nn = nn/2;
            }
        }

        if(n<0) return (double)1.0/(double)ans;
        cout<<ans<<endl;

    return 0;
}