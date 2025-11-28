
// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

// You must write a solution in O(log(m * n)) time complexity.

 

// Example 1:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:


// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 100
// -104 <= matrix[i][j], target <= 104


class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1, right = num;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long sq = mid * mid;

            if (sq == num) return true;
            else if (sq < num) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};
