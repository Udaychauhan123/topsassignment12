#include <stdio.h>
unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    int i;
    for (i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("\nFactorial of %d using recursion: %llu\n", n, factorial_recursive(n));
    printf("Factorial of %d using iteration: %llu\n", n, factorial_iterative(n));

    return 0;
}

