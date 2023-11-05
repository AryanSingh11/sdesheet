// Intuition
// When first approaching this problem, we might think about simulating the entire process: comparing 
//numbers, moving the smaller one to the end, and keeping track of the number of consecutive wins. 
//However, a closer inspection reveals a couple of key insights. 
//Firstly, if the game needs only one win (i.e., k=1k = 1k=1), 
//the winner of the first round is the answer. Secondly, if kkk is large enough (i.e., kkk is equal to
//or larger than the length of the array), the maximum element in the array is bound to 
//win eventually. These initial observations allow us to build a 
//strategy that handles these edge cases separately, providing an efficient approach for the main logic.

//https://leetcode.com/problems/find-the-winner-of-an-array-game/description/

//solution: https://leetcode.com/problems/find-the-winner-of-an-array-game/solutions/4250031/98-37-o-n-final-winner/?envType=daily-question&envId=2023-11-05

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    vector<int> arr= {2,1,3,5,4,6,7};
     int k = 2;
        if (k == 1) {
            return std::max(arr[0], arr[1]);
        }
        if (k >= arr.size()) {
            return *std::max_element(arr.begin(), arr.end());
        }

        int current_winner = arr[0];
        int consecutive_wins = 0;

        for (int i = 1; i < arr.size(); ++i) {
            if (current_winner > arr[i]) {
                consecutive_wins++;
            } else {
                current_winner = arr[i];
                consecutive_wins = 1;
            }

            if (consecutive_wins == k) {
                
                return current_winner;
            }
        }

        cout<<current_winner<<endl;
        return current_winner;
}
