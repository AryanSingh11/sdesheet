//create a m*n matrix and store -1 in them
//must do again 
// https://www.youtube.com/watch?v=t_f0nwwdg5o

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int traverse(int& m,
                  int& n,
                  int x, 
                  int y,
                  vector<vector<int>>& dp)
        {

        if(x==(m-1) && y==(n-1)){
            return 1;
        } 
        if(x>=(m) || y>=(n)){
            cout<<"since ( "<<x<<" , "<<y<<" )"<<endl;
            cout<<"returned"<<endl;
            cout<<endl;
            return 0;
        }

        if(dp[x][y]!=-1){
            //already calculated
            return dp[x][y];
        }else{
            //not calculated
                        //go down               //go right
            dp[x][y] = traverse(m,n,x+1,y,dp) + traverse(m,n,x,y+1,dp);

            return dp[x][y];
        }
    }


int main(){
    int m = 3; //rows
    int n = 2; //columns
    int i = 0, j=0;
    vector<vector<int>> dp(m, vector<int>(n, -1));
      int ans = traverse(m,n,i,j, dp);
      cout<<ans<<endl;
        return ans;
}