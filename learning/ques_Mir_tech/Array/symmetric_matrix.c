#include <stdio.h>
#define MAX 10

int isSymmetric(int mat[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (mat[i][j] != mat[j][i])
                return 0; // Not symmetric
    return 1; // Symmetric
}

int main() {
    int n, mat[MAX][MAX];
    printf("Enter size of square matrix (max %d): matrix (max %d): ", MAX, MAX);
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    if (isSymmetric(mat, n))
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");

    return 0;
}