#include <iostream>
#include <climits>
#include <algorithm>

int kadaneAlgorithm(int a[], int &start, int &end, int n) {
    int currSum = 0, maxSum = INT_MIN;
    end = -1;
    int currStart = 0;
    for (int i = 0; i < n; i++) {
        currSum += a[i];
        if (currSum < 0) {
            currSum = 0;
            currStart = i + 1;
        } else if (maxSum < currSum) {
            maxSum = currSum;
            start = currStart;
            end = i;
        }
    }
    if (end != -1) {
        return maxSum;
    }
    int index = std::max_element(a, a + n) - a;
    start = end = index;
    maxSum = *std::max_element(a, a + n);
    return maxSum;
}

void maxMatrixSum(int matrix[][100], int n, int m) {
    int matrixLeft = -1, matrixRight = -1, matrixTop = -1, matrixBottom = -1;
    int maxSum = INT_MIN;
    int stored[100]; // Assuming maximum size for stored array
    int sum, start, end;
    for (int left = 0; left < m; left++) {
        std::fill(stored, stored + n, 0);
        for (int right = left; right < m; right++) {
            for (int i = 0; i < n; i++) {
                stored[i] += matrix[i][right];
            }
            sum = kadaneAlgorithm(stored, start, end, n);
            if (maxSum < sum) {
                maxSum = sum;
                matrixLeft = left;
                matrixRight = right;
                matrixTop = start;
                matrixBottom = end;
            }
        }
    }
    std::cout << "The Top Left of the rectangle is: " << matrixTop << " " << matrixLeft << std::endl;
    std::cout << "The Bottom Right of the rectangle is: " << matrixBottom << " " << matrixRight << std::endl;
    std::cout << "The sum of this rectangle is: " << maxSum << std::endl;
}

int main() {
    int matrix[100][100]; // Assuming maximum size for matrix
    int n, m; // Dimensions of the matrix

    // Input the dimensions of the matrix
    std::cin >> n >> m;

    // Input the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix[i][j];
        }
    }
for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j];
        }
    }
    // Find and print the maximum sum sub-matrix
    maxMatrixSum(matrix, n, m);

    return 0;
}

