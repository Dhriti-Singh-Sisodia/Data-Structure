/* For a given array find out the repeated element */
#include<stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Repeated elements in the array are:\n");
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}