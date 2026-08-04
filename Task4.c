/*For a first n natural number find missing values*/
#include<stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d first natural numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Missing elements in the array are:\n");
    for(i = 1; i <= n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[j] == i)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}