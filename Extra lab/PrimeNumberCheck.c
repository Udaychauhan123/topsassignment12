#include <stdio.h>

int main() {
    int num,j,i, isPrime;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    isPrime = 1;

    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    printf("\nPrime numbers between 1 and %d are:\n", num);

    for (j = 2; j <= num; j++) {
        isPrime = 1;

        for (i = 2; i <= j / 2; i++) {
            if (j % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", j);
    }

    printf("\n");

    return 0;
}

