#include <stdio.h>

char text[40];
int top = -1;

void push(char c) {
    if (top < 39 && c != '*') {
        top++;
        text[top] = c;
    }
}

char pop() {
    if (top >= 0) {
        return text[top--];
    }
    return '\0';
}

int main() {
    char ch;
    printf("Enter a string (* to end): ");

    while ((ch = getchar()) != '*' && top < 39) {
        push(ch);
    }
 
    printf("\nReverse String is: ");
    while (top >= 0) {
        putchar(pop());
    }

    return 0;
}