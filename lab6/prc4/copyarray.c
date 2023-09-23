
#include <stdio.h>
int main()
{
    int array1[5], array2[5], i;
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &array1[i]);
    }
    for (i = 0; i < 5; ++i)
    {
        array2[i] = array1[i];
    }

    printf("original array:\n");
    for (i = 0; i < 5; ++i)
    {
        printf("%d ", array1[i]);
    }
    printf("copied array:\n");

    for (i = 0; i < 5; ++i)
    {
        printf("%d ", array2[i]);
    }
    return 0;
}
