#include <stdio.h>

#define MAX 10

// Function to calculate trace (sum of diagonal elements)
int findTrace(int mat[MAX][MAX], int n) {
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += mat[i][i];
    }
    return trace;
}

int main() {
    int n, mat[MAX][MAX];

    printf("Enter size of square matrix (max %d): matrix (max %d): ", MAX,MAX);
    scanf("%d", &n);
    if (n > MAX || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int trace = findTrace(mat, n);
    printf("Trace of matrix = %d\n", trace);

    return 0;
}