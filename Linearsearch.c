#include <stdio.h>

int main() {
    int a[10], n, i, ele, f = 0;

    printf("\nEnter how many elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    printf("\nElement to search: ");
    scanf("%d", &ele);

    for(i = 0; i < n; i++) {
        if(a[i] == ele) {
            printf("\nElement found at position %d (index %d)", i + 1, i);
            f = 1;
            break;
        }
    }

    if(f == 0) {
        printf("\nElement not found.");
    }

    return 0;
}
