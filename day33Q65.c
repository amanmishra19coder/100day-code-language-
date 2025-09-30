/*Q65: Search in a sorted array using binary search.


Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/ 
#include<stdio.h>
int main()
{
    int n , i , key ; 
    printf("Enter the length of the array : "); // take input for the length of the array 
    scanf("%d",&n);

    int input[n] ; // declared an array to store input 

    printf("Enter the numbers in sorted order:\n");  // take input of numbers from the user 
    for(i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
    }

    printf("Enter the key to be searched : "); // take input for the key to be searched 
    scanf("%d",&key) ; 

    int low = 0 , high = n-1 , mid ; // initialize low , high and mid variables 

    while(low<=high) // binary search algorithm 
    {
        mid = (low+high)/2 ; 
        if(input[mid]==key) // if key is found at mid index 
        {
            printf("Found at index %d",mid) ; 
            return 0 ; 
        }
        else if(input[mid]<key) // if key is greater than mid element then search in right half 
        low = mid + 1 ; 
        else // if key is smaller than mid element then search in left half 
        high = mid - 1 ; 
    }

    printf("-1") ; // if key is not found in the array 

    return 0 ;
}