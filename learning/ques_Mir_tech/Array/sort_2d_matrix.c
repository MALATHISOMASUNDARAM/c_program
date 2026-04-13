#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];

    // Input
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sorting rows based on first element
    for (int i = 0; i < rows - 1; i++) {
        for (int j = i + 1; j < rows; j++) {

            if (matrix[i][0] > matrix[j][0]) {

                // Swap entire rows
                for (int k = 0; k < cols; k++) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[j][k];
                    matrix[j][k] = temp;
                }
            }
        }
    }

    // Output
    printf("Sorted matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}