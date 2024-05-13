// Problem Statement:-
// Harpreet is a student learning about matrix multiplication. She wants to write a program to 
// multiply two matrices, a and b, each of size N x N. Can you help her with the code?
// Write a program that takes an integer N as input and two matrices a and b of size N x N.
// Implement matrix multiplication and print the resulting matrix c.
// Note: A square matrix is where the number of rows equals the number of columns.
// Input format :
// The first line of input consists of an integer N, representing the matrix size.
// The next N lines consist of N space-separated elements in each line, representing the first matrix.
// After being separated by a new line, the next N lines consist of N space-separated elements in each line,
// representing the second matrix.
// Output format :
// The output prints the product of two matrices.
// Refer to the sample output for the formatting specifications.
// Code constraints :
// In the given scenario, the test cases fall under the following constraints:
// 2 ≤ N ≤ 8
// 0 ≤ elements ≤ 9
// Sample test cases :
// Input 1 :
// 3
// 2 3 2
// 3 2 3
// 3 3 3

// 4 5 6
// 2 3 1
// 1 2 3
// Output 1 :
// 16 23 21 
// 19 27 29 
// 21 30 30 

// Input 2 :
// 2
// 2 2
// 2 3

// 5 0
// 7 8
// Output 2 :
// 24 16 
// 31 24 

// Input 3 :
// 8
// 1 5 2 4 7 3 2 1
// 2 3 4 5 6 7 8 9
// 4 5 6 1 2 3 7 8
// 2 5 8 7 4 1 9 6
// 1 4 7 8 5 2 6 9
// 9 8 6 4 7 5 1 2
// 7 5 3 9 5 1 4 8
// 3 4 8 9 7 1 2 0

// 5 8 7 4 6 1 2 0
// 9 7 4 5 6 3 2 1
// 7 5 6 8 4 1 2 3
// 1 4 5 2 3 9 8 7
// 2 5 8 7 4 3 6 9
// 4 5 8 7 1 0 0 1
// 1 5 6 7 8 4 2 2
// 3 2 1 4 3 5 3 6
// Output 3 :
// 99 131 152 141 106 88 97 115 
// 145 200 236 248 183 155 137 181 
// 155 177 179 207 172 108 88 113 
// 157 201 217 233 202 166 146 169 
// 149 186 206 223 179 176 157 194 
// 204 243 255 231 185 110 128 136 
// 152 208 212 197 188 177 164 179 
// 136 178 206 184 146 133 148 159 
#include <stdio.h>
int main() {
    int r, c;
    scanf("%d", &r);
    c = r; // Since both matrices are square, columns = rows
    int arr[r][c];
    int arr2[r][c];
    int arr3[r][c]; // Resultant matrix
    // Input for the first matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Input for the second matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    // Multiplication Logic
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr3[i][j] = 0; // Initialize the element in result matrix
            for (int k = 0; k < r; k++) {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    // Display the result
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}