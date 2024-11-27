#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int cols = matrix[0].size();
        int count = 0;
        int total = row * cols;

        int startRow = 0, startCol = 0;
        int endRow = row - 1, endCol = cols - 1;

        while(count < total) {
            for(int index = startCol; index <= endCol && count < total; index++) {
                ans.push_back(matrix[startRow][index]);
                count++;
            }
            startRow++;

            for(int index = startRow; index <= endRow && count < total; index++) {
                ans.push_back(matrix[index][endCol]);
                count++;
            }
            endCol--;

            for(int index = endCol; index >= startCol && count < total; index--) {
                ans.push_back(matrix[endRow][index]);
                count++;
            }
            endRow--;

            for(int index = endRow; index >= startRow && count < total; index--) {
                ans.push_back(matrix[index][startCol]);
                count++;
            }
            startCol++;
        }

        return ans;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = solution.spiralOrder(matrix);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}