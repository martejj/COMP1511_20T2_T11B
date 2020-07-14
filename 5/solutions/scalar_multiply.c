#include <stdio.h>

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);

int main(void) {

    int matrix[2][2] = {
        {1, 0},
        {0, 1}
    };
    
    scalar_multiply(2, 2, matrix, 3);
    
    int answer = multiply(2, 2);
    
}

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {
    
    int row = 0;
    while (row < rows) {
        
        int col = 0;
        
        while (col < cols) {
            
            matrix[row][col] = matrix[row][col]*scalar;
            
            col++;
            
        }
        
        row++;   
        
    }
    
}

int multiply(int a, int b) {
    return a*b;
}
