//link:= https://leetcode.com/problems/set-matrix-zeroes/description/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // cout << "Hello world!" << endl;
  vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,9,5}};

        vector<int> zerorow; //contains data of row that has zero in  it
        vector<int> zerocol; //contains data of col that has zero in it 

        int row = matrix.size();
        int col = matrix[0].size();

        //step 1 : findthe position of zeros
        for(int i =0; i<row; i++){
            for(int j =0; j<col; j++){
                if(matrix[i][j]==0){
                    zerorow.push_back(i);
                    zerocol.push_back(j);
                }
            }
        }

        //make row zero
        //for this make row = i constant and keep iteration throught columns
        //need to iterate through zerorow vector also

        int zerorowsize = zerorow.size();
        for(int i =0; i<zerorowsize; i++){
            //iterate through cols
            int targetrow = zerorow[i];
            for(int j =0; j<col; j++){
                matrix[targetrow][j]=0;
            }
        }

        //make col zero
        //for this make col = j constant and keep iteration throught rows
        //need to iterate through zerocol vector also

        int zerocolsize = zerocol.size();
        for(int j =0; j<zerocolsize; j++){
            //iterate through cols
            int targetcol = zerocol[j];
            for(int i =0; i<row; i++){
                matrix[i][targetcol]=0;
            }
        }


        //print
        for(int i =0; i<row; i++){
          for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
          }
          cout<<endl;
        }
  return 0;
}

