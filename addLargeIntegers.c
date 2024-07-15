#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* addLargeIntegers(const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxSize;
if (len1 > len2) {
    maxSize = len1;
} else {
    maxSize = len2;
}
    int carry = 0;

    char* result = (char*)malloc((maxSize + 2) * sizeof(char));  // +2 for potential carry and null terminator
    int idx = maxSize + 1;
    result[idx] = '\0';

    while (len1 > 0 || len2 > 0) {
        int digit1, digit2;

if (len1 > 0) {
    digit1 = num1[--len1] - '0';
} else {
    digit1 = 0;
}

if (len2 > 0) {
    digit2 = num2[--len2] - '0';
} else {
    digit2 = 0;
}

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result[--idx] = (sum % 10) + '0';
    }

    if (carry > 0) {
        result[--idx] = carry + '0';
    }

    return result + idx;
}

int main() {
    char num1[1000], num2[1000];
    scanf("%s", num1);
    scanf("%s", num2);

    char* result = addLargeIntegers(num1, num2);
    printf("%s\n", result);

    // Free the memory allocated for the result
    free(result - 1);  // Subtract 1 to free the entire allocated block, including the null terminator

    return 0;
}

