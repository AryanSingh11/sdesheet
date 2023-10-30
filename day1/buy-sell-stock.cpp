// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> prices = {7,1,5,3,6,4};
  int lowest = INT_MAX;

  long long maxdiff = 0;
  for(int i =0; i<prices.size(); i++){
    lowest = min(lowest, prices[i]);
    if(prices[i]>lowest){
      long long currdiff = (long long ) (prices[i]-lowest);
      maxdiff = max(maxdiff, currdiff);
    }
  }
  cout<<maxdiff<<endl;
   

  return 0;
}