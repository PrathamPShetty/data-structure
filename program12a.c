#include <stdio.h>
#include <stdlib.h>
int *ht, n, m, count = 0;
void insert(int key)
{
    int index = key % m;
    while (ht[index] != -1)
    {
        index = (index + 1) % m;
    }
    ht[index] = key;
    count++;
}
void display()
{
    if (count == 0)
    {
        printf("\nHash Table is empty");
        return;
    }
    printf("\nHash Table contents are:\n ");
    for (int i = 0; i < m; i++)
        printf("\n T[%d] --> %d ", i, ht[i]);
}
int main()
{
    printf("\nEnter the number of employee records (N): ");
    scanf("%d", &n);
    printf("\nEnter the size of the hash table (m): ");
    scanf("%d", &m);
    ht = (int *)malloc(m * sizeof(int)); // Allocate memory for m keys
    // Initialize hash table with -1 (empty slot)
    for (int i = 0; i < m; i++)
        ht[i] = -1;
    printf("\nEnter the %d key values for the employee records:\n", n);
    for (int i = 0; i < n; i++)
    {
        int key;
        scanf("%d", &key);
        insert(key);
    }
    // Displaying keys inserted into the hash table
    display();
    free(ht); // Free dynamically allocated memory
    return 0;
}