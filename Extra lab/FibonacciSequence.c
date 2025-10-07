#include <stdio.h>
int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}
int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

main() {
    int n, i;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    printf("\nFibonacci Sequence (Recursion) up to %d terms:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }

    int nth_recursive = fibonacci_recursive(n - 1);
    int nth_iterative = fibonacci_iterative(n - 1);

    printf("\n Fibonacci number (Recursive): %d\n", nth_recursive);
    printf("Fibonacci number (Iterative): %d\n", nth_iterative);

    return 0;
}

