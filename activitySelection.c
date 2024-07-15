#include <stdio.h>

struct audit {
    int st, et, f;
};

void sort(struct audit a[], int n) {
    // Sorting the structure based on the increasing order of ending time
    struct audit temp;
    int i, j;
    for (i = 1; i < n; i++) {
        temp = a[i];
        for (j = i - 1; j >= 0; j--) {
            if (a[j].et > temp.et)
                a[j + 1] = a[j];
            else
                break;
        }
        a[j + 1] = temp;
    }
}

void ActivitySelection(struct audit a[], int n) {
    // Selecting the order of the faculty
    int i, j;
    i = 0;
    int c = 1;
    printf("f%d", a[i].f);
    for (j = 1; j < n; j++) {
        if (a[j].st >= a[i].et) {
            printf(" f%d", a[j].f);
            c++;
            i = j;
        }
    }
    printf("\n%d\n", c);
}

int main() {
    int n, i;
    scanf("%d", &n); // taking number of faculty as input
    struct audit a[n];
    for (i = 0; i < n; i++) {
        scanf("%d%d", &a[i].st, &a[i].et); // taking starting and ending time as input
        a[i].f = i;
    }
    sort(a, n);
   
    ActivitySelection(a, n);
    return 0;
}

