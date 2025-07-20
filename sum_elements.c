#include <stdio.h>

int main(void)
{
    int arry[] = {10, 20, 30};
    arry[1] = arry[0] + arry[2];
    printf("%d\n", arry[1]);
}