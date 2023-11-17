#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void onlyCurrBoard(vector<string>& board){
    for(int i =0; i < board.size(); i++){
        for(int j = 0; j < board[i].size(); j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printboard(vector<vector<string>>& ans){
    for(int i =0; i < ans.size(); i++){
        //print one of the answer board 
        onlyCurrBoard(ans[i]);
        cout<<endl;
    }
}

bool isSafe(int row, int col, vector<string> board, int n){
    int duprow = row;
    int dupcol = col;

    //left side
    while(col>=0){
        if(board[row][col]=='Q'){
            // board[row][col]=='Q' //put so that we could see the print 
            // //this is just the copy of board 
            cout<<"queen on left side"<<endl;
            onlyCurrBoard(board);
            return false;
        }
        col--;
    }

    //make row col back to normal
    row  = duprow;
    col = dupcol;

    //check for upper ;eft diagonal
    while(row>=0 && col>=0){
        if(board[row][col]=='Q'){
            cout<<"queen in upper left diagonal"<<endl;
            onlyCurrBoard(board);
            return false;
        }
        col--;
        row--;
    }

    //make row col back to normal
    row  = duprow;
    col = dupcol;

    //check for lowe left diagonal //row inc & col dec
    while(row<n && col>=0){
        if(board[row][col]=='Q'){
            cout<<"queen in lowe left diagonal"<<endl;
            onlyCurrBoard(board);
            return false;
        }
        col--;
        row++;
    }

    return true;
}

void nqueens(int col, vector<string>& board, vector<vector<string>>& ans, int n){
    if(col==n){
        ans.push_back(board);
        return;
    }

    //iterates thru row
    //row
    for(int row = 0; row<n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col]='Q';
            nqueens(col+1, board, ans, n);
            //unmark //backtrack
            board[row][col]='.';
        }
    }
}

int main(){
  int n = 3;
  vector<vector<string>> ans;
  vector<string> board(n);
  string s(n, '.');

  for(int i=0; i<n; i++){
    board[i]=s;
  }

  nqueens(0, board, ans, n);

  cout<<"final board is: ";
  cout<<ans.size()<<endl;

  printboard(ans);

  return 0;
}