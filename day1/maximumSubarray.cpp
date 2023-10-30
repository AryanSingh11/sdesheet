//https://leetcode.com/problems/maximum-subarray/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
        vector<int> nums =  {-2,1,-3,4,-1,2,1,-5,4};

        int maxsubarray =INT_MIN;
        int currsum = 0;
        for(int i =0; i<nums.size(); i++){
            currsum+=nums[i];
            maxsubarray = max(maxsubarray, currsum);
            currsum = max(currsum, 0);
        }

        cout<<maxsubarray<<endl;
        return maxsubarray;
    }


// Kadane's algorithm is a popular dynamic programming technique used to find the maximum sum of a subarray (contiguous elements) within a given array of numbers. This algorithm is particularly efficient and is often used to solve problems related to finding the maximum subarray sum.

// Here's a step-by-step explanation of Kadane's algorithm:

// 1. Initialize two variables, `maxEndingHere` and `maxSoFar`, to store the maximum subarray sum ending at the current position and the maximum subarray sum encountered so far. Both are initially set to negative infinity or zero, depending on whether you want to allow for subarrays with a sum of zero.

// 2. Iterate through the array from the beginning, one element at a time.

// 3. For each element in the array, update `maxEndingHere` by taking the maximum of the current element and the sum of the current element and `maxEndingHere`. This step effectively keeps track of the maximum subarray sum that ends at the current position.

//    `maxEndingHere = max(arr[i], arr[i] + maxEndingHere)`

// 4. Update `maxSoFar` by taking the maximum of `maxSoFar` and `maxEndingHere`. This step keeps track of the overall maximum subarray sum encountered so far.

//    `maxSoFar = max(maxSoFar, maxEndingHere)`

// 5. Continue this process for all elements in the array, and the final value of `maxSoFar` will be the maximum subarray sum.

// Here's a simple example in Python code to illustrate Kadane's algorithm:

// ```python
// def kadanes_algorithm(arr):
//     maxEndingHere = maxSoFar = arr[0]
    
//     for i in range(1, len(arr)):
//         maxEndingHere = max(arr[i], arr[i] + maxEndingHere)
//         maxSoFar = max(maxSoFar, maxEndingHere)
    
//     return maxSoFar
// ```

// Let's consider an example to see how this algorithm works:

// Input array: [-2, 1, -3, 4, -1, 2, 1, -5, 4]

// - maxEndingHere initially starts with -2.
// - After the first iteration, maxEndingHere becomes 1.
// - After the second iteration, it becomes -2.
// - After the third iteration, it becomes 4.
// - After the fourth iteration, it becomes 3.
// - After the fifth iteration, it becomes 5.
// - After the sixth iteration, it becomes 6.
// - After the seventh iteration, it becomes 1.
// - After the eighth and final iteration, it becomes 5.

// The maximum subarray sum is 6, which is the value of maxSoFar. It corresponds to the subarray [4, -1, 2, 1].

// Kadane's algorithm is efficient and has a time complexity of O(n), where n is the number of elements in the array, making it a practical choice for solving maximum subarray sum problems.