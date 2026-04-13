#include <stdio.h>

void inverse2x2(int (*mat)[2], float (*inv)[2]) {
    /* ad-bc */
    int det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    if (det == 0) {
        printf("Inverse doesn't exist (singular matrix)\n");
        return;
    }
    /* [d/det  -b/det]
    [-c/det  a/det] */
    inv[0][0] =  (float)mat[1][1] / det;
    inv[0][1] = -(float)mat[0][1] / det;
    inv[1][0] = -(float)mat[1][0] / det;
    inv[1][1] =  (float)mat[0][0] / det;
}

void printMatrix(float (*mat)[2]) {
    printf("%.2f %.2f\n", mat[0][0], mat[0][1]);
    printf("%.2f %.2f\n", mat[1][0], mat[1][1]);
}

int main() {
    int mat[2][2]; float inv[2][2];
    printf("Enter 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &mat[i][j]);

    inverse2x2(mat, inv);
    printf("Inverse:\n");
    printMatrix(inv);

    return 0;
}