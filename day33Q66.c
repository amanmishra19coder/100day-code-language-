/*Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main()
{
    int n, i, key;
    printf("Enter the length of the sorted array : "); // take input for the length of the array
    scanf("%d", &n);

    int input[n + 1]; // declared an array to store input with one extra space for new element

    printf("Enter the numbers in sorted order:\n"); // take input of numbers from the user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    printf("Enter the key to be inserted : "); // take input for the key to be inserted
    scanf("%d", &key);

    // Find the position where the key should be inserted
    int pos = n; // Default position is at the end
    for (i = 0; i < n; i++)
    {
        if (input[i] > key)
        {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i > pos; i--)
    {
        input[i] = input[i - 1];
    }

    // Insert the new element at the found position
    input[pos] = key;

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) // Print the array with the new element
    {
        printf("%d ", input[i]);
    }

    return 0;
}