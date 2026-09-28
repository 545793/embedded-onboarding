#include <stdio.h>
#include <stdlib.h>

// Swap two integers using pointers.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Print FizzBuzz for a number.
void FizzBuzz(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        printf("FizzBuzz\n");
    } else if (n % 3 == 0) {
        printf("Fizz\n");
    } else if (n % 5 == 0) {
        printf("Buzz\n");
    }
}

int main(void) {
    int x = 10;
    int y = 20;

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    // Dynamically allocate an array of 20 integers.
    int *arr = malloc(20 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Fill the array with numbers 1 to 20.
    for (int i = 0; i < 20; i++) {
        arr[i] = i + 1;
    }

    printf("\nFizzBuzz for array 1 to 20:\n");

    for (int i = 0; i < 20; i++) {
        printf("%d: ", arr[i]);
        FizzBuzz(arr[i]);
    }

    printf("\nFizzBuzz from 1 to 30:\n");

    for (int i = 1; i <= 30; i++) {
        printf("%d: ", i);
        FizzBuzz(i);
    }

    free(arr);

    return 0;
}