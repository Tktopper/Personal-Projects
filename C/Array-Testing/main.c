#include <stdio.h>

int main() {
    int size;

    // Ask the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an integer array of the specified size
    int myArray[size];

    // Ask the user to enter values for the array
    printf("Enter %d values for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &myArray[i]);
    }

    // Display the values stored in the array
    printf("Values stored in the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, myArray[i]);
    }

    return 0;
}
