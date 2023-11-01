//link:= https://leetcode.com/problems/search-a-2d-matrix/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

        vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        int target = 3;
        int rowsize = matrix.size();
        int colsize = matrix[0].size();

        //find the row in which the target is contained
        int targetrow = 0;
        for(int i =0; i<rowsize; i++){
            if(matrix[i][0]<=target && matrix[i][colsize-1]>=target){
                targetrow = i;
                cout<<"target is in row: "<<i<<endl;
                break;
            }
        }

        bool ans = false;
        //apply bs in the target row
        int start = 0;
        int end =  colsize-1;
        int mid = start + ((end-start)/2);
        cout<<"first mid "<<mid<<endl;
        while(start<=end){
            if(matrix[targetrow][mid]< target){
                start = mid+1;
            }else if (matrix[targetrow][mid] > target){
                end = mid-1;
            }else{ //equal
                ans = true;
                cout<<"found it at: matrix ";
                cout<<targetrow<<" "<<mid<<": "<<matrix[targetrow][mid]<<endl;
                return true;
            }

            mid = start + ((end-start)/2);
        }


    return 0;
}