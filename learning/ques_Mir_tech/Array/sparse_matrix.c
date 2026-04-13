#include <stdio.h>
#define MAX 10

void displaySparse(int sparse[][3], int r) {
    printf("Sparse Matrix (row col value):\n");
    for (int i = 0; i < r; i++)
        printf("%d %d %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
}

int main() {
    int mat[MAX][MAX], sparse[MAX*MAX][3];
    int rows, cols, count = 0;

    printf("Enter matrix rows & cols: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] != 0) {
                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = mat[i][j];
                count++;
            }
        }

    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    displaySparse(sparse, count);
    return 0;
}