#include <stdio.h>

// Function to calculate determinant using pointers
int determinant(int (*mat)[2]) {
    /* (a*d) - (b*c)*/
    return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
}

int main() {
    int mat[2][2];

    printf("Enter 2x2 matrix elements:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &mat[i][j]);

    int det = determinant(mat);
    printf("Determinant = %d\n", det);

    return 0;
}