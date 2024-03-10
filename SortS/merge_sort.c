#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));
    
    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
    free(L);
    free(R);
}

void mergeSort(int A[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m + 1, r);
        merge(A, l, m, r);
    }
}

void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main() {
    int A[] = {9, 6, 5, 0, 8, 2};
    int arr_size = sizeof(A) / sizeof(A[0]);

    mergeSort(A, 0, arr_size - 1);

    printf("Sorted array: ");
    printArray(A, arr_size);

    return 0;
}

//writh the algorithm
//1. Start
//2. Declare the function merge with parameters A[], l, m, and r
//3. Declare the variables i, j, k, n1, and n2
//4. Declare the arrays L and R of size n1 and n2
//5. Copy the data to temp arrays L[] and R[]
//6. Merge the temp arrays back into arr[l..r]
//7. Copy the remaining elements of L[], if there are any
//8. Copy the remaining elements of R[], if there are any
//9. End
