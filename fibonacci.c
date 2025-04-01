#include <stdio.h>

// Function to calculate Fibonacci numbers recursively
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int m = 10;  // Number of Fibonacci numbers to print
    for (int i = 0; i < m; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}