/*WAP to reverse the order of element in an array*/
#include<stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
