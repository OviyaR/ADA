#include <stdio.h>

int linear(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main(void)
{
    int arr[] = { 27, 37, 41, 10, 40 };
    int x =37;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linear(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}
