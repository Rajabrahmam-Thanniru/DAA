#include <stdio.h>

void printUpperTriangle(int matrix[3][3], int n) {
	int i,j;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            if (j < i)
                printf("\t"); // Print a tab if the element is in lower triangle
            else
                printf("%d\t", matrix[i][j]); // Print the element in upper triangle
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 3;

    printf("Original Matrix:\n");
    int i,j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper Triangular Matrix:\n");
    printUpperTriangle(matrix, n);

    return 0;
}

