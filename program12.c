#include <stdio.h>
#include <stdlib.h>

int *ht, n, m, count = 0;

void insert(int key) {
    int index = key % m;
    while (ht[index] != -1) {
        index = (index + 1) % m;
    }
    ht[index] = key;
    count++;
}

void display() {
    if (count == 0) {
        printf("\nHash Table is empty");
        return;
    }
    printf("\nHash Table contents are:\n ");
    for (int i = 0; i < m; i++)
        printf("\n T[%d] --> %d ", i, ht[i]);
}

int main() {
    printf("\nEnter the number of employee records (N): ");
    scanf("%d", &n);
    printf("\nEnter the size of the hash table (m): ");
    scanf("%d", &m);
    ht = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        ht[i] = -1;
    printf("\nEnter the %d key values for the employee records:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &ht[i]);
    for (int i = 0; i < n; i++) {
        if (count == m) {
            printf("\n~~~Hash table is full. Cannot insert record %d~~~", i + 1);
            break;
        }
        insert(ht[i]);
    }
 
    display();
    free(ht); 
    return 0;
}
