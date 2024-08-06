#include <iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[2][2], int secondMatrix[2][2], int result[2][2]) {
    // Initializing elements of result matrix to 0
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int firstMatrix[2][2] = {{1, 2}, {3, 4}};
    int secondMatrix[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];

    multiplyMatrices(firstMatrix, secondMatrix, result);

    cout << "Resultant matrix:" << endl;
    displayMatrix(result);

    return 0;
}
