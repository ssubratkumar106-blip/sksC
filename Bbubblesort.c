#include <stdio.h>
#define MAX 20

int main() {
    int arr[MAX], i, j, k, temp, n, xchanges;

    // Input: number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input: array elements
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display unsorted list
    printf("Unsorted list is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Bubble sort
    for (i = 0; i < n - 1; i++) {
        xchanges = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                xchanges++;
            }
        }

        // Display after each pass
        printf("After pass %d: ", i + 1);
        for (k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");

        // If no swaps, the array is sorted
        if (xchanges == 0)
            break;
    }

    // Display sorted list
    printf("Sorted list is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
