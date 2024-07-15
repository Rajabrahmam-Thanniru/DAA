#include <stdio.h>

void generateMagicSquare(int n) {
    int magicSquare[n][n];
    int i, j;

    // Initialize the magic square with 0
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }

    // Set the starting position
    int row = 0, col = n / 2;
     int num;
    // One by one, put all values in the magic square
    for ( num = 1; num <= n * n; num++) {
        magicSquare[row][col] = num;

        // Move to the next position diagonally up and right
        int nextRow = (row - 1 + n) % n;
        int nextCol = (col + 1) % n;

        // If the cell is already filled or out of the square
        if (magicSquare[nextRow][nextCol] != 0) {
            // Move down
            row = (row + 1) % n;
        } else {
            // Move diagonally up and right
            row = nextRow;
            col = nextCol;
        }
    }

    // Print the magic square
    printf("The Magic Square for n=%d is:\n\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", magicSquare[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the order of the magic square (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Magic square cannot be formed for even order.\n");
    } else {
        generateMagicSquare(n);
    }

    return 0;
}

