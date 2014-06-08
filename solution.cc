// Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

// For example,
// Given n = 3,

// You should return the following matrix:
// [
//  [ 1, 2, 3 ],
//  [ 8, 9, 4 ],
//  [ 7, 6, 5 ]
// ]

class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > res(n, vector<int>(n, 0));
        int top = 0, bottom = n-1, left = 0, right = n-1;
        int num = 0;
        while(true) {
            for(int i = left; i <= right; ++i) 
                res[top][i] = ++num;
            if(++top > bottom) break;
            for(int i = top; i <= bottom; ++i)
                res[i][right] = ++num;
            if(--right < left) break;
            for(int i = right; i >= left; --i)
                res[bottom][i] = ++num;
            if(--bottom < top) break;
            for(int i = bottom; i >= top; --i)
                res[i][left] = ++num;
            if(++left > right) break;
        }
        return res;
    }
};
