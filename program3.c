#include <stdio.h>
#include <stdlib.h>
#define size 5

int main() {
    int arr[size], top = -1, ch, n, i;
    for (;;) {
        system("cls");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                if (top == size - 1) {
                    printf("Stack is overflow");
                } else {
                    printf("Enter a number ");
                    scanf("%d", &n);
                    top++;
                    arr[top] = n;
                }
                break;
            case 2:
                if (top == -1) {
                    printf("Stack is empty");
                } else {
                    printf("Number Popped = %d\n", arr[top]);
                    top--;
                }
                break;
            case 3:
                if (top == -1) {
                    printf("Stack is underflow");
                } else {
                    for (i = top; i >= 0; i--) {
                        printf("%d\n", arr[i]);
                    }
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong Choice");
        }
    }
    return 0;
}
