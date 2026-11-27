#include <stdio.h>
int main() {
    int rows = 2, cols = 3;
    int first[2][3], second[2][3], sum[2][3];
    int i, j;

    printf("Enter first matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter second matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("\n Addition of two matrices is: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}