#include <stdio.h>
main() {
    
    int i,j,arr[5];

    printf("Enter 5 integers for the 1D array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("1D Array Elements:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\n");

    int matrix[3][3];
    int sum = 0;

    printf("Enter 9 integers for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("2D Array (3x3 Matrix):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in 2D array: %d\n", sum);

    return 0;
}

