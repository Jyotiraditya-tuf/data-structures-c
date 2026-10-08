#include <stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    int total_moves = (1 << n) - 1; // Total moves = 2^n - 1
    printf("Total moves required: %d\n", total_moves);
    for (i = 1; i <= total_moves; i++) {
        printf("Move disk from rod %d to rod %d\n", (i & i - 1) % 3 + 1, ((i | i - 1) + 1) % 3 + 1);
    }
    return 0;
}