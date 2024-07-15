#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 3;
    
    // Calling the add function
    int result = add(num1, num2);
    
    // Printing the result
    printf("Sum: %d\n", result);
    
    return 0;
}

