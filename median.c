#include <stdio.h>

float findMedian(int arr1[], int m, int arr2[], int n) {
    int merged[m + n];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }

    int totalElements = m + n;
    float median;

    if (totalElements % 2 == 0) {
        int mid1 = totalElements / 2;
        int mid2 = mid1 - 1;
        median = (merged[mid1] + merged[mid2]) / 2.0;
    } else {
        median = merged[totalElements / 2];
    }

    return median;
}

int main() {
    int m, n,i;
    scanf("%d %d", &m, &n);

    int marks_batch1[m];
    int marks_batch2[n];

    for (i = 0; i < m; i++) {
        scanf("%d", &marks_batch1[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &marks_batch2[i]);
    }

    float median = findMedian(marks_batch1, m, marks_batch2, n);
    printf("%.2f\n", median);

    return 0;
}
