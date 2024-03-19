#include <stdio.h>
#include <math.h>
void tower(int n, int source, int temp, int destination)

{
    if (n == 0)
        return;
    tower(n - 1, source, destination, temp);
    printf("Move disc %d from %c to %c\n", n, source, destination);
    tower(n - 1, temp, source, destination);
}
int main()
{
    int n;
    printf("Enter the no of discs:");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    printf("no of moves are %d\n", (int)pow(2, n) - 1);
}
