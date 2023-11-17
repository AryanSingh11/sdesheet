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

bool isSafe(int row, int col, vector<string> board, vector<int>& upperleftdiagonal, 
vector<int>& lowerleftdiagonal, vector<int>& left, int& n){
    //left side Q check
    if(left[row]==1){
        cout<<endl;
        cout<<"queen on left side: "<<endl;
        board[row][col]='Q'; 
        //board here is just a copy. We are doing this just to see what went wrong 
        //origial board wont be changed
        onlyCurrBoard(board);
        return false;
    }

    //lower left side Q check
    if(lowerleftdiagonal[row+col]==1){
        cout<<endl;
        cout<<"queen on lower left diagonal side: "<<endl;
        board[row][col]='Q'; 
        onlyCurrBoard(board);
        return false;
    }

    //upperleft side Q check
    if(upperleftdiagonal[n-1 + col - row]==1){
        cout<<endl;
        cout<<"queen on lower left diagonal side: "<<endl;
        board[row][col]='Q'; 
        onlyCurrBoard(board);
        return false;
    }

    return true;

}

void nQueen(int col, vector<string>& board, vector<vector<string> >& ans, 
vector<int>& upperleftdiagonal, vector<int>& lowerleftdiagonal, vector<int>& left, int& n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row = 0; row<n; row++){
        if(isSafe(row, col, board,upperleftdiagonal, lowerleftdiagonal, left, n)){
            //mark
            board[row][col]='Q';
            upperleftdiagonal[n-1 + col - row]=1;
            lowerleftdiagonal[row+col]=1;
            left[row]=1;
            //send for next col
            nQueen(col+1, board, ans, upperleftdiagonal, lowerleftdiagonal, left, n);

            //backtrack
            board[row][col]='.';
            upperleftdiagonal[n-1 + col - row]=0;
            lowerleftdiagonal[row+col]=0;
            left[row]=0;
        }
    }
}

int main(){
    int n = 8;


    vector<string> board(n);
    string s(n,'.');
    for(int i = 0; i < n; i++) {
        board[i] = s;
    }

    cout<<"entered"<<endl;
    vector<vector<string> > ans;    

    vector<int> upperleftdiagonal(2*n-1, 0); 
    //[n - (row-column)]  would give same val for all elems in smae diagonal
    vector<int> lowerleftdiagonal(2*n-1, 0);
    //[row+column] woudl give same val for all elems across same lower left diagonal
    vector<int> left(n, 0);
    //simply marks if that row has a queen

    nQueen(0, board, ans, upperleftdiagonal, lowerleftdiagonal, left, n);

    cout<<"final board is: ";
    cout<<ans.size()<<endl;

    printboard(ans);

    return 0;

}