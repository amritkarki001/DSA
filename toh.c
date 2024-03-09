//write a program in c that implements the tower of hanoi problem using recursion
//Aim: To write a C program to implement the Tower of Hanoi problem using recursion.

//algorithm for above code 
//1. Start
//2. Declare the function toh with parameters n, source, destination, and auxiliary
//3. If n is equal to 1, then
//    1. Print "Move disk 1 from source to destination"
//    2. Return
//4. Call the function toh with parameters n-1, source, auxiliary, and destination
//5. Print "Move disk n from source to destination"
//6. repeat step 4 
//7. End
#include <stdio.h>

void toh(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("\nMove disk 2 from %c to %c", source, destination);
        return;
    }
    toh(n - 1, source, auxiliary, destination);
    printf("\nMove disk %d from %c to %c", n, source, destination);
    toh(n - 1, auxiliary, destination, source);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
    return 0;
}

