#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and cols of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and cols of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Validate multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    // Pointer declarations
    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r1 * c1; i++) {
        scanf("%d", (pA + i));
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2 * c2; i++) {
        scanf("%d", (pB + i));
    }

    // Initialize result matrix to 0
    for (int i = 0; i < r1 * c2; i++) {
        *(pC + i) = 0;
    }

    // Matrix multiplication using pointers
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                *(pC + i*c2 + j) += 
                    (*(pA + i*c1 + k)) * (*(pB + k*c2 + j));
            }
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", *(pC + i*c2 + j));
        }
        printf("\n");
    }

    return 0;
}