#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *start = NULL;
void begin(int value) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = start;
    start = newnode;
    printf("Node inserted : %d \n", value);
    
}
void display() {
    struct node *temp = start;
    printf("\n LINKED LIST : ");
    
    while(temp!=NULL) {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void main() {
    begin(10);
    begin(20);
    begin(30);
    display();
    getch();
}