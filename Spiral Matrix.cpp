class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        // Check if the matrix is empty
        if(matrix.empty()) {
            return ans;
        }

        int dir = 1; // Direction: 1=right, 2=down, 3=left, 4=up
        int right = matrix[0].size() - 1, top = 0, left = 0, bottom = matrix.size() - 1;

        while((bottom >= top) && (right >= left)) {
            if(dir == 1) { // Moving right
                for(int i = left; i <= right; i++) {
                    ans.push_back(matrix[top][i]);
                }
                top++;
                dir = 2;
            } else if(dir == 2) { // Moving down
                for(int i = top; i <= bottom; i++) {
                    ans.push_back(matrix[i][right]);
                }
                right--;
                dir = 3;
            } else if(dir == 3) { // Moving left
                for(int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; // Fix: decrement bottom
                dir = 4;
            } else if(dir == 4) { // Moving up
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Fix: increment left
                dir = 1;
            }
        }

        return ans;
    }
};
