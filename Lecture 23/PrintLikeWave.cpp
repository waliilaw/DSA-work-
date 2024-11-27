#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nRows = 4, mCols = 3;
    vector<vector<int>> arr(nRows, vector<int>(mCols));

    int count = 1;
    for(int i = 0; i < nRows; i++) {
        for(int j = 0; j < mCols; j++) {
            arr[i][j] = count++;
        }
    }

    vector<int> ans;

    for(int col = 0; col < mCols; col++) {
        if(col & 1) {
            for(int row = nRows - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        } else {
            for(int row = 0; row < nRows; row++) {
                cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }
    }

    return 0;
}