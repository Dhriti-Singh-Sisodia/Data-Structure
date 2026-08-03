/* TASK :-
1. Take size of array i from user
2. Insert elements as per the size into the array
3. Take size of array 2 from user
4. Insert element as per size2 array2
5. Create a new array of size size1 + size2 and insert values from array1 then array2

After combining both the array ask from user to select (take all values from the user) :
1. Insert new element :
--> at start
--> at k
--> at end
2. Delete an element
--> at start
--> at k
--> at end
3. search an element
ask value to be searched and give ans as found or not found */

#include<stdio.h>
int main()
{
    int size1, size2, i, j, k, newSize;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    
    int array1[size1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    
    int array2[size2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
    }
    
    newSize = size1 + size2;
    int combinedArray[newSize];
    
    // Inserting values from array1
    for(i = 0; i < size1; i++)
    {
        combinedArray[i] = array1[i];
    }
    
    // Inserting values from array2
    for(j = 0; j < size2; j++)
    {
        combinedArray[size1 + j] = array2[j];
    }
    
    printf("Combined Array:\n");
    for(i = 0; i < newSize; i++)
    {
        printf("%d ", combinedArray[i]);
    }

    printf("\nSelect an operation:\n");
    printf("1. Insert new element\n");
    printf("2. Delete an element\n");
    printf("3. Search an element\n");

    int choice;
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        int newElement, insertChoice;
        printf("Enter the element to insert: ");
        scanf("%d", &newElement);
        printf("Where do you want to insert?\n");
        printf("1. At start\n2. At k\n3. At end\n");
        scanf("%d", &insertChoice);
            
            if(insertChoice == 1)
            {
                // Insert at start
                for(i = newSize; i > 0; i--)
                {
                    combinedArray[i] = combinedArray[i - 1];
                }
                combinedArray[0] = newElement;
                newSize++;
            }
            else if(insertChoice == 2)
            {
                printf("Enter position k (0 to %d): ", newSize);
                scanf("%d", &k);
                if(k >= 0 && k <= newSize)
                {
                    for(i = newSize; i > k; i--)
                    {
                        combinedArray[i] = combinedArray[i - 1];
                    }
                    combinedArray[k] = newElement;
                    newSize++;
                }
                else
                {
                    printf("Invalid position!\n");
                }
            }
            else if(insertChoice == 3)
            {
                // Insert at end
                combinedArray[newSize] = newElement;
                newSize++;
            }
            else
            {
                printf("Invalid choice!\n");
            }

            printf("Updated Array:\n");
            for(i = 0; i < newSize; i++)
            {
                printf("%d ", combinedArray[i]);
            }
            printf("\n");
            break;

        case 2:
            printf("Where do you want to delete?\n");
            printf("1. At start\n");
            printf("2. At k\n");
            printf("3. At end\n");
            int deleteChoice;
            scanf("%d", &deleteChoice);
            
            if(deleteChoice == 1)
            {
                // Delete at start
                for(i = 0; i < newSize - 1; i++)
                {
                    combinedArray[i] = combinedArray[i + 1];
                }
                newSize--;
            }
            else if(deleteChoice == 2)
            {
                printf("Enter position k (0 to %d): ", newSize - 1);
                scanf("%d", &k);
                if(k >= 0 && k < newSize)
                {
                    for(i = k; i < newSize - 1; i++)
                    {
                        combinedArray[i] = combinedArray[i + 1];
                    }
                    newSize--;
                }
                else
                {
                    printf("Invalid position!\n");
                }
            }
            else if(deleteChoice == 3)
            {
                // Delete at end
                newSize--;
            }
            else
            {
                printf("Invalid choice!\n");
            }
            printf("Updated Array:\n");
            for(i = 0; i < newSize; i++)
            {
                printf("%d ", combinedArray[i]);
            }
            printf("\n");

            break;

            case 3:
            int searchElement, found = 0;
            printf("Enter the element to search: ");
            scanf("%d", &searchElement);
            for(i = 0; i < newSize; i++)
            {
                if(combinedArray[i] == searchElement)
                {
                    found = 1;
                    break;
                }
            }
            if(found)
            {
                printf("Element %d found in the array.\n", searchElement);
            }
            else
            {
                printf("Element %d not found in the array.\n", searchElement);
            }
            break;
        }
    return 0;
}
