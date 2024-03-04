#include <stdio.h>

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

