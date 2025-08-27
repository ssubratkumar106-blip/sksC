#include <stdio.h>

char text[40];

void push(char ch, int j) {
    if (ch != '*')
        text[j] = ch;
}

char pop(int j) {
    return text[j];
}

int main() {
    char c;
    int j = 39, k;

    printf("Enter a string (* to end):\n");

    while (j >= 0) {
        c = getchar();
        if (c == '*')
            break;
        push(c, j);
        j--;
    }

    k = j + 1;

    printf("\nReverse String is: ");
    while (k < 40) {
        c = pop(k);
        printf("%c", c);
        k++;
    }

    return 0;
}
