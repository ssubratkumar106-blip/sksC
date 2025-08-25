#include <stdio.h>
#define MAX 20

int main() {
    int arr[MAX], i, j, k, temp, n;

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

    // Insertion sort
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;

        // Display after each pass
        printf("After pass %d: ", i);
        for (k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }

    // Display sorted list
    printf("Sorted list is:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
