// https://youtu.be/32Ll35mhWg0?si=am_LacnEhWolqaoh
//https://leetcode.com/problems/find-the-duplicate-number/description/

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;


//linked list cycle method 
int main() {
  
  int arr[] = {1,3,4,2,2};
  int slow =0;
  int fast =0;
  do{
    slow = arr[slow];
    fast = arr[arr[fast]];
  }while(slow!=fast);

  slow =0;
  do{
    slow = arr[slow];
    fast = arr[fast];
  }while(slow!=fast);

  cout<<fast<<endl;
  cout<<slow<<endl;
  return 0;
}