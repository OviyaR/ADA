#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubble(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
void print(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{   printf("RA19110260037\n");
    int arr[] = {37,27,41,71,21,10,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble(arr, n);
    printf("Sorted array: \n");
    print(arr, n);
    return 0;
}
