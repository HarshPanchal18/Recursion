#include <stdio.h>

int Max(const int *a, int low, int high)
{
    if (low >= high)
        return a[low];

    int mid = low + (high - low) / 2;

    int leftMax = Max(a, low, mid);
    int rightMax = Max(a, mid + 1, high);

    return leftMax >= rightMax ? leftMax : rightMax;
}

int Min(const int *a, int low, int high)
{
    if (low >= high)
        return a[low];

    int mid = low + (high - low) / 2;

    int leftMax = Min(a, low, mid);
    int rightMax = Min(a, mid + 1, high);

    return leftMax <= rightMax ? leftMax : rightMax;
}

int main(void)
{
    int arr[] = {5, 7, 9, 3, 2, 0, 8};

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum from the array: %d\n", Max(arr, 0, len - 1));
    printf("Minimum from the array: %d\n", Min(arr, 0, len - 1));
}