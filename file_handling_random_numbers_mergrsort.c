#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fptr;
    int i, n, j, temp;
    int arr[1000];
    fptr = fopen("random_numbers.txt", "r");
    if (fptr == NULL)
    {
        printf("Empty File!");
        exit(1);
    }
    for (i = 0; i < 1000; i++)
    {
        fscanf(fptr, "%d", &arr[i]);
    }
    fclose(fptr);
    for (i = 0; i < 1000; i++)
    {
        for (j = i + 1; j < 1000; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    fptr = fopen("random_numbers.txt", "w");
    if (fptr == NULL)
    {
        printf("Empty File!");
        exit(1);
    }
    for (i = 0; i < 1000; i++)
    {
        fprintf(fptr, "%d\n", arr[i]);
    }
    fclose(fptr);
    printf("Data sorted and written to file successfully!\n");
   
}
