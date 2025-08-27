#include <stdio.h>

int main() {
    int a[10], n, i, ele, low, mid, high, f = 0;

    printf("\nEnter how many elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements of sorted array:\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    printf("\nElement to search: ");
    scanf("%d", &ele);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(ele < a[mid])
            high = mid - 1;
        else if(ele > a[mid])
            low = mid + 1;
        else {
            printf("\nElement found at position %d (index %d)", mid + 1, mid);
            f = 1;
            break;
        }
    }

    if(f == 0) {
        printf("\nElement not found.");
    }

    return 0;
}
