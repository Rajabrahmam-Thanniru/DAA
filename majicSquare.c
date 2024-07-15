#include<stdio.h>

void main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Magic square cannot form");
    else {
        int a[n][n];
        int i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                a[i][j] = 0;
            }
        }
        int m = n * n;
        int h = n / 2;
        i = 0;
        a[i][h] = 1;
        int k, r, c;
        for (k = 2; k <= m; k++) {
            if (i == 0) {
                r = n - 1;
            }
            else {
                r = i - 1;
            }
            if (h == n - 1) {
                c = 0;
            }
            else {
                c = h + 1;
            }
            if (a[r][c] != 0 || (i == 0 && h == n - 1)) {
                r = i + 1;
                c = h;
            }
            a[r][c] = k;
            i = r;
            h = c;
        }
        printf("The Magic Square for n=%d is:\n", n);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%3d ", a[i][j]);
            }
            printf("\n");
        }
    }
}
