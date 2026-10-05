#include <stdio.h>
#include <stdlib.h>   // Required for exit()

#define max 3

int stack[max];
int top = -1;

int isempty() {
    return top == -1;
}

int isfull() {
    return top == max - 1;
}

void push(int value) {
    if (isfull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop() {
    if (isempty()) {
        printf("Stack Underflow! Cannot pop\n");
    } else {
        printf("%d popped from stack\n", stack[top--]);
    }
}

void display() {
    if (isempty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements are: ");

        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }

        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Check if Empty\n");
        printf("5. Check if Full\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            break;
        }

        switch (choice) {

            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                if (isempty()) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;

            case 5:
                if (isfull()) {
                    printf("Stack is full.\n");
                } else {
                    printf("Stack is not full.\n");
                }
                break;

            case 6:
                printf("Exiting program\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
