#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
  int nums1[] = {1,2,3,0,0,0}; 
  int m = 3;
  int nums2[] = {2,5,6};
  int n = 3;

  
   vector<int> ans;
       int i = 0; //i traverses over nums1
       int j =0; //j traverses over nums2

       while(i<m && j<n){
           if(nums1[i]<nums2[j]){
               ans.push_back(nums1[i]);
               cout<<"pushed back: "<<nums1[i]<<" from nums1"<<endl;
               i++;
           }else if( nums1[i]>nums2[j]){
               ans.push_back(nums2[j]);
               cout<<"pushed back: "<<nums2[j]<<" from nums2"<<endl;
               j++;
           }else if(nums1[i]==nums2[j]){
               //in thise case we will push back from nums1
                ans.push_back(nums1[i]);
               cout<<"pushed back: "<<nums1[i]<<" from nums1"<<endl;
                i++;
           }
       }

      cout<<"while looop ended"<<endl;
       //nums1 k kuch elements reh gaye
       while(i<m){
          ans.push_back(nums1[i]);
          cout<<"pushed back: "<<nums1[i]<<" from nums1"<<endl;
          i++;
       }

       //nums2 k kuch elements reh gaye
       while(j<n){
          ans.push_back(nums2[j]); 
          cout<<"pushed back: "<<nums2[j]<<" from nums2"<<endl;
          j++;
       }

      //printing
      cout<<"printing ans"<<endl;
      for(int x : ans){
        cout<<x<<"  ";
      }
      cout<<endl;

      //assigning
      for(int i=0; i<(m+n); i++){
        nums1[i]=ans[i];
      }

      //printing
      cout<<"printing nums1"<<endl;
      for(int x : nums1){
        cout<<x<<"  ";
      }
      cout<<endl;

      
    
    
  return 0;
}