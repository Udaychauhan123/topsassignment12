#include <stdio.h>
// Function Declaration
long long factorial(int n);

int main(){
    int num;
    long long result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Function Call
    result = factorial(num);

    printf("Factorial of %d = %d\n", num, result);

    return 0;
}
// Function Definition
long long factorial(int n) {
    long long fact = 1;
    int i; 
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


