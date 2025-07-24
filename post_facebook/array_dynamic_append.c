#include <stdio.h>

void  append(int *array, int *size, int value)
{
    array[*size] = value;
    (*size)++;
}

void print_array(int *array, int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");
}

int main(void)
{
    int y[10] = {3, 2};
    int size = 2;

    int x = 1;

    append(y, &size, x);
    print_array(y, size);

    return 0;
}