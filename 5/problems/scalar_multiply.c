
void scalar_multiply(int rows, int columns, int matrix[rows][columns], 
    int scalar) {
    
    
    int row = 0;
    while (row < rows) {
        int col = 0;
        while (col < cols) {
            matrix[row][col] *= scalar;
            col++;
        }
        row++;
    }
}
