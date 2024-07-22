class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        // Use two arrays to mark rows and columns that need to be zeroed
        vector<int> row0(rows, 1);
        vector<int> col0(cols, 1);

        // First pass: mark rows and columns
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    row0[i] = 0;
                    col0[j] = 0;
                }
            }
        }

        // Second pass: set rows to zero
        for (int i = 0; i < rows; i++) {
            if (row0[i] == 0) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Third pass: set columns to zero
        for (int j = 0; j < cols; j++) {
            if (col0[j] == 0) {
                for (int i = 0; i < rows; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    
    }
};