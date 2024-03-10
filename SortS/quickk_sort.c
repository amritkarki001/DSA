#include <stdio.h>
#include <conio.h>

int partition(int number[25], int first, int last) {
    int x = number[last];
    int i = first - 1;
    int j;
    for (j = first; j <= last - 1; j++) {
        if (number[j] <= x) {
            i = i + 1;
            int temp = number[i];
            number[i] = number[j];
            number[j] = temp;
        }
    }
    int temp = number[i + 1];
    number[i + 1] = number[last];
    number[last] = temp;
    return i + 1;
}

void quicksort(int number[25], int first, int last) {
    if (first < last) {
        int q = partition(number, first, last);
        quicksort(number, first, q - 1);
        quicksort(number, q + 1, last);
    }
}

int main() {
    int number[8] = {6, 9, 5, 0, 8, 2, 4, 7};
    int first = 0, last = 7; 
    int i;
    quicksort(number, first, last);
    for (i = 0; i < 8; i++) {
        printf(" %d ", number[i]);
    }
    return 0;
}

//write the algorithm
//1. Start
//2. Declare the function partition with parameters number[] and first and last
//3. Declare the variables x, i, and j
//4. Set x as the last element of the array
//5. Set i as first - 1
//6. For j = first to last - 1, do
//    1. If number[j] is less than or equal to x, then
//       1. Increment i by 1
//       2. Swap number[i] and number[j]
//7. Swap number[i + 1] and number[last]
//8. Return i + 1
//9. Declare the function quicksort with parameters number[], first, and last
//10. If first is less than last, then
//    1. Set q as the result of partition(number, first, last)
//    2. Call quicksort with parameters number, first, and q - 1
//    3. Call quicksort with parameters number, q + 1, and last
//11. Declare the main function
//12. Declare the array number[] with 8 elements
//13. Set first as 0 and last as 7
//14. Declare the variable i
//15. Call quicksort with parameters number, first, and last
//16. For i = 0 to 7, do
//    1. Print number[i]
//17. End
