#include <stdio.h>
int main()
{
    int arr[5];
    int size, i, sum=0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    

    sum=sum+arr[i];
    }
    printf("sum of num: %d",sum);

    return 0;
}