#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base Case: Only 1 disk to move
    if (n == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", source, destination);
        return;
    }

    // Step 1: Move top (n - 1) disks from source to auxiliary
    // Notice: destination acts as the helper peg here
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move the nth (largest) disk from source to destination
    printf("Move disk %d from peg %c to peg %c\n", n, source, destination);

    // Step 3: Move the (n - 1) disks from auxiliary to destination
    // Notice: source acts as the helper peg here
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main(void) {
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);// Number of disks

    // Pegs labeled 'A' (source), 'B' (auxiliary), 'C' (destination)
    char source = 'A';
    char auxiliary = 'B';
    char destination = 'C';

    printf("Solution for Tower of Hanoi with %d disks:\n\n", n);
    towerOfHanoi(n, source, auxiliary, destination);

    return 0;
}