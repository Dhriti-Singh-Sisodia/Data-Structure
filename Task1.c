/* 1. Take size of array i from user
2. Insert elements as per the size into the array
3. Take size of array 2 from user
4. Insert element as per size2 array2
5. Create a new array of size size1 + size2 and insert values from array1 then array2*/

#include<stdio.h>
int main(){
    int size1, size2, array1[size1], array2[size2], newSize, newArray[newSize];
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array: ");
    for(int i = 0; i < size1; i++){
        scanf("%d", &array1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array: ");
    for(int i = 0; i < size2; i++){
        scanf("%d", &array2[i]);
    }
    for(int i = 0; i < size1; i++)
    {
        newArray[i] = array1[i];
    }
    for(int i = 0; i < size2; i++)
    {
        newArray[size1 + i] = array2[i];
    }
    printf("Merged array: ");
    for(int i = 0; i < newSize; i++){
        printf("%d ", newArray[i]);
    }
    return 0;
}

